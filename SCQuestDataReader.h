//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Nov 24 15:32:23 2017 by ROOT version 6.08/06
// from TTree questdata/SC questionnaire data
// found on file: /afs/cern.ch/user/e/echapon/workspace/public/StatisticsCommittee/Questionnaire/quest_data.root
//////////////////////////////////////////////////////////

#ifndef SCQuestDataReader_h
#define SCQuestDataReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>

#include <iostream>
using std::cout;
using std::endl;

// Header file for the classes stored in the TTree if any.

class SCQuestDataReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Char_t          secfitting_bkgshapesyst_textarea[404];
   Char_t          secpdf_faq_obssens[13];
   Char_t          secmva_robustness_textarea[535];
   Char_t          secunf_eventweights[15];
   Char_t          secmva_variableselection_textarea[500];
   Char_t          secsyst_syststat[4];
   Char_t          secsyst_twiki[4];
   Char_t          intervals_toygen_textarea[255];
   Char_t          secac_email_text[108];
   Char_t          intervals_approach_pllimits[9];
   Char_t          secfitting_teststat_unbinnedl[10];
   Char_t          secpdf_compinter_propercit[4];
   Char_t          secunf_binbybin[4];
   Char_t          secunf_conditionnumber_textarea[832];
   Char_t          secpdf_faq[4];
   Char_t          secfitting_modelchoice_sbtemplates[12];
   Char_t          intervals_ts[12];
   Char_t          secunf_software_tunfold[8];
   Char_t          intervals_roostatsclsfc[12];
   Char_t          __submit[15];
   Char_t          intervals_approach_bayesianflat[13];
   Char_t          secmva_inputcorrelations_textarea[200];
   Char_t          intervals_useasyformulae[4];
   Char_t          secfitting_modelchoice_theoryinspired[15];
   Char_t          secsyst_crosscheck_whattodo_textarea[528];
   Char_t          secmva_outputuse_fit[4];
   Char_t          secpdf_compinter_description[4];
   Char_t          intervals_toygen[14];
   Char_t          intervals_approach_plintervals[12];
   Char_t          secmva_type_plikelihood[12];
   Char_t          intervals_theoryerror_textarea[524];
   Char_t          intervals_ts_tsdetail_textarea[506];
   Char_t          secother_combination_textarea[900];
   Char_t          secother_blind_textarea[2275];
   Char_t          secsyst_crosscheck[10];
   Char_t          secunf_technique_dagostini[10];
   Char_t          secmva_software_textarea[359];
   Char_t          secac_references_text[141];
   Char_t          intervals_approach_textarea[872];
   Char_t          secunf_validation_bottomlinetest_textarea[223];
   Char_t          secmva_inputchecks_oned[5];
   Char_t          secunf_publiclyavailableunfolding_unfoldedandcovariancematrix[4];
   Char_t          intervals_software_theta[6];
   Char_t          secfeedback_changes_textarea[714];
   Char_t          secfitting_pulls[19];
   Char_t          secdisc_ts_textarea[362];
   Char_t          secfitting_teststat_binnedl[8];
   Char_t          secother_faq[4];
   Char_t          secpdf_pdfuncs_howest[11];
   Char_t          intervals_software_roostats[9];
   Char_t          secdisc_lee[12];
   Char_t          secmva_bkgmix[13];
   Char_t          secfitting_teststat_textarea[570];
   Char_t          secmva_nullpdf_textarea[273];
   Char_t          secpdf_pdfuncs_howest_textarea[720];
   Char_t          intervals_software_lands[6];
   Char_t          secother_cmscomb_textarea[530];
   Char_t          intervals_useasyformulae_asycheckwithtoys[4];
   Char_t          secmva_type_textarea[780];
   Char_t          intervals_sidednessdecision_textarea[452];
   Char_t          intervals_software_other[6];
   Char_t          secfitting_shapechoice_textarea[1038];
   Char_t          secgi_faqaware[4];
   Char_t          secmva_type_nn[3];
   Char_t          intervals_approach_modfreq[8];
   Char_t          secunf_validation_textarea[953];
   Char_t          secmva_software_tmva[5];
   Char_t          secunf_technique[10];
   Char_t          secdisc_lee_textarea[939];
   Char_t          secfitting_gof_p_dontknow[9];
   Char_t          secfitting_functionalform_templates[10];
   Char_t          secfitting_modelchoice_textarea[708];
   Char_t          intervals_sidednessdecision[12];
   Char_t          secunf_validation_bottomlinetest[4];
   Char_t          secmva_inputchecks_twod[5];
   Char_t          secfitting_bkgshapesyst[13];
   Char_t          secmva_outputuse_cut[4];
   Char_t          __save[5];
   Char_t          secac_cadi_text[51];
   Char_t          secunf_using[10];
   Char_t          intervals_approach_unified[8];
   Char_t          intervals_approach_bayesianref[2];
   Char_t          secunf_validation_validationotherchecks_textarea[632];
   Char_t          secunf_reeadrecomm[4];
   Char_t          secfitting_teststat_other[6];
   Char_t          secunf_publiclyavailableunfolding_responsematrixcoloured[4];
   Char_t          intervals_prioranalysis[12];
   Char_t          secother_combination[12];
   Char_t          secunf_technique_binbybin[9];
   Char_t          secfitting_whichfits_textarea[1427];
   Char_t          secgi_openmeetings[4];
   Char_t          secfitting_gof_p_nnto99p9[9];
   Char_t          secmva_type_fisher[7];
   Char_t          secunf_publiclyavailableunfolding_textarea[287];
   Char_t          secfitting_gof_p_gt99p9[7];
   Char_t          secfitting_cov[12];
   Char_t          secmva_robustness[9];
   Char_t          secmva_bkgmix_textarea[763];
   Char_t          secunf_technique_textarea[1065];
   Char_t          secsyst_tmorphing_textarea[632];
   Char_t          intervals_approach_other[6];
   Char_t          secac_wg_text[69];
   Char_t          secfitting_modelchoice_mctemplates[12];
   Char_t          secunf_technique_other[6];
   Char_t          secpdf_compinter_choicepdf[9];
   Char_t          secfeedback_changes[11];
   Char_t          secfitting_teststat_nounbinlik_textarea[941];
   Char_t          secfitting_boundary[12];
   Char_t          secfitting_teststat_chi2[5];
   Char_t          secfitting_gof_p_ltp1[5];
   Char_t          secunf_software_other[6];
   Char_t          secfitting_using[10];
   Char_t          secmva_variableselection[6];
   Char_t          secfitting_boundary_textarea[746];
   Char_t          intervals_software_combine[8];
   Char_t          secmva_type_bdt[4];
   Char_t          secunf_technique_matrixinv[10];
   Char_t          secsyst_crosscheck_syst[10];
   Char_t          secac_related_textarea[1530];
   Char_t          secac_analysiscontext_textarea[1077];
   Char_t          secac_preappdate[15];
   Char_t          secunf_publiclyavailableunfolding_other[6];
   Char_t          secac_name_text[79];
   Char_t          secfitting_functionalform_parametric[11];
   Char_t          secmva_inputchecks_other[6];
   Char_t          secmva_nullpdf[13];
   Char_t          secac_wg[12];
   Char_t          secmva_using[4];
   Char_t          secfitting_gof_p_p1to1[6];
   Char_t          secpdf_faq_planhepdata[4];
   Char_t          secmva_inputcorrelations_other[6];
   Char_t          intervals_approach_freqintervals[14];
   Char_t          secpdf_compinter_pdforder_textarea[412];
   Char_t          intervals_theoryerror[12];
   Char_t          secother_cmscomb_yes[4];
   Char_t          secgi_listaware[4];
   Char_t          secunf_validation_validationcoverage[4];
   Char_t          secfitting_gof[10];
   Char_t          secdisc_ts[6];
   Char_t          __updates[33];
   Char_t          secfitting_modelchoice_other[6];
   Char_t          secunf_software_textarea[584];
   Char_t          secfeedback_feedback_textarea[645];
   Char_t          secsyst_crosscheck_textarea[957];
   Char_t          secother_blind[12];
   Char_t          secmva_outputuse_textarea[577];
   Char_t          secfitting_cov_textarea[655];
   Char_t          secfitting_shapechoice[12];
   Char_t          secgi_listsubscribed[4];
   Char_t          secfitting_functionalform_textarea[995];
   Char_t          secmva_overtraining_textarea[481];
   Char_t          secfitting_gof_p_fiveto99[9];
   Char_t          secother_cmscomb_doesntapply[12];
   Char_t          secac_preappdate_text[197];
   Char_t          secfitting_pruning[13];
   Char_t          secfitting_pulls_textarea[1259];
   Char_t          secmva_inputchecks_textarea[499];
   Char_t          secfitting_gof_p_oneto5[7];
   Char_t          secfitting_pruning_textarea[745];
   Char_t          secunf_software[10];
   Char_t          secdisc_using[10];
   Char_t          secmva_software_other[6];
   Char_t          intervals_using[10];
   Char_t          secfitting_gof_textarea[762];
   Char_t          secfeedback_comment_textarea[728];
   Char_t          secmva_outputuse_other[6];
   Char_t          secunf_checknoregularization_textarea[226];
   Char_t          secmva_overtraining[13];
   Char_t          secunf_technique_regmatrixinv[13];
   Char_t          intervals_ts_textarea[452];
   Char_t          secgi_pastinteraction[4];
   Char_t          secmva_type_other[6];
   Char_t          secunf_checkregularizationstrength_textarea[254];
   Char_t          secmva_inputcorrelations_linear[7];
   Char_t          secfitting_modelchoice_adhoc[6];
   Char_t          secmva_readtwiki[4];
   Char_t          secunf_technique_techniquegeneralized[14];
   Char_t          secsyst_priorform[4];
   Char_t          secpdf_faq_planhepdata_textarea[207];
   Char_t          secunf_eventweights_textarea[665];
   Char_t          secpdf_compinter_choicepdf_textarea[553];
   Char_t          secfitting_functionalform_other[6];
   Char_t          secsyst_tmorphing[4];
   Char_t          secdisc_twiki[4];
   Char_t          secunf_checknoregularization[4];
   Char_t          intervals_cls[12];
   Char_t          intervals_approach_freqlimits[11];
   Char_t          secfitting_modelchoice_theorycurve[12];
   Char_t          intervals_software_textarea[398];
   Char_t          secunf_software_roounfold[10];
   Char_t          secother_cmscomb[12];
   Char_t          secmva_inputcorrelations_nonlinear[10];
   Char_t          secpdf_compinter_pdforder[9];
   Char_t          date[11];
   Int_t           year;
   Int_t           month;
   Int_t           day;
   Int_t           secac_cadi_yy;
   Int_t           secac_cadi_nnn;

   // List of branches
   TBranch        *b_secfitting_bkgshapesyst_textarea;   //!
   TBranch        *b_secpdf_faq_obssens;   //!
   TBranch        *b_secmva_robustness_textarea;   //!
   TBranch        *b_secunf_eventweights;   //!
   TBranch        *b_secmva_variableselection_textarea;   //!
   TBranch        *b_secsyst_syststat;   //!
   TBranch        *b_secsyst_twiki;   //!
   TBranch        *b_intervals_toygen_textarea;   //!
   TBranch        *b_secac_email_text;   //!
   TBranch        *b_intervals_approach_pllimits;   //!
   TBranch        *b_secfitting_teststat_unbinnedl;   //!
   TBranch        *b_secpdf_compinter_propercit;   //!
   TBranch        *b_secunf_binbybin;   //!
   TBranch        *b_secunf_conditionnumber_textarea;   //!
   TBranch        *b_secpdf_faq;   //!
   TBranch        *b_secfitting_modelchoice_sbtemplates;   //!
   TBranch        *b_intervals_ts;   //!
   TBranch        *b_secunf_software_tunfold;   //!
   TBranch        *b_intervals_roostatsclsfc;   //!
   TBranch        *b___submit;   //!
   TBranch        *b_intervals_approach_bayesianflat;   //!
   TBranch        *b_secmva_inputcorrelations_textarea;   //!
   TBranch        *b_intervals_useasyformulae;   //!
   TBranch        *b_secfitting_modelchoice_theoryinspired;   //!
   TBranch        *b_secsyst_crosscheck_whattodo_textarea;   //!
   TBranch        *b_secmva_outputuse_fit;   //!
   TBranch        *b_secpdf_compinter_description;   //!
   TBranch        *b_intervals_toygen;   //!
   TBranch        *b_intervals_approach_plintervals;   //!
   TBranch        *b_secmva_type_plikelihood;   //!
   TBranch        *b_intervals_theoryerror_textarea;   //!
   TBranch        *b_intervals_ts_tsdetail_textarea;   //!
   TBranch        *b_secother_combination_textarea;   //!
   TBranch        *b_secother_blind_textarea;   //!
   TBranch        *b_secsyst_crosscheck;   //!
   TBranch        *b_secunf_technique_dagostini;   //!
   TBranch        *b_secmva_software_textarea;   //!
   TBranch        *b_secac_references_text;   //!
   TBranch        *b_intervals_approach_textarea;   //!
   TBranch        *b_secunf_validation_bottomlinetest_textarea;   //!
   TBranch        *b_secmva_inputchecks_oned;   //!
   TBranch        *b_secunf_publiclyavailableunfolding_unfoldedandcovariancematrix;   //!
   TBranch        *b_intervals_software_theta;   //!
   TBranch        *b_secfeedback_changes_textarea;   //!
   TBranch        *b_secfitting_pulls;   //!
   TBranch        *b_secdisc_ts_textarea;   //!
   TBranch        *b_secfitting_teststat_binnedl;   //!
   TBranch        *b_secother_faq;   //!
   TBranch        *b_secpdf_pdfuncs_howest;   //!
   TBranch        *b_intervals_software_roostats;   //!
   TBranch        *b_secdisc_lee;   //!
   TBranch        *b_secmva_bkgmix;   //!
   TBranch        *b_secfitting_teststat_textarea;   //!
   TBranch        *b_secmva_nullpdf_textarea;   //!
   TBranch        *b_secpdf_pdfuncs_howest_textarea;   //!
   TBranch        *b_intervals_software_lands;   //!
   TBranch        *b_secother_cmscomb_textarea;   //!
   TBranch        *b_intervals_useasyformulae_asycheckwithtoys;   //!
   TBranch        *b_secmva_type_textarea;   //!
   TBranch        *b_intervals_sidednessdecision_textarea;   //!
   TBranch        *b_intervals_software_other;   //!
   TBranch        *b_secfitting_shapechoice_textarea;   //!
   TBranch        *b_secgi_faqaware;   //!
   TBranch        *b_secmva_type_nn;   //!
   TBranch        *b_intervals_approach_modfreq;   //!
   TBranch        *b_secunf_validation_textarea;   //!
   TBranch        *b_secmva_software_tmva;   //!
   TBranch        *b_secunf_technique;   //!
   TBranch        *b_secdisc_lee_textarea;   //!
   TBranch        *b_secfitting_gof_p_dontknow;   //!
   TBranch        *b_secfitting_functionalform_templates;   //!
   TBranch        *b_secfitting_modelchoice_textarea;   //!
   TBranch        *b_intervals_sidednessdecision;   //!
   TBranch        *b_secunf_validation_bottomlinetest;   //!
   TBranch        *b_secmva_inputchecks_twod;   //!
   TBranch        *b_secfitting_bkgshapesyst;   //!
   TBranch        *b_secmva_outputuse_cut;   //!
   TBranch        *b___save;   //!
   TBranch        *b_secac_cadi_text;   //!
   TBranch        *b_secunf_using;   //!
   TBranch        *b_intervals_approach_unified;   //!
   TBranch        *b_intervals_approach_bayesianref;   //!
   TBranch        *b_secunf_validation_validationotherchecks_textarea;   //!
   TBranch        *b_secunf_reeadrecomm;   //!
   TBranch        *b_secfitting_teststat_other;   //!
   TBranch        *b_secunf_publiclyavailableunfolding_responsematrixcoloured;   //!
   TBranch        *b_intervals_prioranalysis;   //!
   TBranch        *b_secother_combination;   //!
   TBranch        *b_secunf_technique_binbybin;   //!
   TBranch        *b_secfitting_whichfits_textarea;   //!
   TBranch        *b_secgi_openmeetings;   //!
   TBranch        *b_secfitting_gof_p_nnto99p9;   //!
   TBranch        *b_secmva_type_fisher;   //!
   TBranch        *b_secunf_publiclyavailableunfolding_textarea;   //!
   TBranch        *b_secfitting_gof_p_gt99p9;   //!
   TBranch        *b_secfitting_cov;   //!
   TBranch        *b_secmva_robustness;   //!
   TBranch        *b_secmva_bkgmix_textarea;   //!
   TBranch        *b_secunf_technique_textarea;   //!
   TBranch        *b_secsyst_tmorphing_textarea;   //!
   TBranch        *b_intervals_approach_other;   //!
   TBranch        *b_secac_wg_text;   //!
   TBranch        *b_secfitting_modelchoice_mctemplates;   //!
   TBranch        *b_secunf_technique_other;   //!
   TBranch        *b_secpdf_compinter_choicepdf;   //!
   TBranch        *b_secfeedback_changes;   //!
   TBranch        *b_secfitting_teststat_nounbinlik_textarea;   //!
   TBranch        *b_secfitting_boundary;   //!
   TBranch        *b_secfitting_teststat_chi2;   //!
   TBranch        *b_secfitting_gof_p_ltp1;   //!
   TBranch        *b_secunf_software_other;   //!
   TBranch        *b_secfitting_using;   //!
   TBranch        *b_secmva_variableselection;   //!
   TBranch        *b_secfitting_boundary_textarea;   //!
   TBranch        *b_intervals_software_combine;   //!
   TBranch        *b_secmva_type_bdt;   //!
   TBranch        *b_secunf_technique_matrixinv;   //!
   TBranch        *b_secsyst_crosscheck_syst;   //!
   TBranch        *b_secac_related_textarea;   //!
   TBranch        *b_secac_analysiscontext_textarea;   //!
   TBranch        *b_secac_preappdate;   //!
   TBranch        *b_secunf_publiclyavailableunfolding_other;   //!
   TBranch        *b_secac_name_text;   //!
   TBranch        *b_secfitting_functionalform_parametric;   //!
   TBranch        *b_secmva_inputchecks_other;   //!
   TBranch        *b_secmva_nullpdf;   //!
   TBranch        *b_secac_wg;   //!
   TBranch        *b_secmva_using;   //!
   TBranch        *b_secfitting_gof_p_p1to1;   //!
   TBranch        *b_secpdf_faq_planhepdata;   //!
   TBranch        *b_secmva_inputcorrelations_other;   //!
   TBranch        *b_intervals_approach_freqintervals;   //!
   TBranch        *b_secpdf_compinter_pdforder_textarea;   //!
   TBranch        *b_intervals_theoryerror;   //!
   TBranch        *b_secother_cmscomb_yes;   //!
   TBranch        *b_secgi_listaware;   //!
   TBranch        *b_secunf_validation_validationcoverage;   //!
   TBranch        *b_secfitting_gof;   //!
   TBranch        *b_secdisc_ts;   //!
   TBranch        *b___updates;   //!
   TBranch        *b_secfitting_modelchoice_other;   //!
   TBranch        *b_secunf_software_textarea;   //!
   TBranch        *b_secfeedback_feedback_textarea;   //!
   TBranch        *b_secsyst_crosscheck_textarea;   //!
   TBranch        *b_secother_blind;   //!
   TBranch        *b_secmva_outputuse_textarea;   //!
   TBranch        *b_secfitting_cov_textarea;   //!
   TBranch        *b_secfitting_shapechoice;   //!
   TBranch        *b_secgi_listsubscribed;   //!
   TBranch        *b_secfitting_functionalform_textarea;   //!
   TBranch        *b_secmva_overtraining_textarea;   //!
   TBranch        *b_secfitting_gof_p_fiveto99;   //!
   TBranch        *b_secother_cmscomb_doesntapply;   //!
   TBranch        *b_secac_preappdate_text;   //!
   TBranch        *b_secfitting_pruning;   //!
   TBranch        *b_secfitting_pulls_textarea;   //!
   TBranch        *b_secmva_inputchecks_textarea;   //!
   TBranch        *b_secfitting_gof_p_oneto5;   //!
   TBranch        *b_secfitting_pruning_textarea;   //!
   TBranch        *b_secunf_software;   //!
   TBranch        *b_secdisc_using;   //!
   TBranch        *b_secmva_software_other;   //!
   TBranch        *b_intervals_using;   //!
   TBranch        *b_secfitting_gof_textarea;   //!
   TBranch        *b_secfeedback_comment_textarea;   //!
   TBranch        *b_secmva_outputuse_other;   //!
   TBranch        *b_secunf_checknoregularization_textarea;   //!
   TBranch        *b_secmva_overtraining;   //!
   TBranch        *b_secunf_technique_regmatrixinv;   //!
   TBranch        *b_intervals_ts_textarea;   //!
   TBranch        *b_secgi_pastinteraction;   //!
   TBranch        *b_secmva_type_other;   //!
   TBranch        *b_secunf_checkregularizationstrength_textarea;   //!
   TBranch        *b_secmva_inputcorrelations_linear;   //!
   TBranch        *b_secfitting_modelchoice_adhoc;   //!
   TBranch        *b_secmva_readtwiki;   //!
   TBranch        *b_secunf_technique_techniquegeneralized;   //!
   TBranch        *b_secsyst_priorform;   //!
   TBranch        *b_secpdf_faq_planhepdata_textarea;   //!
   TBranch        *b_secunf_eventweights_textarea;   //!
   TBranch        *b_secpdf_compinter_choicepdf_textarea;   //!
   TBranch        *b_secfitting_functionalform_other;   //!
   TBranch        *b_secsyst_tmorphing;   //!
   TBranch        *b_secdisc_twiki;   //!
   TBranch        *b_secunf_checknoregularization;   //!
   TBranch        *b_intervals_cls;   //!
   TBranch        *b_intervals_approach_freqlimits;   //!
   TBranch        *b_secfitting_modelchoice_theorycurve;   //!
   TBranch        *b_intervals_software_textarea;   //!
   TBranch        *b_secunf_software_roounfold;   //!
   TBranch        *b_secother_cmscomb;   //!
   TBranch        *b_secmva_inputcorrelations_nonlinear;   //!
   TBranch        *b_secpdf_compinter_pdforder;   //!
   TBranch        *b_date;   //!
   TBranch        *b_year;   //!
   TBranch        *b_month;   //!
   TBranch        *b_day;   //!
   TBranch        *b_secac_cadi_yy;   //!
   TBranch        *b_secac_cadi_nnn;   //!

   SCQuestDataReader(TTree *tree=0);
   virtual ~SCQuestDataReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Bool_t   Notify();
   virtual void     Show(TString cadline="PAG-XX-YYY");
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef SCQuestDataReader_cxx
SCQuestDataReader::SCQuestDataReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/afs/cern.ch/user/e/echapon/workspace/public/StatisticsCommittee/Questionnaire/quest_data.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/afs/cern.ch/user/e/echapon/workspace/public/StatisticsCommittee/Questionnaire/quest_data.root");
      }
      f->GetObject("questdata",tree);

   }
   Init(tree);
}

