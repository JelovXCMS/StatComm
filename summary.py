## open database
import sqlite3
## read php data, and fix unicode
import phpserialize as php
from StringIO import StringIO
import re
## handle time
import time
import datetime

## error
import math
import ROOT

from optparse import OptionParser

from branches_list import *

parser=OptionParser()
parser.add_option("-f","--file",help="db file [default=%default]",default="~dorigo/public/quest_copy/data/data.db")
parser.add_option("-p","--pag",help="only print questionnaires for this PAG [default=%default]",default="")
parser.add_option("-d","--debug",help="debug",default=False,action="store_true")

opts,args=parser.parse_args()
debug=opts.debug

conn = sqlite3.connect(opts.file)
c = conn.cursor()
pag = opts.pag

## for Asymm CP errors
#import betainv
#beta = betainv.create_betainv_instance()

class summary():

    def __init__(self):
        # yes or no: XXX :(yes,no)
        self.cont_={}
        self.dont_norm = []

    def fill(self,key,value): ## for string value
        if key not in self.cont_:
            self.cont_[key] = {}
        if value not in self.cont_[key]:
            self.cont_[key][value] = 0.
        self.cont_[key][value] += 1.

    def get(self,key):
        return self.cont_[key]

    def dontnorm(self,key):
        self.dont_norm.append(key)

    def norm(self):
        for key in self.cont_:
            if key in self.dont_norm: continue
            S=0.0
            for v in self.cont_[key]: S += self.cont_[key][v]
            #  for v in self.cont_[key]: self.cont_[key][v] /= S

    def getFractions(self,key):
        fracs=[]
        labels=[]
        for v in self.cont_[key]:
            fracs.append( self.cont_[key][v])
            labels.append(v)
        return (fracs,labels)

    def print_keys(self):
        print "---- SUMMARY KEYS ----"
        print ','.join([v for v in self.cont_])
        print "----------------------"

summ = summary()

recent= datetime.date(2015,1,1)

# prepare the output tree
ttree = ROOT.TTree("questdata","SC questionnaire data")

print "RECENT definition is",recent

