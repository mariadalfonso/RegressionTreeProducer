TFile* file = TFile::Open("tree.root");
file->cd("een_analyzer");

TTree *tr=(TTree*)gDirectory->Get("PfTree");
tr->Scan()
tr->Scan("genMass:genPdgId:genStatus:genMatchdE:genMatchdR:genMatchdRdE")