SCQuestDataReader::~SCQuestDataReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t SCQuestDataReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t SCQuestDataReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void SCQuestDataReader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("secfitting_bkgshapesyst_textarea", secfitting_bkgshapesyst_textarea, &b_secfitting_bkgshapesyst_textarea);
   fChain->SetBranchAddress("secpdf_faq_obssens", secpdf_faq_obssens, &b_secpdf_faq_obssens);
   fChain->SetBranchAddress("secmva_robustness_textarea", secmva_robustness_textarea, &b_secmva_robustness_textarea);
   fChain->SetBranchAddress("secunf_eventweights", secunf_eventweights, &b_secunf_eventweights);
   fChain->SetBranchAddress("secmva_variableselection_textarea", secmva_variableselection_textarea, &b_secmva_variableselection_textarea);
   fChain->SetBranchAddress("secsyst_syststat", secsyst_syststat, &b_secsyst_syststat);
   fChain->SetBranchAddress("secsyst_twiki", secsyst_twiki, &b_secsyst_twiki);
   fChain->SetBranchAddress("intervals_toygen_textarea", intervals_toygen_textarea, &b_intervals_toygen_textarea);
   fChain->SetBranchAddress("secac_email_text", secac_email_text, &b_secac_email_text);
   fChain->SetBranchAddress("intervals_approach_pllimits", intervals_approach_pllimits, &b_intervals_approach_pllimits);
   fChain->SetBranchAddress("secfitting_teststat_unbinnedl", secfitting_teststat_unbinnedl, &b_secfitting_teststat_unbinnedl);
   fChain->SetBranchAddress("secpdf_compinter_propercit", secpdf_compinter_propercit, &b_secpdf_compinter_propercit);
   fChain->SetBranchAddress("secunf_binbybin", secunf_binbybin, &b_secunf_binbybin);
   fChain->SetBranchAddress("secunf_conditionnumber_textarea", secunf_conditionnumber_textarea, &b_secunf_conditionnumber_textarea);
   fChain->SetBranchAddress("secpdf_faq", secpdf_faq, &b_secpdf_faq);
   fChain->SetBranchAddress("secfitting_modelchoice_sbtemplates", secfitting_modelchoice_sbtemplates, &b_secfitting_modelchoice_sbtemplates);
   fChain->SetBranchAddress("intervals_ts", intervals_ts, &b_intervals_ts);
   fChain->SetBranchAddress("secunf_software_tunfold", secunf_software_tunfold, &b_secunf_software_tunfold);
   fChain->SetBranchAddress("intervals_roostatsclsfc", intervals_roostatsclsfc, &b_intervals_roostatsclsfc);
   fChain->SetBranchAddress("__submit", __submit, &b___submit);
   fChain->SetBranchAddress("intervals_approach_bayesianflat", intervals_approach_bayesianflat, &b_intervals_approach_bayesianflat);
   fChain->SetBranchAddress("secmva_inputcorrelations_textarea", secmva_inputcorrelations_textarea, &b_secmva_inputcorrelations_textarea);
   fChain->SetBranchAddress("intervals_useasyformulae", intervals_useasyformulae, &b_intervals_useasyformulae);
   fChain->SetBranchAddress("secfitting_modelchoice_theoryinspired", secfitting_modelchoice_theoryinspired, &b_secfitting_modelchoice_theoryinspired);
   fChain->SetBranchAddress("secsyst_crosscheck_whattodo_textarea", secsyst_crosscheck_whattodo_textarea, &b_secsyst_crosscheck_whattodo_textarea);
   fChain->SetBranchAddress("secmva_outputuse_fit", secmva_outputuse_fit, &b_secmva_outputuse_fit);
   fChain->SetBranchAddress("secpdf_compinter_description", secpdf_compinter_description, &b_secpdf_compinter_description);
   fChain->SetBranchAddress("intervals_toygen", intervals_toygen, &b_intervals_toygen);
   fChain->SetBranchAddress("intervals_approach_plintervals", intervals_approach_plintervals, &b_intervals_approach_plintervals);
   fChain->SetBranchAddress("secmva_type_plikelihood", secmva_type_plikelihood, &b_secmva_type_plikelihood);
   fChain->SetBranchAddress("intervals_theoryerror_textarea", intervals_theoryerror_textarea, &b_intervals_theoryerror_textarea);
   fChain->SetBranchAddress("intervals_ts_tsdetail_textarea", intervals_ts_tsdetail_textarea, &b_intervals_ts_tsdetail_textarea);
   fChain->SetBranchAddress("secother_combination_textarea", secother_combination_textarea, &b_secother_combination_textarea);
   fChain->SetBranchAddress("secother_blind_textarea", secother_blind_textarea, &b_secother_blind_textarea);
   fChain->SetBranchAddress("secsyst_crosscheck", secsyst_crosscheck, &b_secsyst_crosscheck);
   fChain->SetBranchAddress("secunf_technique_dagostini", secunf_technique_dagostini, &b_secunf_technique_dagostini);
   fChain->SetBranchAddress("secmva_software_textarea", secmva_software_textarea, &b_secmva_software_textarea);
   fChain->SetBranchAddress("secac_references_text", secac_references_text, &b_secac_references_text);
   fChain->SetBranchAddress("intervals_approach_textarea", intervals_approach_textarea, &b_intervals_approach_textarea);
   fChain->SetBranchAddress("secunf_validation_bottomlinetest_textarea", secunf_validation_bottomlinetest_textarea, &b_secunf_validation_bottomlinetest_textarea);
   fChain->SetBranchAddress("secmva_inputchecks_oned", secmva_inputchecks_oned, &b_secmva_inputchecks_oned);
   fChain->SetBranchAddress("secunf_publiclyavailableunfolding_unfoldedandcovariancematrix", secunf_publiclyavailableunfolding_unfoldedandcovariancematrix, &b_secunf_publiclyavailableunfolding_unfoldedandcovariancematrix);
   fChain->SetBranchAddress("intervals_software_theta", intervals_software_theta, &b_intervals_software_theta);
   fChain->SetBranchAddress("secfeedback_changes_textarea", secfeedback_changes_textarea, &b_secfeedback_changes_textarea);
   fChain->SetBranchAddress("secfitting_pulls", secfitting_pulls, &b_secfitting_pulls);
   fChain->SetBranchAddress("secdisc_ts_textarea", secdisc_ts_textarea, &b_secdisc_ts_textarea);
   fChain->SetBranchAddress("secfitting_teststat_binnedl", secfitting_teststat_binnedl, &b_secfitting_teststat_binnedl);
   fChain->SetBranchAddress("secother_faq", secother_faq, &b_secother_faq);
   fChain->SetBranchAddress("secpdf_pdfuncs_howest", secpdf_pdfuncs_howest, &b_secpdf_pdfuncs_howest);
   fChain->SetBranchAddress("intervals_software_roostats", intervals_software_roostats, &b_intervals_software_roostats);
   fChain->SetBranchAddress("secdisc_lee", secdisc_lee, &b_secdisc_lee);
   fChain->SetBranchAddress("secmva_bkgmix", secmva_bkgmix, &b_secmva_bkgmix);
   fChain->SetBranchAddress("secfitting_teststat_textarea", secfitting_teststat_textarea, &b_secfitting_teststat_textarea);
   fChain->SetBranchAddress("secmva_nullpdf_textarea", secmva_nullpdf_textarea, &b_secmva_nullpdf_textarea);
   fChain->SetBranchAddress("secpdf_pdfuncs_howest_textarea", secpdf_pdfuncs_howest_textarea, &b_secpdf_pdfuncs_howest_textarea);
   fChain->SetBranchAddress("intervals_software_lands", intervals_software_lands, &b_intervals_software_lands);
   fChain->SetBranchAddress("secother_cmscomb_textarea", secother_cmscomb_textarea, &b_secother_cmscomb_textarea);
   fChain->SetBranchAddress("intervals_useasyformulae_asycheckwithtoys", intervals_useasyformulae_asycheckwithtoys, &b_intervals_useasyformulae_asycheckwithtoys);
   fChain->SetBranchAddress("secmva_type_textarea", secmva_type_textarea, &b_secmva_type_textarea);
   fChain->SetBranchAddress("intervals_sidednessdecision_textarea", intervals_sidednessdecision_textarea, &b_intervals_sidednessdecision_textarea);
   fChain->SetBranchAddress("intervals_software_other", intervals_software_other, &b_intervals_software_other);
   fChain->SetBranchAddress("secfitting_shapechoice_textarea", secfitting_shapechoice_textarea, &b_secfitting_shapechoice_textarea);
   fChain->SetBranchAddress("secgi_faqaware", secgi_faqaware, &b_secgi_faqaware);
   fChain->SetBranchAddress("secmva_type_nn", secmva_type_nn, &b_secmva_type_nn);
   fChain->SetBranchAddress("intervals_approach_modfreq", intervals_approach_modfreq, &b_intervals_approach_modfreq);
   fChain->SetBranchAddress("secunf_validation_textarea", secunf_validation_textarea, &b_secunf_validation_textarea);
   fChain->SetBranchAddress("secmva_software_tmva", secmva_software_tmva, &b_secmva_software_tmva);
   fChain->SetBranchAddress("secunf_technique", secunf_technique, &b_secunf_technique);
   fChain->SetBranchAddress("secdisc_lee_textarea", secdisc_lee_textarea, &b_secdisc_lee_textarea);
   fChain->SetBranchAddress("secfitting_gof_p_dontknow", secfitting_gof_p_dontknow, &b_secfitting_gof_p_dontknow);
   fChain->SetBranchAddress("secfitting_functionalform_templates", secfitting_functionalform_templates, &b_secfitting_functionalform_templates);
   fChain->SetBranchAddress("secfitting_modelchoice_textarea", secfitting_modelchoice_textarea, &b_secfitting_modelchoice_textarea);
   fChain->SetBranchAddress("intervals_sidednessdecision", intervals_sidednessdecision, &b_intervals_sidednessdecision);
   fChain->SetBranchAddress("secunf_validation_bottomlinetest", secunf_validation_bottomlinetest, &b_secunf_validation_bottomlinetest);
   fChain->SetBranchAddress("secmva_inputchecks_twod", secmva_inputchecks_twod, &b_secmva_inputchecks_twod);
   fChain->SetBranchAddress("secfitting_bkgshapesyst", secfitting_bkgshapesyst, &b_secfitting_bkgshapesyst);
   fChain->SetBranchAddress("secmva_outputuse_cut", secmva_outputuse_cut, &b_secmva_outputuse_cut);
   fChain->SetBranchAddress("__save", __save, &b___save);
   fChain->SetBranchAddress("secac_cadi_text", secac_cadi_text, &b_secac_cadi_text);
   fChain->SetBranchAddress("secunf_using", secunf_using, &b_secunf_using);
   fChain->SetBranchAddress("intervals_approach_unified", intervals_approach_unified, &b_intervals_approach_unified);
   fChain->SetBranchAddress("intervals_approach_bayesianref", intervals_approach_bayesianref, &b_intervals_approach_bayesianref);
   fChain->SetBranchAddress("secunf_validation_validationotherchecks_textarea", secunf_validation_validationotherchecks_textarea, &b_secunf_validation_validationotherchecks_textarea);
   fChain->SetBranchAddress("secunf_reeadrecomm", secunf_reeadrecomm, &b_secunf_reeadrecomm);
   fChain->SetBranchAddress("secfitting_teststat_other", secfitting_teststat_other, &b_secfitting_teststat_other);
   fChain->SetBranchAddress("secunf_publiclyavailableunfolding_responsematrixcoloured", secunf_publiclyavailableunfolding_responsematrixcoloured, &b_secunf_publiclyavailableunfolding_responsematrixcoloured);
   fChain->SetBranchAddress("intervals_prioranalysis", intervals_prioranalysis, &b_intervals_prioranalysis);
   fChain->SetBranchAddress("secother_combination", secother_combination, &b_secother_combination);
   fChain->SetBranchAddress("secunf_technique_binbybin", secunf_technique_binbybin, &b_secunf_technique_binbybin);
   fChain->SetBranchAddress("secfitting_whichfits_textarea", secfitting_whichfits_textarea, &b_secfitting_whichfits_textarea);
   fChain->SetBranchAddress("secgi_openmeetings", secgi_openmeetings, &b_secgi_openmeetings);
   fChain->SetBranchAddress("secfitting_gof_p_nnto99p9", secfitting_gof_p_nnto99p9, &b_secfitting_gof_p_nnto99p9);
   fChain->SetBranchAddress("secmva_type_fisher", secmva_type_fisher, &b_secmva_type_fisher);
   fChain->SetBranchAddress("secunf_publiclyavailableunfolding_textarea", secunf_publiclyavailableunfolding_textarea, &b_secunf_publiclyavailableunfolding_textarea);
   fChain->SetBranchAddress("secfitting_gof_p_gt99p9", secfitting_gof_p_gt99p9, &b_secfitting_gof_p_gt99p9);
   fChain->SetBranchAddress("secfitting_cov", secfitting_cov, &b_secfitting_cov);
   fChain->SetBranchAddress("secmva_robustness", secmva_robustness, &b_secmva_robustness);
   fChain->SetBranchAddress("secmva_bkgmix_textarea", secmva_bkgmix_textarea, &b_secmva_bkgmix_textarea);
   fChain->SetBranchAddress("secunf_technique_textarea", secunf_technique_textarea, &b_secunf_technique_textarea);
   fChain->SetBranchAddress("secsyst_tmorphing_textarea", secsyst_tmorphing_textarea, &b_secsyst_tmorphing_textarea);
   fChain->SetBranchAddress("intervals_approach_other", intervals_approach_other, &b_intervals_approach_other);
   fChain->SetBranchAddress("secac_wg_text", secac_wg_text, &b_secac_wg_text);
   fChain->SetBranchAddress("secfitting_modelchoice_mctemplates", secfitting_modelchoice_mctemplates, &b_secfitting_modelchoice_mctemplates);
   fChain->SetBranchAddress("secunf_technique_other", secunf_technique_other, &b_secunf_technique_other);
   fChain->SetBranchAddress("secpdf_compinter_choicepdf", secpdf_compinter_choicepdf, &b_secpdf_compinter_choicepdf);
   fChain->SetBranchAddress("secfeedback_changes", secfeedback_changes, &b_secfeedback_changes);
   fChain->SetBranchAddress("secfitting_teststat_nounbinlik_textarea", secfitting_teststat_nounbinlik_textarea, &b_secfitting_teststat_nounbinlik_textarea);
   fChain->SetBranchAddress("secfitting_boundary", secfitting_boundary, &b_secfitting_boundary);
   fChain->SetBranchAddress("secfitting_teststat_chi2", secfitting_teststat_chi2, &b_secfitting_teststat_chi2);
   fChain->SetBranchAddress("secfitting_gof_p_ltp1", secfitting_gof_p_ltp1, &b_secfitting_gof_p_ltp1);
   fChain->SetBranchAddress("secunf_software_other", secunf_software_other, &b_secunf_software_other);
   fChain->SetBranchAddress("secfitting_using", secfitting_using, &b_secfitting_using);
   fChain->SetBranchAddress("secmva_variableselection", secmva_variableselection, &b_secmva_variableselection);
   fChain->SetBranchAddress("secfitting_boundary_textarea", secfitting_boundary_textarea, &b_secfitting_boundary_textarea);
   fChain->SetBranchAddress("intervals_software_combine", intervals_software_combine, &b_intervals_software_combine);
   fChain->SetBranchAddress("secmva_type_bdt", secmva_type_bdt, &b_secmva_type_bdt);
   fChain->SetBranchAddress("secunf_technique_matrixinv", secunf_technique_matrixinv, &b_secunf_technique_matrixinv);
   fChain->SetBranchAddress("secsyst_crosscheck_syst", secsyst_crosscheck_syst, &b_secsyst_crosscheck_syst);
   fChain->SetBranchAddress("secac_related_textarea", secac_related_textarea, &b_secac_related_textarea);
   fChain->SetBranchAddress("secac_analysiscontext_textarea", secac_analysiscontext_textarea, &b_secac_analysiscontext_textarea);
   fChain->SetBranchAddress("secac_preappdate", secac_preappdate, &b_secac_preappdate);
   fChain->SetBranchAddress("secunf_publiclyavailableunfolding_other", secunf_publiclyavailableunfolding_other, &b_secunf_publiclyavailableunfolding_other);
   fChain->SetBranchAddress("secac_name_text", secac_name_text, &b_secac_name_text);
   fChain->SetBranchAddress("secfitting_functionalform_parametric", secfitting_functionalform_parametric, &b_secfitting_functionalform_parametric);
   fChain->SetBranchAddress("secmva_inputchecks_other", secmva_inputchecks_other, &b_secmva_inputchecks_other);
   fChain->SetBranchAddress("secmva_nullpdf", secmva_nullpdf, &b_secmva_nullpdf);
   fChain->SetBranchAddress("secac_wg", secac_wg, &b_secac_wg);
   fChain->SetBranchAddress("secmva_using", secmva_using, &b_secmva_using);
   fChain->SetBranchAddress("secfitting_gof_p_p1to1", secfitting_gof_p_p1to1, &b_secfitting_gof_p_p1to1);
   fChain->SetBranchAddress("secpdf_faq_planhepdata", secpdf_faq_planhepdata, &b_secpdf_faq_planhepdata);
   fChain->SetBranchAddress("secmva_inputcorrelations_other", secmva_inputcorrelations_other, &b_secmva_inputcorrelations_other);
   fChain->SetBranchAddress("intervals_approach_freqintervals", intervals_approach_freqintervals, &b_intervals_approach_freqintervals);
   fChain->SetBranchAddress("secpdf_compinter_pdforder_textarea", secpdf_compinter_pdforder_textarea, &b_secpdf_compinter_pdforder_textarea);
   fChain->SetBranchAddress("intervals_theoryerror", intervals_theoryerror, &b_intervals_theoryerror);
   fChain->SetBranchAddress("secother_cmscomb_yes", secother_cmscomb_yes, &b_secother_cmscomb_yes);
   fChain->SetBranchAddress("secgi_listaware", secgi_listaware, &b_secgi_listaware);
   fChain->SetBranchAddress("secunf_validation_validationcoverage", secunf_validation_validationcoverage, &b_secunf_validation_validationcoverage);
   fChain->SetBranchAddress("secfitting_gof", secfitting_gof, &b_secfitting_gof);
   fChain->SetBranchAddress("secdisc_ts", secdisc_ts, &b_secdisc_ts);
   fChain->SetBranchAddress("__updates", __updates, &b___updates);
   fChain->SetBranchAddress("secfitting_modelchoice_other", secfitting_modelchoice_other, &b_secfitting_modelchoice_other);
   fChain->SetBranchAddress("secunf_software_textarea", secunf_software_textarea, &b_secunf_software_textarea);
   fChain->SetBranchAddress("secfeedback_feedback_textarea", secfeedback_feedback_textarea, &b_secfeedback_feedback_textarea);
   fChain->SetBranchAddress("secsyst_crosscheck_textarea", secsyst_crosscheck_textarea, &b_secsyst_crosscheck_textarea);
   fChain->SetBranchAddress("secother_blind", secother_blind, &b_secother_blind);
   fChain->SetBranchAddress("secmva_outputuse_textarea", secmva_outputuse_textarea, &b_secmva_outputuse_textarea);
   fChain->SetBranchAddress("secfitting_cov_textarea", secfitting_cov_textarea, &b_secfitting_cov_textarea);
   fChain->SetBranchAddress("secfitting_shapechoice", secfitting_shapechoice, &b_secfitting_shapechoice);
   fChain->SetBranchAddress("secgi_listsubscribed", secgi_listsubscribed, &b_secgi_listsubscribed);
   fChain->SetBranchAddress("secfitting_functionalform_textarea", secfitting_functionalform_textarea, &b_secfitting_functionalform_textarea);
   fChain->SetBranchAddress("secmva_overtraining_textarea", secmva_overtraining_textarea, &b_secmva_overtraining_textarea);
   fChain->SetBranchAddress("secfitting_gof_p_fiveto99", secfitting_gof_p_fiveto99, &b_secfitting_gof_p_fiveto99);
   fChain->SetBranchAddress("secother_cmscomb_doesntapply", secother_cmscomb_doesntapply, &b_secother_cmscomb_doesntapply);
   fChain->SetBranchAddress("secac_preappdate_text", secac_preappdate_text, &b_secac_preappdate_text);
   fChain->SetBranchAddress("secfitting_pruning", secfitting_pruning, &b_secfitting_pruning);
   fChain->SetBranchAddress("secfitting_pulls_textarea", secfitting_pulls_textarea, &b_secfitting_pulls_textarea);
   fChain->SetBranchAddress("secmva_inputchecks_textarea", secmva_inputchecks_textarea, &b_secmva_inputchecks_textarea);
   fChain->SetBranchAddress("secfitting_gof_p_oneto5", secfitting_gof_p_oneto5, &b_secfitting_gof_p_oneto5);
   fChain->SetBranchAddress("secfitting_pruning_textarea", secfitting_pruning_textarea, &b_secfitting_pruning_textarea);
   fChain->SetBranchAddress("secunf_software", secunf_software, &b_secunf_software);
   fChain->SetBranchAddress("secdisc_using", secdisc_using, &b_secdisc_using);
   fChain->SetBranchAddress("secmva_software_other", secmva_software_other, &b_secmva_software_other);
   fChain->SetBranchAddress("intervals_using", intervals_using, &b_intervals_using);
   fChain->SetBranchAddress("secfitting_gof_textarea", secfitting_gof_textarea, &b_secfitting_gof_textarea);
   fChain->SetBranchAddress("secfeedback_comment_textarea", secfeedback_comment_textarea, &b_secfeedback_comment_textarea);
   fChain->SetBranchAddress("secmva_outputuse_other", secmva_outputuse_other, &b_secmva_outputuse_other);
   fChain->SetBranchAddress("secunf_checknoregularization_textarea", secunf_checknoregularization_textarea, &b_secunf_checknoregularization_textarea);
   fChain->SetBranchAddress("secmva_overtraining", secmva_overtraining, &b_secmva_overtraining);
   fChain->SetBranchAddress("secunf_technique_regmatrixinv", secunf_technique_regmatrixinv, &b_secunf_technique_regmatrixinv);
   fChain->SetBranchAddress("intervals_ts_textarea", intervals_ts_textarea, &b_intervals_ts_textarea);
   fChain->SetBranchAddress("secgi_pastinteraction", secgi_pastinteraction, &b_secgi_pastinteraction);
   fChain->SetBranchAddress("secmva_type_other", secmva_type_other, &b_secmva_type_other);
   fChain->SetBranchAddress("secunf_checkregularizationstrength_textarea", secunf_checkregularizationstrength_textarea, &b_secunf_checkregularizationstrength_textarea);
   fChain->SetBranchAddress("secmva_inputcorrelations_linear", secmva_inputcorrelations_linear, &b_secmva_inputcorrelations_linear);
   fChain->SetBranchAddress("secfitting_modelchoice_adhoc", secfitting_modelchoice_adhoc, &b_secfitting_modelchoice_adhoc);
   fChain->SetBranchAddress("secmva_readtwiki", secmva_readtwiki, &b_secmva_readtwiki);
   fChain->SetBranchAddress("secunf_technique_techniquegeneralized", secunf_technique_techniquegeneralized, &b_secunf_technique_techniquegeneralized);
   fChain->SetBranchAddress("secsyst_priorform", secsyst_priorform, &b_secsyst_priorform);
   fChain->SetBranchAddress("secpdf_faq_planhepdata_textarea", secpdf_faq_planhepdata_textarea, &b_secpdf_faq_planhepdata_textarea);
   fChain->SetBranchAddress("secunf_eventweights_textarea", secunf_eventweights_textarea, &b_secunf_eventweights_textarea);
   fChain->SetBranchAddress("secpdf_compinter_choicepdf_textarea", secpdf_compinter_choicepdf_textarea, &b_secpdf_compinter_choicepdf_textarea);
   fChain->SetBranchAddress("secfitting_functionalform_other", secfitting_functionalform_other, &b_secfitting_functionalform_other);
   fChain->SetBranchAddress("secsyst_tmorphing", secsyst_tmorphing, &b_secsyst_tmorphing);
   fChain->SetBranchAddress("secdisc_twiki", secdisc_twiki, &b_secdisc_twiki);
   fChain->SetBranchAddress("secunf_checknoregularization", secunf_checknoregularization, &b_secunf_checknoregularization);
   fChain->SetBranchAddress("intervals_cls", intervals_cls, &b_intervals_cls);
   fChain->SetBranchAddress("intervals_approach_freqlimits", intervals_approach_freqlimits, &b_intervals_approach_freqlimits);
   fChain->SetBranchAddress("secfitting_modelchoice_theorycurve", secfitting_modelchoice_theorycurve, &b_secfitting_modelchoice_theorycurve);
   fChain->SetBranchAddress("intervals_software_textarea", intervals_software_textarea, &b_intervals_software_textarea);
   fChain->SetBranchAddress("secunf_software_roounfold", secunf_software_roounfold, &b_secunf_software_roounfold);
   fChain->SetBranchAddress("secother_cmscomb", secother_cmscomb, &b_secother_cmscomb);
   fChain->SetBranchAddress("secmva_inputcorrelations_nonlinear", secmva_inputcorrelations_nonlinear, &b_secmva_inputcorrelations_nonlinear);
   fChain->SetBranchAddress("secpdf_compinter_pdforder", secpdf_compinter_pdforder, &b_secpdf_compinter_pdforder);
   fChain->SetBranchAddress("date", date, &b_date);
   fChain->SetBranchAddress("year", &year, &b_year);
   fChain->SetBranchAddress("month", &month, &b_month);
   fChain->SetBranchAddress("day", &day, &b_day);
   fChain->SetBranchAddress("secac_cadi_yy", &secac_cadi_yy, &b_secac_cadi_yy);
   fChain->SetBranchAddress("secac_cadi_nnn", &secac_cadi_nnn, &b_secac_cadi_nnn);
   Notify();
}