npass=0
nfail=0
ntot=0
toparse=""
for idx,row in enumerate(c.execute("SELECT * from questionnaires;")):
    
    ID = row[0]
    oldID = row[2]
    date = row[1]
    data = row[4]
    ntot += 1

    #isFinal = bool(row[3])
    #if not isFinal: continue # check done with updates

    subdate= datetime.date.fromtimestamp(date)

    if debug:
        print "-------------",ID,"----------------"
        print "RAW", data
        print subdate


    ## there is a problem with unicode characteds
    #data=re.sub('\xfc','UU',data)
    ## these guys has two substitutions one that requires two and one that requires 3  ch
    if ID=='b325b9d4626bdd8ee49a7f86ddc0e182': 
        data = data.replace(u'\u03c8','PSI')
        data=re.sub('[^\x00-\x7f]','NN',data)  ## psi sqrts
    if ID=='70d3b304a8cc0d1e0123a89df32a89b8' or ID=='134b232ebb32c86586863afe0316c6c3': 
        data=re.sub('[^\x00-\x7f]','III',data,count=1) #III
        data=re.sub('[^\x00-\x7f]','TH',data,count=1) #TH
    if ID=='6582382b25949b03c2c4809bc03d9fc3' or ID=='687cc754ce3a46227ca99933cbe3e63e':
        continue
        # it has  >10 unicode characters
        data=re.sub('[^\x00-\x7f]','AA',data,count=6) #TH
        data=re.sub('[^\x00-\x7f]','XXX',data,count=5) #TH

    #default
    data=re.sub('[^\x00-\x7f]','XXX',data)

    if debug:
        print "PARSED", data
        find = re.search('[^\x00-\x7f]',data)
        if find:
            print "Find NON ASCII caracter '" + find.group(0) +"'"

    
    try:
        #data=re.sub('[^\x00-\x7f]','XXX',data)
        quest=php.load(StringIO(data))
    except ValueError:
        try:
            data = row[4]
            data=re.sub('[^\x00-\x7f]','XX',data)
            quest=php.load(StringIO(data))
        except ValueError:
            try:
                data = row[4]
                data=re.sub('[^\x00-\x7f]','XX',data,count=1)
                data=re.sub('[^\x00-\x7f]','XXX',data)
                quest=php.load(StringIO(data))
            except ValueError:
                try:
                    data = row[4]
                    data=re.sub('[^\x00-\x7f]','XXX',data,count=1)
                    data=re.sub('[^\x00-\x7f]','XX',data)
                    quest=php.load(StringIO(data))
                except ValueError:
                    nfail+=1
                    continue

    if debug:
        print quest

    if '__updates' in quest and quest['__updates']!=ID: 
        if debug:  print "UPDATES", quest['__updates'], ID, quest['__updates']==ID
        continue

    if pag != "" and 'secac_wg' in quest and quest['secac_wg'] != pag:
        continue

    # fill the string for the ttree
    key_val_list = []
    for key in branches:
        if key in quest:
            key_val = quest[key]
            if branches[key] == 'B': # boolean
                if key_val == "yes": key_val='1'
                elif key_val == "no" or key_val == "doesntapply" or key_val == "dont" or key_val == "undecided": key_val='0'
                else:
                    print "Error, expected yes or no, got ", key_val
                    key_val='0'
            #  else: key_val = "\"" + key_val + "\""
        else: key_val="0"#"\"\""

        key_val=re.sub('\n',' ',key_val)
        key_val=re.sub('\r',' ',key_val)
        key_val=re.sub(',',';',key_val)
        if key_val=="": key_val="0"
        key_val_list.append(key_val)

    # let's add the date
    key_val_list.append('%d-%d-%d' % (subdate.year, subdate.month, subdate.day))
    key_val_list.append('%d' % subdate.year)
    key_val_list.append('%d' % subdate.month)
    key_val_list.append('%d' % subdate.day)
    # and also the CADI number parsed
    if "secac_cadi_text" in quest:
        tmps = quest["secac_cadi_text"][4:6]
        if tmps=="": tmps="0"
        if re.sub("[0-9]*","",tmps) != "": tmps="0"
        key_val_list.append(tmps)
        tmps = quest["secac_cadi_text"][7:10]
        if tmps=="": tmps="0"
        if re.sub("[0-9]*","",tmps) != "": tmps="0"
        key_val_list.append(tmps)
    else:
        key_val_list.append(["0","0"])

    if debug:
        print "csv parsed: ", ",".join(key_val_list)
    toparse += ",".join(key_val_list)
    toparse += "\n"
    
    npass +=1
    extras = [""]
    if subdate > recent:
        extras .append("_recent")

    summ.fill("year","%d"%subdate.year)

    for e in extras:
        if 'secgi_faqaware' in quest:
            summ.fill('faq' + e , quest['secgi_faqaware'])

        if 'intervals_software_combine' in quest and 'secac_wg' in quest:
            summ.fill('combine_wg'+e,quest['secac_wg'])


        for key in quest:
            if 'intervals_software_' in key: 
                label = re.sub('intervals_software_','',key)
                if label != 'textarea':summ.fill('interval'+e, label)
            if 'secunf_technique_' in key:
                label = re.sub('secunf_technique_','',key)
                if label != 'textarea':summ.fill('unfolding'+e, label)
            if 'secfitting_gof_p' in key:
                label = re.sub('secfitting_gof_p_','',key)
                #print label
                if label != 'textarea':summ.fill('pvalue'+e, label)
                #    #gt99p9 fiveto99 nnto99p9 p1to1 oneto5 ltp1 
                if 'secac_wg' in quest:
                    summ.fill('pval_extreme_wg'+e+'_norm',quest['secac_wg'])
                if label in ['gt99p9', 'p1to1','ltp1','nnto99p9'] and 'secac_wg' in quest:
                    summ.fill('pval_extreme_wg'+e,quest['secac_wg'])


    #print quest
print "using info from",npass,"questionnaires", "(NTOT=",ntot,"FAIL PARSE",nfail,")"

