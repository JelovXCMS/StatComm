#define SCQuestDataReader_cxx
#include "SCQuestDataReader.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <vector>
#include <iostream>

using namespace std;

void SCQuestDataReader::Show(TString cadiline)
{
//   In a ROOT session, you can do:
//      root> .L SCQuestDataReader.C
//      root> SCQuestDataReader t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
   fChain->SetBranchStatus("*",0);  // disable all branches
   fChain->SetBranchStatus("secac_cadi_text",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   vector<int> entries;

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if (TString(secac_cadi_text)==cadiline) entries.push_back(jentry);
   }

   if (entries.size()==0) {
      cout << "Error, could not find a Statistics Committee questionnaire for " << cadiline << "." << endl;
      cout << "Are you sure that a questionnaire has been filled for this questionnaire, before 2017/10/26? If the questionnaire was submitted more recently, you should check this page instead: https://cmsstatisticscommitteequestionnaire.web.cern.ch/node/1/webform-results." << endl;
      return;
   }

   for (int i=0; i<entries.size(); i++) {
      Show(entries[i]);
   }
}