Bool_t SCQuestDataReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void SCQuestDataReader::Show(Long64_t entry)
{
   // Print contents of entry.
   // If entry is not specified, print current entry
   if (!fChain) return;
   // fChain->Show(entry);
   fChain->SetBranchStatus("*",1);  // disable all branches
   fChain->GetEntry(entry);

   cout << " 1. Analysis Context" << endl;
   cout << " 1.1. Your name" << endl;
   cout << secac_name_text << endl;
   cout << " 1.2. Your email address" << endl;
   cout << secac_email_text << endl;
   cout << " 1.3. Working group" << endl;
   cout << secac_wg << endl;
   cout << secac_wg_text << endl;
   cout << " 1.4. CADI entry number, if available (e.g., HIG-11-032)" << endl;
   cout << secac_cadi_text << endl;
   cout << " 1.5. If a CADI entry is available, please make sure you fill it correctly, as an email will be sent to the review Hypernews associated to the CADI line. If no CADI entry is available, please provide the title and applicable references (analysis note numbers, etc.):" << endl;
   cout << secac_references_text << endl;
   cout << " 1.6. Preapproval date" << endl;
   cout << secac_preappdate << endl;
   cout << secac_preappdate_text << endl;
   cout << " 1.7. Please provide a three-line summary of the analysis: what is being measured or sought for, what dataset, and how." << endl;
   cout << secac_analysiscontext_textarea << endl;
   cout << " 1.8. CADI entry numbers of analyses with same/similar statistical treatment (including earlier version of this analysis, if applicable). Please point out all relevant similarities / differences." << endl;
   cout << secac_related_textarea << endl;
   cout << endl;
   cout << " 2. General information" << endl;
   cout << " 2.1. Are you aware that the Statistics Committee has a TWiki page..." << endl;
   cout << secgi_faqaware << endl;
   cout << " 2.2. Are you aware that the Statistics Committee will make an effort to promptly answer your question on statistics issues if sent via the Statistics Discussions Hypernews forum, or to the Committee's mailing list cms-statistics-committee@cern.ch?" << endl;
   cout << secgi_listaware << endl;
   cout << " 2.3. Have you subscribed yet to the Statistics Discussions Hypernews forum (if not, we suggest that you do)?" << endl;
   cout << secgi_listsubscribed << endl;
   cout << " 2.4. Have you interacted with the Statistics Committee in the past (via email, HN, or in person) to discuss an issue with a CMS analysis ?" << endl;
   cout << secgi_pastinteraction << endl;
   cout << " 2.5. Are you aware that the Statistics Committee meets regularly (Vidyo only; look for announcement in Statistics Discussions HN forum) and that everybody is welcome to participate ?" << endl;
   cout << secgi_openmeetings << endl;
   cout << endl;
   cout << " 3. Multivariate discriminants" << endl;
   cout << " 3.1. Have you read the SC TWiki page on MVA recommendations?" << endl;
   cout << secmva_readtwiki << endl;
   cout << " 3.2. Are you using a multi-variate discriminant in your data analysis to discriminate between signal and background?" << endl;
   cout << secmva_using << endl;
   cout << " 3.3. What software are you using?" << endl;
   cout << secmva_software_tmva << endl;
   cout << secmva_software_other << endl;
   cout << secmva_software_textarea << endl;
   cout << " 3.4. What type of discriminant do you use?" << endl;
   cout << secmva_type_bdt << endl;
   cout << secmva_type_fisher << endl;
   cout << secmva_type_plikelihood << endl;
   cout << secmva_type_nn << endl;
   cout << secmva_type_other << endl;
   cout << secmva_type_textarea << endl;
   cout << " 3.5. How do you make use of the MVA output in the analysis?" << endl;
   cout << secmva_outputuse_cut << endl;
   cout << secmva_outputuse_fit << endl;
   cout << secmva_outputuse_other << endl;
   cout << secmva_outputuse_textarea << endl;
   cout << " 3.6. How have you checked that the input variables, including their dependencies, are well-modeled?" << endl;
   cout << secmva_inputchecks_oned << endl;
   cout << secmva_inputchecks_twod << endl;
   cout << secmva_inputchecks_other << endl;
   cout << secmva_inputchecks_textarea << endl;
   cout << " 3.7. Do you study the correlations and dependencies between the input variables?" << endl;
   cout << secmva_inputcorrelations_linear << endl;
   cout << secmva_inputcorrelations_nonlinear << endl;
   cout << secmva_inputcorrelations_other << endl;
   cout << secmva_inputcorrelations_textarea << endl;
   cout << " 3.8. How do you select the input variables? Do you perform any pruning of your initial list of input variables, based on the correlations or dependencies between the input variables?" << endl;
   cout << secmva_variableselection << endl;
   cout << secmva_variableselection_textarea << endl;
   cout << " 3.9. Are you aware that some MVA techniques may classify data events as very signal-like if any of their variables take values in regions where the background training samples have no events?" << endl;
   cout << secmva_nullpdf << endl;
   cout << secmva_nullpdf_textarea << endl;
   cout << " 3.10. When training with more than one background, do you mix all samples in the proportions you expect in data?" << endl;
   cout << secmva_bkgmix << endl;
   cout << secmva_bkgmix_textarea << endl;
   cout << " 3.11. How do you make sure you are not affected by overtraining?" << endl;
   cout << secmva_overtraining << endl;
   cout << secmva_overtraining_textarea << endl;
   cout << " 3.12. Do you perform the following robustness check? Train two (or more) MVAs starting from different random sets of weights, and then look at the event-by-event correlation in the final output. It should be very diagonal." << endl;
   cout << secmva_robustness << endl;
   cout << secmva_robustness_textarea << endl;
   cout << endl;
   cout << " 4. Data fitting" << endl;
   cout << " 4.1. Does the analysis include fitting of data distributions?" << endl;
   cout << secfitting_using << endl;
   cout << " 4.2. Which fits are you performing in your analysis? (please use the \"Additional comments\" field)" << endl;
   cout << secfitting_whichfits_textarea << endl;
   cout << " 4.3. Which functional forms are used?" << endl;
   cout << secfitting_functionalform_templates << endl;
   cout << secfitting_functionalform_parametric << endl;
   cout << secfitting_functionalform_other << endl;
   cout << secfitting_functionalform_textarea << endl;
   cout << " 4.4. How do you choose the fitting model?" << endl;
   cout << secfitting_modelchoice_mctemplates << endl;
   cout << secfitting_modelchoice_sbtemplates << endl;
   cout << secfitting_modelchoice_theorycurve << endl;
   cout << secfitting_modelchoice_theoryinspired << endl;
   cout << secfitting_modelchoice_adhoc << endl;
   cout << secfitting_modelchoice_other << endl;
   cout << secfitting_modelchoice_textarea << endl;
   cout << " 4.5. Which test statistic are you using to perform the fit(s)?" << endl;
   cout << secfitting_teststat_chi2 << endl;
   cout << secfitting_teststat_binnedl << endl;
   cout << secfitting_teststat_unbinnedl << endl;
   cout << secfitting_teststat_other << endl;
   cout << secfitting_teststat_textarea << endl;
   cout << " 4.5.1. What drove you to this particular choice ?" << endl;
   cout << secfitting_teststat_nounbinlik_textarea << endl;
   cout << " 4.6. Do you perform a goodness-of-fit test for the fit(s)?" << endl;
   cout << secfitting_gof << endl;
   cout << " 4.6.1. What is/are the resulting p-value(s)?" << endl;
   cout << secfitting_gof_p_dontknow << endl;
   cout << secfitting_gof_p_ltp1 << endl;
   cout << secfitting_gof_p_p1to1 << endl;
   cout << secfitting_gof_p_oneto5 << endl;
   cout << secfitting_gof_p_fiveto99 << endl;
   cout << secfitting_gof_p_nnto99p9 << endl;
   cout << secfitting_gof_p_gt99p9 << endl;
   cout << secfitting_gof_textarea << endl;
   cout << " 4.7. Do you check that the pull distribution in toy experiments is distributed as expected for an unbiased method (mean 0, width 1)?" << endl;
   cout << secfitting_pulls << endl;
   cout << secfitting_pulls_textarea << endl;
   cout << " 4.8. In case you are using the returned parameters in other parts of your analysis: are you accounting for the covariance matrix (error and off-diagonal correlation terms) of the parameter uncertainties?" << endl;
   cout << secfitting_cov << endl;
   cout << secfitting_cov_textarea << endl;
   cout << " 4.9. In case you perform a fit to the background shape with a function: How do you choose the functional form?" << endl;
   cout << secfitting_shapechoice << endl;
   cout << secfitting_shapechoice_textarea << endl;
   cout << " 4.10. In case you perform a fit using a functional form which exists for many different number of parameters (such as polynomials): How are you choosing the number of parameters?" << endl;
   cout << secfitting_pruning << endl;
   cout << secfitting_pruning_textarea << endl;
   cout << " 4.11. Are any of the parameters returned by the fit close (less than 3 sigma) to their physical or pre-defined boundary?" << endl;
   cout << secfitting_boundary << endl;
   cout << secfitting_boundary_textarea << endl;
   // cout << " 4.XX deprecated question" << endl;
   // cout << secfitting_bkgshapesyst << endl;
   // cout << secfitting_bkgshapesyst_textarea << endl;
   cout << endl;
   cout << " 5. Confidence intervals and limits" << endl;
   cout << " 5.1. Does the analysis include the setting of limits on some parameter or placing a confidence interval on some parameter?" << endl;
   cout << intervals_using << endl;
   cout << " 5.2. Will you cite a limit or a two-sided confidence interval?" << endl;
   cout << intervals_sidednessdecision << endl;
   cout << intervals_sidednessdecision_textarea << endl;
   cout << " 5.3. Are you aware of the agreement between ATLAS and CMS regarding limit setting, which — among other things — requires the CLs method for Higgs and SUSY analyses?" << endl;
   cout << intervals_cls << endl;
   cout << " 5.4. Are you aware that the Statistics Committee provides support and a simple recipe to include the derivation of Feldman-Cousins confidence intervals in RooStats jobs that are currently used to compute CLs limits?" << endl;
   cout << intervals_roostatsclsfc << endl;
   cout << " 5.5. If you are using a Bayesian technique, are you aware that the SC recommends to perform a prior sensitivity analysis, both on the PDFs of parameters describing the systematic uncertainties (nuisance parameters) and on the PDF of the parameter to be estimated?" << endl;
   cout << intervals_prioranalysis << endl;
   cout << " 5.6. Mark the approach(es) you are using" << endl;
   cout << intervals_approach_freqlimits << endl;
   cout << intervals_approach_freqintervals << endl;
   cout << intervals_approach_modfreq << endl;
   cout << intervals_approach_pllimits << endl;
   cout << intervals_approach_plintervals << endl;
   cout << intervals_approach_unified << endl;
   cout << intervals_approach_bayesianflat << endl;
   cout << intervals_approach_bayesianref << endl;
   cout << intervals_approach_other << endl;
   cout << intervals_approach_textarea << endl;
   cout << " 5.7. What software tool are you using for your confidence interval calculations?" << endl;
   cout << intervals_software_combine << endl;
   cout << intervals_software_lands << endl;
   cout << intervals_software_roostats << endl;
   cout << intervals_software_theta << endl;
   cout << intervals_software_other << endl;
   cout << intervals_software_textarea << endl;
   cout << " 5.8. In the case of frequentist/CLs confidence interval construction: which test statistic do you use?" << endl;
   cout << intervals_ts << endl;
   cout << intervals_ts_textarea << endl;
   cout << " 5.8.1. If you chose \"other\" in the previous question, please specify the test statistic used here. As an example of the detail you should provide: \"the HCG choice is qmu = -2 Ln[L(mu, theta_mu_* )/L(mu* ,theta* )], with 0 < mu* < mu at the denominator, and the numerator has nuisances set at conditional ML estimate for data at given mu, theta_mu_*\"" << endl;
   cout << intervals_ts_tsdetail_textarea << endl;
   cout << " 5.9. Do you use asymptotic formulae from the paper https://arxiv.org/abs/1007.1727v3 for your confidence interval estimations?" << endl;
   cout << intervals_useasyformulae << endl;
   cout << " 5.9.1. If you choose \"Yes\" in the previous question, did you make a cross check with toys, e.g. checking the agreement of toy and asymptotics based upper limits for some exemplary values of new physics model parameters such as the mass of a new particle?" << endl;
   cout << intervals_useasyformulae_asycheckwithtoys << endl;
   cout << " 5.10. In the case toy data is generated as part of the procedure—e.g. to determine the test statistic distribution or to compute the expected limit / expected limit bands—please specify how the nuisance parameter are chosen for the toys:" << endl;
   cout << intervals_toygen << endl;
   cout << intervals_toygen_textarea << endl;
   cout << " 5.11. In case you convert a limit on a signal cross section into a limit on the mass (or another parameter; we call it \"mass\" here): how do you account for the theory error on the signal cross section?" << endl;
   cout << intervals_theoryerror << endl;
   cout << intervals_theoryerror_textarea << endl;
   cout << endl;
   cout << " 6. Discovery" << endl;
   cout << " 6.1. Have you read the discovery-related TWiki pages on Search Procedures, Sensitivity Calculations, and Look-Elsewhere Effect (if applicable)?" << endl;
   cout << secdisc_twiki << endl;
   cout << " 6.2. Does the analysis include discovery-related statements, such as citing p-values of the null hypothesis or a \"significance\"?" << endl;
   cout << secdisc_using << endl;
   cout << " 6.3. To evaluate the p-value(s) of the null hypothesis, what test statistic was used?" << endl;
   cout << secdisc_ts << endl;
   cout << secdisc_ts_textarea << endl;
   cout << " 6.4. Do you account for the look-elsewhere effect?" << endl;
   cout << secdisc_lee << endl;
   cout << secdisc_lee_textarea << endl;
   cout << endl;
   cout << " 7. Unfolding" << endl;
   cout << " 7.1. Is unfolding used in parts of the analysis?" << endl;
   cout << secunf_using << endl;
   cout << " 7.2. Have you read the SC TWiki page on recommendations for unfolding techniques?" << endl;
   cout << secunf_reeadrecomm << endl;
   cout << " 7.3. Are you aware that the SC discourages the use of bin-by-bin unfolding, or correction factors, and in general on techniques neglecting correlations?" << endl;
   cout << secunf_binbybin << endl;
   cout << " 7.4. Which unfolding technique are you using?" << endl;
   cout << secunf_technique << endl;
   cout << secunf_technique_binbybin << endl;
   cout << secunf_technique_matrixinv << endl;
   cout << secunf_technique_techniquegeneralized << endl;
   cout << secunf_technique_dagostini << endl;
   cout << secunf_technique_other << endl;
   cout << secunf_technique_regmatrixinv << endl;
   cout << secunf_technique_textarea << endl;
   cout << " 7.5. Which software are you using?" << endl;
   cout << secunf_software << endl;
   cout << secunf_software_roounfold << endl;
   cout << secunf_software_tunfold << endl;
   cout << secunf_software_other << endl;
   cout << secunf_software_textarea << endl;
   cout << " 7.6. We recommend to try unfolding without regularization, have you tested this?" << endl;
   cout << secunf_checknoregularization << endl;
   cout << secunf_checknoregularization_textarea << endl;
   cout << " 7.7. The condition number of the response matrix (it can be determined using e.g. the TDecompSVD class in ROOT) can be a good indicator of whether regularization is needed or not. What is its value?" << endl;
   cout << secunf_conditionnumber_textarea << endl;
   cout << " 7.8. If you have performed unfolding with regularization, by which objective criterion have you chosen the regularization parameter (number of iterations in case of D'Agostini or other iterative unfolding methods)?" << endl;
   cout << secunf_checkregularizationstrength_textarea << endl;
   cout << " 7.9. Validation of unfolding" << endl;
   cout << " 7.9.1. Have you used toy experiments to verify the coverage of the unfolded uncertainties?" << endl;
   cout << secunf_validation_validationcoverage << endl;
   cout << secunf_validation_validationotherchecks_textarea << endl;
   cout << " 7.9.2. Which other checks have you performed for validation (e.g. comparison with other techniques, unfolding reweighted MCs, unfolding one fully simulated MC using a MC with a different physics model for the response matrix and regularization, etc.)?" << endl;
   cout << secunf_validation_validationotherchecks_textarea << endl;
   cout << " 7.9.3 Have you performed the bottom line test?" << endl;
   cout << secunf_validation_bottomlinetest << endl;
   cout << secunf_validation_bottomlinetest_textarea << endl;
   cout << secunf_validation_textarea << endl;
   cout << " 7.10. In case you apply weights to the number of observed (real data) events, e.g. to correct for trigger prescales:" << endl;
   cout << secunf_eventweights << endl;
   cout << secunf_eventweights_textarea << endl;
   cout << " 7.11. Which information do you intend to make publicly available?" << endl;
   cout << " 7.11.1. The unfolded histogram and its total covariance matrix" << endl;
   cout << secunf_publiclyavailableunfolding_unfoldedandcovariancematrix << endl;
   cout << " 7.11.2. The response matrix K as a coloured 2D histogram" << endl;
   cout << secunf_publiclyavailableunfolding_responsematrixcoloured << endl;
   cout << secunf_publiclyavailableunfolding_other << endl;
   cout << secunf_publiclyavailableunfolding_textarea << endl;
   cout << endl;
   cout << " 8. Systematic Uncertainties" << endl;
   cout << " 8.1. Have you read the SC recommendation TWiki pages on systematic uncertainties?" << endl;
   cout << secsyst_twiki << endl;
   cout << " 8.2. Have you considered that systematic uncertainties constrained by sideband measurements in the data, and whose estimate thus depends on the size of the analyzed dataset, should be treated as statistical uncertainties?" << endl;
   cout << secsyst_syststat << endl;
   cout << " 8.3. If including a systematic effect as nuisance parameter in the model, are you aware that the SC recommends the use of Gamma or Log-Normal priors instead of truncated Gaussians?" << endl;
   cout << secsyst_priorform << endl;
   cout << " 8.4. Does your analysis include \"cross-checks\" of your method, e.g. the verification of a technique on a subsidiary set of data?" << endl;
   cout << secsyst_crosscheck << endl;
   cout << " 8.4.1. Are you deriving a systematic uncertainty on your main measurement from the level of agreement you observe in the cross-check?" << endl;
   cout << secsyst_crosscheck_syst << endl;
   cout << " 8.4.2. What would you have done if the cross-check failed (e.g. p-value below 0.01, or other pre-defined criterion)?" << endl;
   cout << secsyst_crosscheck_whattodo_textarea << endl;
   cout << secsyst_crosscheck_textarea << endl;
   cout << " 8.5. Do you use \"template morphing\" in you analysis, e.g. to model a systematic uncertainty in the statistical model?" << endl;
   cout << secsyst_tmorphing << endl;
   cout << secsyst_tmorphing_textarea << endl;
   cout << endl;
   cout << " 9. Parton distribution functions" << endl;
   cout << " 9.1. Estimation of the PDF uncertainty on the measurement:" << endl;
   cout << " 9.1.1. How do you estimate the PDF uncertainty on your measurement, e.g. effects on the acceptance?" << endl;
   cout << secpdf_pdfuncs_howest << endl;
   cout << secpdf_pdfuncs_howest_textarea << endl;
   cout << " 9.2. Do you perform a SM measurement to test QCD or to determine SM parameters like proton PDFs, heavy-quark masses, or the strong coupling constant alpha_s?" << endl;
   cout << secpdf_faq << endl;
   cout << " 9.2.1. How do you estimate the sensitivity of Your observable to QCD parameters/PDFs?" << endl;
   cout << secpdf_faq_obssens << endl;
   cout << " 9.2.2. Do you plan to provide Your measurement to HEPDATA including correlation matrices to be used by PDF groups? (The PDF forum provides support for pushing measurements to HEPDATA.)" << endl;
   cout << secpdf_faq_planhepdata << endl;
   cout << secpdf_faq_planhepdata_textarea << endl;
   cout << " 9.3. Comparison of Your measurement to theory predictions for the interpretation of the results:" << endl;
   cout << " 9.3.1. Does the order of the PDF you use (LO, NLO, NNLO) correspond to the order of the calculation you are using?" << endl;
   cout << secpdf_compinter_pdforder << endl;
   cout << secpdf_compinter_pdforder_textarea << endl;
   cout << " 9.3.2. How did you choose the PDFs to compare your measurements to the theory prediction?" << endl;
   cout << secpdf_compinter_choicepdf << endl;
   cout << secpdf_compinter_choicepdf_textarea << endl;
   cout << " 9.3.3. Did you properly cite every PDF set employed even when used only within the context of the PDF4LHC recommendation or CMS or META PDFs?" << endl;
   cout << secpdf_compinter_propercit << endl;
   cout << " 9.3.4. Do you estimate the PDF uncertainty on your prediction using the procedure described in the publication of the particular PDF you use?" << endl;
   cout << secpdf_compinter_description << endl;
   cout << endl;
   cout << " 10. Other statistics related items" << endl;
   cout << " 10.1. Do you perform a blind analysis? If so, can you succinctly describe what was done?" << endl;
   cout << secother_blind << endl;
   cout << secother_blind_textarea << endl;
   cout << " 10.2. In case you combine measurements in your analysis: what method is used?" << endl;
   cout << secother_combination << endl;
   cout << secother_combination_textarea << endl;
   cout << " 10.3. In case you use the results of another CMS analysis: how did you treat correlations from common systematic uncertainties and from potential overlap in the datasets?" << endl;
   cout << secother_cmscomb << endl;
   cout << secother_cmscomb_doesntapply << endl;
   cout << secother_cmscomb_yes << endl;
   cout << secother_cmscomb_textarea << endl;
   // cout << " deprecated question" << endl;
   // cout << secother_faq << endl;
   cout << endl;
   cout << " 11. Comments and feedback" << endl;
   cout << " 11.1. What statistical element of your analysis is not yet frozen (what changes can be expected)?" << endl;
   cout << secfeedback_changes << endl;
   cout << secfeedback_changes_textarea << endl;
   cout << " 11.2. Do you have any additional comment related to the analysis? Is there a statistic-related element of your analysis not covered by this questionnaire?" << endl;
   cout << secfeedback_comment_textarea << endl;
   cout << " 11.3. Do you have a suggestion for improving this questionnaire? Do you have a suggestion for improving interaction with the CMS Statistics Committee in general or documentation of   statistical recommendations?" << endl;
   cout << secfeedback_feedback_textarea << endl;
   cout << endl;
   // cout << " Questionnaire status" << endl;
   // cout << __save << endl;
   // cout << __submit << endl;
   // cout << __updates << endl;
   // cout << endl;
   cout << "Date of submission:" << endl;
   cout << date << endl;
   cout << endl;
}
Int_t SCQuestDataReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef SCQuestDataReader_cxx
