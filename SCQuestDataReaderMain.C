// main file for SC questionnaire reader
// compile with: `root-config --cxx --cflags` -o SCQuestDataReader SCQuestDataReaderMain.C `root-config --libs`

#include "SCQuestDataReader.C"
#include <string>
#include <iostream>
#include "TFile.h"
#include "TTree.h"

using namespace std;

int main(int argc, const char** argv) {
   if (argc<2 || string(argv[1])=="-h" || string(argv[1])=="--help") { // print the help
      cout << "Usage: SCQuestDataReader CADI_line [/path/to/quest_data.root]" << endl;
      cout << "The path to the questionnaire data ROOT file is optional. (Default: /afs/cern.ch/user/e/echapon/workspace/public/StatisticsCommittee/Questionnaire/quest_data.root)" << endl;
      return 0;
   }

   TTree *tr = 0;
   if (argc>=3) {
      TFile *f = TFile::Open(argv[2]);
      if (!f || !f->IsOpen()) {
         cout << "Error, could not open " << argv[2] << endl;
         return -1;
      }
      tr = (TTree*) f->Get("questdata");
      if (!tr) {
         cout << "Error, could not find TTree questdata in file " << argv[2] << endl;
         return -1;
      }
   }


   SCQuestDataReader r(tr);
   r.Show(argv[1]);
}