import unicodedata
toparse = unicodedata.normalize('NFKD', toparse).encode('ascii','ignore')
itoparse = ROOT.istringstream(toparse)
ttree.ReadStream(itoparse,branches_str,',')
ttree.SaveAs("quest_data.root")

for e in ["","_recent"]:
    summ.dontnorm('pval_extreme_wg'+e+'_norm')
    summ.dontnorm('pval_extreme_wg'+e)
summ.norm()
summ.print_keys()
## DRAW

import matplotlib
matplotlib.use('pdf')
import matplotlib.pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages
import numpy as np

#colors = ['yellowgreen', 'gold', 'lightskyblue', 'lightcoral']
colors = ['lightskyblue', 'lightcoral','yellowgreen', 'gold', 'blue', 'darkgreen','darkred','gray']

pp = PdfPages('summary.pdf')
with plt.xkcd():
    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('year')
    labels, fracs = (list(t) for t in zip(*sorted(zip(labels, fracs))))
    explode=[]
    for v in labels: explode.append(0.02)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("year of submission")
    plt.savefig(pp, format='pdf')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('faq')
    ax1.pie(fracs, explode=[0,0.05], labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'}, autopct='%.0f%%',)
    ax1.axis('equal') 

    plt.suptitle("FAQ AWARE")
    plt.savefig(pp, format='pdf')
    

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('faq_recent')
    ax1.pie(fracs, explode=[0,0.05], labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("FAQ AWARE (2015+)")
    plt.savefig(pp, format='pdf')

    print "Intervals",summ.get('interval')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('interval')
    explode=[]
    for v in labels: explode.append(0.01)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("interval software")
    plt.savefig(pp, format='pdf')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('interval_recent')
    explode=[]
    for v in labels: explode.append(0.01)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("interval software (2015+)")
    plt.savefig(pp, format='pdf')
    
    if 'combine_wg' in summ.cont_:
        fig, ax1 = plt.subplots()
        fracs,labels=summ.getFractions('combine_wg')
        explode=[]
        for v in labels: explode.append(0.01)
        ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
        ax1.axis('equal') 
        plt.suptitle("subgroups using combine")
        plt.savefig(pp, format='pdf')

    if 'combine_wg_recent' in summ.cont_:
        fig, ax1 = plt.subplots()
        fracs,labels=summ.getFractions('combine_wg_recent')
        explode=[]
        for v in labels: explode.append(0.01)
        ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
        ax1.axis('equal') 
        plt.suptitle("subgroups using combine (2015+)")
        plt.savefig(pp, format='pdf')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('unfolding')
    explode=[]
    for v in labels: explode.append(0.01)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("unfolding")
    plt.savefig(pp, format='pdf')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('unfolding_recent')
    explode=[]
    for v in labels: explode.append(0.01)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("unfolding (2015+)")
    plt.savefig(pp, format='pdf')

    fig, ax1 = plt.subplots()
    fracs,labels=summ.getFractions('pvalue')
    explode=[]
    for v in labels: explode.append(0.01)
    ax1.pie(fracs, explode=explode, labels=labels , colors=colors, wedgeprops={'linewidth': 1,'edgecolor':'black'},autopct='%.0f%%',)
    ax1.axis('equal') 
    plt.suptitle("pvalue")
    plt.savefig(pp, format='pdf')


     
    data=[]
    what ='pvalue_recent'
    print "PVALUE KEYS:"," ".join( [x for x in summ.get(what) ]) 
    #gt99p9 fiveto99 nnto99p9 p1to1 oneto5 ltp1 
    if 'ltp1' in summ.get(what):data.append( summ.get(what)['ltp1']) 
    else: data.append(0.)
    if 'p1to1' in summ.get(what):data.append( summ.get(what)['p1to1'] ) 
    else: data.append(0.)
    if 'oneto5' in summ.get(what):data.append( summ.get(what)['oneto5'])
    else: data.append(0.)
    if 'fiveto99' in summ.get(what):data.append( summ.get(what)['fiveto99'])
    else: data.append(0.)
    if 'nnto99p9' in summ.get(what):data.append( summ.get(what)['nnto99p9'])
    else: data.append(0.)
    if 'gt99p9' in summ.get(what):data.append( summ.get(what)['gt99p9'])
    else: data.append(0.)

    S= 0.0
    for d in data: S+=d
    for i in range(0,len(data)):
        data[i] /= S

    dataNorm=data[:]
    dataNorm[0] /= (0.1-0.)/100.
    dataNorm[1] /= (1.-0.1)/100.
    dataNorm[2] /= (5.-1.)/100.
    dataNorm[3] /= (99.-5.)/100.
    dataNorm[4] /= (99.9 - 99.)/100.
    dataNorm[5] /= (1.0 -99.9)/100.

    fig = plt.figure()
    pos=np.arange(len(data))
    ax = fig.add_axes((0.1, 0.2, 0.8, 0.7))
    rects1 = ax.bar(pos, data, 0.25, color='lightskyblue')
    #rects2 = ax.bar(pos-0.25, dataNorm, 0.25, color='lightcoral')

    ax.spines['right'].set_color('none')
    ax.spines['top'].set_color('none')

    #ax.legend( (rects1[0], rects2[0]), ('fraction', 'rangeNorm') )

    xTickMarks = ['<0.1%','0.1-1%','1-5%','5-99%','99-99.9%','>99.9%']
    ax.set_xticks(pos)
    xtickNames = ax.set_xticklabels(xTickMarks)
    plt.setp(xtickNames, rotation=45, fontsize=10)
    ax.tick_params(axis='both', direction='out', top=False, right=False)

    #plt.xticks([])
    plt.yticks([])
    plt.suptitle("p-value (2015+)")

    plt.savefig(pp, format='pdf')

    ##
    ## summ.dontnorm('pval_extreme_wg'+e+'_norm')
    ## summ.dontnorm('pval_extreme_wg'+e)
    #e='_recent'
    e=''
    norm = summ.get('pval_extreme_wg'+e+'_norm')
    numerator = summ.get('pval_extreme_wg'+e)

    data = []
    err = [] ## central errors, 
    errLow=[] ## C-P intervals
    errHigh=[] ## C-P intervals
    labels=[]
    for key in numerator:
        p=numerator[key]/norm[key] ## compact writing
        data.append(p)
        labels.append(key)
        err.append( 1./math.sqrt(norm[key]) * math.sqrt( p*(1.-p) ))
        n = norm[key] ## compact writing
        x= numerator[key] ## compact writing
        a=0.682689492137086
        #low = beta.betainv(a/2.,x,n-x+1)
        #hi = beta.betainv(1.-a/2.,x+1,n-x)
        low = ROOT.TEfficiency.ClopperPearson(n,x,a,False) 
        hi = ROOT.TEfficiency.ClopperPearson(n,x,a,True)
        errLow.append( p-low)
        errHigh.append( hi -p )
        print key,p,"low=",low,"high",hi

    fig, ax1 = plt.subplots()
    fig = plt.figure()
    pos=np.arange(len(data))
    ax = fig.add_axes((0.1, 0.2, 0.8, 0.7))
    width=0.25
    rects1 = ax.bar(pos-width/2., data,width, color='lightskyblue',  yerr=[errLow,errHigh], ecolor='black')
    #ax.errorbar(pos-width/2., data, yerr=errCP, fmt='')

    ax.spines['right'].set_color('none')
    ax.spines['top'].set_color('none')

    xTickMarks = labels
    ax.set_xticks(pos)
    xtickNames = ax.set_xticklabels(xTickMarks)
    plt.setp(xtickNames, rotation=45, fontsize=10)
    ax.tick_params(axis='both', direction='out', top=False, right=False)

    ## plt.xticks([])
    ## plt.yticks([])

    #plt.suptitle("WG for pvalue extreme 1% (2015+)")
    plt.suptitle("WG for pvalue extreme 1% (ALL)")
    plt.savefig(pp, format='pdf')

pp.close()

