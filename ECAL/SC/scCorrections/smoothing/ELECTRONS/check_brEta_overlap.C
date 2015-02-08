#include "../../binning.h"
#include "corrections_brEta.C"
#include "TF2.h"
#include "TFile.h"

int check_brEta_overlap(){ 
  
  gROOT->SetStyle("Plain");
  gStyle->SetOptStat(111111);

  TFile *f = new TFile("./histCorrections_brEta.root","read");  
  TF2 *f2 = new TF2("f2",F_applyScCorrectionsBrEta,0,3,0,10,2);

  TH1F* h[nBinsEta];
  TH1F* h2[nBinsEta];

  for (Int_t i = 0 ; i< nBinsEta; ++i){
    
    TCanvas *c = new TCanvas("c","c",600,600);
    //    c->Divide(2);
    
    h[i] = (TH1F*)f->Get(Form("h_corr_%d",i));    
    h2[i] = new TH1F("h2","h2",nBinsBr*2-1,brbins);
    TH1F* res = new TH1F("res","res",100,-0.001,0.001);
    
    c->cd(1);
    h[i]->GetYaxis()->SetRangeUser(0.90,1.01);
    if (i>6) h[i]->GetYaxis()->SetRangeUser(0.85,1.01);
    h[i]->GetXaxis()->SetRangeUser(0,5);
    if (i==0)h[i]->Draw("EP");
    h[i]->Draw("EP");
    //    TLatex l(3.5,0.95,Form("h_corr_%d",i));
    //    l.Draw();
    
    for (Int_t j = 0; j< nBinsBr; ++j){
      h2[i]->SetBinContent(2*j+1, f2->Eval( 0.5*(rightEta[i]-leftEta[i])+leftEta[i], h[i]->GetBinCenter(2*j+1) ) );
      h2[i]->SetBinError(j,0);
      h2[i]->SetLineColor(h[i]->GetMarkerColor());
      res->Fill(h[i]->GetBinContent(j) - h2[i]->GetBinContent(j));
    }
    h2[i]->Draw("same");
    
//     c->cd(2);
//     res->Draw();

    c->Update();
    c->Print(Form("h_corr_%d.png",i));
    getchar();
  }
  
  return 0;
}

