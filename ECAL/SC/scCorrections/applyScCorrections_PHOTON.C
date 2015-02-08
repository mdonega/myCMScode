#ifndef scCorrectionsBrETAET_h                                              
#define scCorrectionsBrETAET_h                                              
#include "TFile.h"                                                      
#include "TH1F.h"				                       
  	                                                               
Double_t applyScCorrectionsBrEta(Double_t eta, Double_t sigmaPhiSigmaEta){  
  	                                                               
  const Int_t    nBinsEta = 14;                    
  Double_t       leftEta  [14];                   
  Double_t       rightEta [14];                   
  const Int_t    nBinsBr  = 18;                     
  Double_t       leftBr  [18];                      
  Double_t       rightBr [18];                      
  Double_t brbins  [36];                    
  TH1F *h_corr[14];                                 
  	                                                               
  leftEta[0] =  0.02 ; 
  leftEta[1] =  0.25 ; 
  leftEta[2] =  0.46 ; 
  leftEta[3] =  0.81 ; 
  leftEta[4] =  0.91 ; 
  leftEta[5] =  1.01 ; 
  leftEta[6] =  1.16 ; 
  leftEta[7] =  1.56 ; 
  leftEta[8] =  1.653 ; 
  leftEta[9] =  1.8 ; 
  leftEta[10] =  2 ; 
  leftEta[11] =  2.2 ; 
  leftEta[12] =  2.3 ; 
  leftEta[13] =  2.4 ; 
  rightEta[0] =  0.25 ; 
  rightEta[1] =  0.42 ; 
  rightEta[2] =  0.77 ; 
  rightEta[3] =  0.91 ; 
  rightEta[4] =  1.01 ; 
  rightEta[5] =  1.13 ; 
  rightEta[6] =  1.44 ; 
  rightEta[7] =  1.653 ; 
  rightEta[8] =  1.8 ; 
  rightEta[9] =  2 ; 
  rightEta[10] =  2.2 ; 
  rightEta[11] =  2.3 ; 
  rightEta[12] =  2.4 ; 
  rightEta[13] =  2.5 ; 
  leftBr[0] =  0.8 ; 
  leftBr[1] =  1 ; 
  leftBr[2] =  1.2 ; 
  leftBr[3] =  1.4 ; 
  leftBr[4] =  1.6 ; 
  leftBr[5] =  1.8 ; 
  leftBr[6] =  2 ; 
  leftBr[7] =  2.2 ; 
  leftBr[8] =  2.4 ; 
  leftBr[9] =  2.6 ; 
  leftBr[10] =  2.8 ; 
  leftBr[11] =  3 ; 
  leftBr[12] =  3.2 ; 
  leftBr[13] =  3.4 ; 
  leftBr[14] =  3.6 ; 
  leftBr[15] =  3.8 ; 
  leftBr[16] =  4 ; 
  leftBr[17] =  5 ; 
  rightBr[0] =  1 ; 
  rightBr[1] =  1.2 ; 
  rightBr[2] =  1.4 ; 
  rightBr[3] =  1.6 ; 
  rightBr[4] =  1.8 ; 
  rightBr[5] =  2 ; 
  rightBr[6] =  2.2 ; 
  rightBr[7] =  2.4 ; 
  rightBr[8] =  2.6 ; 
  rightBr[9] =  2.8 ; 
  rightBr[10] =  3 ; 
  rightBr[11] =  3.2 ; 
  rightBr[12] =  3.4 ; 
  rightBr[13] =  3.6 ; 
  rightBr[14] =  3.8 ; 
  rightBr[15] =  4 ; 
  rightBr[16] =  5 ; 
  rightBr[17] =  10 ; 
  brbins[0] =  0.8 ; 
  brbins[1] =  1 ; 
  brbins[2] =  1 ; 
  brbins[3] =  1.2 ; 
  brbins[4] =  1.2 ; 
  brbins[5] =  1.4 ; 
  brbins[6] =  1.4 ; 
  brbins[7] =  1.6 ; 
  brbins[8] =  1.6 ; 
  brbins[9] =  1.8 ; 
  brbins[10] =  1.8 ; 
  brbins[11] =  2 ; 
  brbins[12] =  2 ; 
  brbins[13] =  2.2 ; 
  brbins[14] =  2.2 ; 
  brbins[15] =  2.4 ; 
  brbins[16] =  2.4 ; 
  brbins[17] =  2.6 ; 
  brbins[18] =  2.6 ; 
  brbins[19] =  2.8 ; 
  brbins[20] =  2.8 ; 
  brbins[21] =  3 ; 
  brbins[22] =  3 ; 
  brbins[23] =  3.2 ; 
  brbins[24] =  3.2 ; 
  brbins[25] =  3.4 ; 
  brbins[26] =  3.4 ; 
  brbins[27] =  3.6 ; 
  brbins[28] =  3.6 ; 
  brbins[29] =  3.8 ; 
  brbins[30] =  3.8 ; 
  brbins[31] =  4 ; 
  brbins[32] =  4 ; 
  brbins[33] =  5 ; 
  brbins[34] =  5 ; 
  brbins[35] =  10 ; 
  for (Int_t i = 0; i<nBinsEta; ++i){                                                   
    h_corr[i] = new TH1F(Form("h_corr_%d",i),Form("h_corr_%d",i),nBinsBr*2-1, brbins);  
  }                                                                                     
  h_corr[0]->SetBinContent(1,1.00506 );
  h_corr[0]->SetBinContent(3,1.00141 );
  h_corr[0]->SetBinContent(5,1.00352 );
  h_corr[0]->SetBinContent(7,1.00506 );
  h_corr[0]->SetBinContent(9,1.00442 );
  h_corr[0]->SetBinContent(11,1.00486 );
  h_corr[0]->SetBinContent(13,1.00404 );
  h_corr[0]->SetBinContent(15,1.00473 );
  h_corr[0]->SetBinContent(17,1.00393 );
  h_corr[0]->SetBinContent(19,1.00522 );
  h_corr[0]->SetBinContent(21,1.00372 );
  h_corr[0]->SetBinContent(23,1.00328 );
  h_corr[0]->SetBinContent(25,1.00353 );
  h_corr[0]->SetBinContent(27,1.00543 );
  h_corr[0]->SetBinContent(29,1.00126 );
  h_corr[0]->SetBinContent(31,1.00205 );
  h_corr[0]->SetBinContent(33,1.00098 );
  h_corr[0]->SetBinContent(35,0.99688 );

  h_corr[1]->SetBinContent(1,1.00695 );
  h_corr[1]->SetBinContent(3,1.00134 );
  h_corr[1]->SetBinContent(5,1.00284 );
  h_corr[1]->SetBinContent(7,1.00468 );
  h_corr[1]->SetBinContent(9,1.00486 );
  h_corr[1]->SetBinContent(11,1.00401 );
  h_corr[1]->SetBinContent(13,1.00433 );
  h_corr[1]->SetBinContent(15,1.00276 );
  h_corr[1]->SetBinContent(17,1.00314 );
  h_corr[1]->SetBinContent(19,1.00108 );
  h_corr[1]->SetBinContent(21,1.00181 );
  h_corr[1]->SetBinContent(23,1.00182 );
  h_corr[1]->SetBinContent(25,0.999675 );
  h_corr[1]->SetBinContent(27,1.00145 );
  h_corr[1]->SetBinContent(29,1.00506 );
  h_corr[1]->SetBinContent(31,1.00024 );
  h_corr[1]->SetBinContent(33,0.999653 );
  h_corr[1]->SetBinContent(35,0.996048 );

  h_corr[2]->SetBinContent(1,1.00595 );
  h_corr[2]->SetBinContent(3,1.00056 );
  h_corr[2]->SetBinContent(5,1.00263 );
  h_corr[2]->SetBinContent(7,1.003 );
  h_corr[2]->SetBinContent(9,1.00345 );
  h_corr[2]->SetBinContent(11,1.00321 );
  h_corr[2]->SetBinContent(13,1.00339 );
  h_corr[2]->SetBinContent(15,1.00132 );
  h_corr[2]->SetBinContent(17,1.00212 );
  h_corr[2]->SetBinContent(19,1.00152 );
  h_corr[2]->SetBinContent(21,1.00069 );
  h_corr[2]->SetBinContent(23,1.00215 );
  h_corr[2]->SetBinContent(25,0.999108 );
  h_corr[2]->SetBinContent(27,1.00011 );
  h_corr[2]->SetBinContent(29,0.998951 );
  h_corr[2]->SetBinContent(31,0.997525 );
  h_corr[2]->SetBinContent(33,0.997436 );
  h_corr[2]->SetBinContent(35,0.994791 );

  h_corr[3]->SetBinContent(1,1.00595 );
  h_corr[3]->SetBinContent(3,1.00134 );
  h_corr[3]->SetBinContent(5,1.00091 );
  h_corr[3]->SetBinContent(7,1.00159 );
  h_corr[3]->SetBinContent(9,1.00165 );
  h_corr[3]->SetBinContent(11,1.00029 );
  h_corr[3]->SetBinContent(13,0.998894 );
  h_corr[3]->SetBinContent(15,0.998885 );
  h_corr[3]->SetBinContent(17,0.998694 );
  h_corr[3]->SetBinContent(19,0.995803 );
  h_corr[3]->SetBinContent(21,0.99839 );
  h_corr[3]->SetBinContent(23,0.99683 );
  h_corr[3]->SetBinContent(25,0.996897 );
  h_corr[3]->SetBinContent(27,0.994229 );
  h_corr[3]->SetBinContent(29,0.997679 );
  h_corr[3]->SetBinContent(31,0.994406 );
  h_corr[3]->SetBinContent(33,0.989568 );
  h_corr[3]->SetBinContent(35,0.983556 );

  h_corr[4]->SetBinContent(1,1.00595 );
  h_corr[4]->SetBinContent(3,0.999611 );
  h_corr[4]->SetBinContent(5,0.99888 );
  h_corr[4]->SetBinContent(7,0.999843 );
  h_corr[4]->SetBinContent(9,0.999623 );
  h_corr[4]->SetBinContent(11,0.998224 );
  h_corr[4]->SetBinContent(13,0.997826 );
  h_corr[4]->SetBinContent(15,0.996602 );
  h_corr[4]->SetBinContent(17,0.994449 );
  h_corr[4]->SetBinContent(19,0.992252 );
  h_corr[4]->SetBinContent(21,0.995449 );
  h_corr[4]->SetBinContent(23,0.991327 );
  h_corr[4]->SetBinContent(25,0.990583 );
  h_corr[4]->SetBinContent(27,0.98769 );
  h_corr[4]->SetBinContent(29,0.987119 );
  h_corr[4]->SetBinContent(31,0.987286 );
  h_corr[4]->SetBinContent(33,0.987579 );
  h_corr[4]->SetBinContent(35,0.968688 );

  h_corr[5]->SetBinContent(1,1.00595 );
  h_corr[5]->SetBinContent(3,0.99739 );
  h_corr[5]->SetBinContent(5,0.997487 );
  h_corr[5]->SetBinContent(7,0.996348 );
  h_corr[5]->SetBinContent(9,0.997236 );
  h_corr[5]->SetBinContent(11,0.995167 );
  h_corr[5]->SetBinContent(13,0.992415 );
  h_corr[5]->SetBinContent(15,0.99229 );
  h_corr[5]->SetBinContent(17,0.988555 );
  h_corr[5]->SetBinContent(19,0.985185 );
  h_corr[5]->SetBinContent(21,0.986755 );
  h_corr[5]->SetBinContent(23,0.981916 );
  h_corr[5]->SetBinContent(25,0.984353 );
  h_corr[5]->SetBinContent(27,0.987344 );
  h_corr[5]->SetBinContent(29,0.977296 );
  h_corr[5]->SetBinContent(31,0.975235 );
  h_corr[5]->SetBinContent(33,0.968882 );
  h_corr[5]->SetBinContent(35,0.953484 );

  h_corr[6]->SetBinContent(1,1.00595 );
  h_corr[6]->SetBinContent(3,0.996373 );
  h_corr[6]->SetBinContent(5,0.995653 );
  h_corr[6]->SetBinContent(7,0.995049 );
  h_corr[6]->SetBinContent(9,0.994475 );
  h_corr[6]->SetBinContent(11,0.99285 );
  h_corr[6]->SetBinContent(13,0.990995 );
  h_corr[6]->SetBinContent(15,0.988112 );
  h_corr[6]->SetBinContent(17,0.98574 );
  h_corr[6]->SetBinContent(19,0.985166 );
  h_corr[6]->SetBinContent(21,0.982725 );
  h_corr[6]->SetBinContent(23,0.981522 );
  h_corr[6]->SetBinContent(25,0.977867 );
  h_corr[6]->SetBinContent(27,0.979881 );
  h_corr[6]->SetBinContent(29,0.971924 );
  h_corr[6]->SetBinContent(31,0.969572 );
  h_corr[6]->SetBinContent(33,0.967122 );
  h_corr[6]->SetBinContent(35,0.953484 );

  h_corr[7]->SetBinContent(1,0.967753 );
  h_corr[7]->SetBinContent(3,0.972895 );
  h_corr[7]->SetBinContent(5,0.968416 );
  h_corr[7]->SetBinContent(7,0.968682 );
  h_corr[7]->SetBinContent(9,0.965395 );
  h_corr[7]->SetBinContent(11,0.963567 );
  h_corr[7]->SetBinContent(13,0.960552 );
  h_corr[7]->SetBinContent(15,0.962522 );
  h_corr[7]->SetBinContent(17,0.954442 );
  h_corr[7]->SetBinContent(19,0.952887 );
  h_corr[7]->SetBinContent(21,0.949482 );
  h_corr[7]->SetBinContent(23,0.946741 );
  h_corr[7]->SetBinContent(25,0.941983 );
  h_corr[7]->SetBinContent(27,0.942586 );
  h_corr[7]->SetBinContent(29,0.93876 );
  h_corr[7]->SetBinContent(31,0.935235 );
  h_corr[7]->SetBinContent(33,0.912835 );
  h_corr[7]->SetBinContent(35,0.864583 );

  h_corr[8]->SetBinContent(1,0.973884 );
  h_corr[8]->SetBinContent(3,0.974477 );
  h_corr[8]->SetBinContent(5,0.971171 );
  h_corr[8]->SetBinContent(7,0.967973 );
  h_corr[8]->SetBinContent(9,0.964971 );
  h_corr[8]->SetBinContent(11,0.960043 );
  h_corr[8]->SetBinContent(13,0.957878 );
  h_corr[8]->SetBinContent(15,0.950809 );
  h_corr[8]->SetBinContent(17,0.943121 );
  h_corr[8]->SetBinContent(19,0.950724 );
  h_corr[8]->SetBinContent(21,0.941333 );
  h_corr[8]->SetBinContent(23,0.932364 );
  h_corr[8]->SetBinContent(25,0.915954 );
  h_corr[8]->SetBinContent(27,0.918302 );
  h_corr[8]->SetBinContent(29,0.8951 );
  h_corr[8]->SetBinContent(31,0.91149 );
  h_corr[8]->SetBinContent(33,0.872187 );
  h_corr[8]->SetBinContent(35,0.831379 );

  h_corr[9]->SetBinContent(1,0.97671 );
  h_corr[9]->SetBinContent(3,0.972777 );
  h_corr[9]->SetBinContent(5,0.970276 );
  h_corr[9]->SetBinContent(7,0.965404 );
  h_corr[9]->SetBinContent(9,0.966876 );
  h_corr[9]->SetBinContent(11,0.964131 );
  h_corr[9]->SetBinContent(13,0.956918 );
  h_corr[9]->SetBinContent(15,0.953101 );
  h_corr[9]->SetBinContent(17,0.94421 );
  h_corr[9]->SetBinContent(19,0.930906 );
  h_corr[9]->SetBinContent(21,0.929761 );
  h_corr[9]->SetBinContent(23,0.903979 );
  h_corr[9]->SetBinContent(25,0.920334 );
  h_corr[9]->SetBinContent(27,1.01417 );
  h_corr[9]->SetBinContent(29,0.894637 );
  h_corr[9]->SetBinContent(31,0.894975 );
  h_corr[9]->SetBinContent(33,0.856302 );
  h_corr[9]->SetBinContent(35,0.831379 );

  h_corr[10]->SetBinContent(1,0.98359 );
  h_corr[10]->SetBinContent(3,0.975466 );
  h_corr[10]->SetBinContent(5,0.972969 );
  h_corr[10]->SetBinContent(7,0.972477 );
  h_corr[10]->SetBinContent(9,0.968093 );
  h_corr[10]->SetBinContent(11,0.96616 );
  h_corr[10]->SetBinContent(13,0.966183 );
  h_corr[10]->SetBinContent(15,0.953454 );
  h_corr[10]->SetBinContent(17,0.946406 );
  h_corr[10]->SetBinContent(19,0.927728 );
  h_corr[10]->SetBinContent(21,0.928867 );
  h_corr[10]->SetBinContent(23,0.920211 );
  h_corr[10]->SetBinContent(25,0.920334 );
  h_corr[10]->SetBinContent(27,1.01417 );
  h_corr[10]->SetBinContent(29,0.894637 );
  h_corr[10]->SetBinContent(31,0.894975 );
  h_corr[10]->SetBinContent(33,0.856302 );
  h_corr[10]->SetBinContent(35,0.831379 );

  h_corr[11]->SetBinContent(1,0.985848 );
  h_corr[11]->SetBinContent(3,0.974951 );
  h_corr[11]->SetBinContent(5,0.976566 );
  h_corr[11]->SetBinContent(7,0.97576 );
  h_corr[11]->SetBinContent(9,0.973389 );
  h_corr[11]->SetBinContent(11,0.972938 );
  h_corr[11]->SetBinContent(13,0.968847 );
  h_corr[11]->SetBinContent(15,0.950881 );
  h_corr[11]->SetBinContent(17,0.946406 );
  h_corr[11]->SetBinContent(19,0.927728 );
  h_corr[11]->SetBinContent(21,0.928867 );
  h_corr[11]->SetBinContent(23,0.920211 );
  h_corr[11]->SetBinContent(25,0.920334 );
  h_corr[11]->SetBinContent(27,1.01417 );
  h_corr[11]->SetBinContent(29,0.894637 );
  h_corr[11]->SetBinContent(31,0.894975 );
  h_corr[11]->SetBinContent(33,0.856302 );
  h_corr[11]->SetBinContent(35,0.831379 );

  h_corr[12]->SetBinContent(1,0.985848 );
  h_corr[12]->SetBinContent(3,0.974314 );
  h_corr[12]->SetBinContent(5,0.975589 );
  h_corr[12]->SetBinContent(7,0.976829 );
  h_corr[12]->SetBinContent(9,0.974103 );
  h_corr[12]->SetBinContent(11,0.967787 );
  h_corr[12]->SetBinContent(13,0.963539 );
  h_corr[12]->SetBinContent(15,0.950881 );
  h_corr[12]->SetBinContent(17,0.946406 );
  h_corr[12]->SetBinContent(19,0.927728 );
  h_corr[12]->SetBinContent(21,0.928867 );
  h_corr[12]->SetBinContent(23,0.920211 );
  h_corr[12]->SetBinContent(25,0.920334 );
  h_corr[12]->SetBinContent(27,1.01417 );
  h_corr[12]->SetBinContent(29,0.894637 );
  h_corr[12]->SetBinContent(31,0.894975 );
  h_corr[12]->SetBinContent(33,0.856302 );
  h_corr[12]->SetBinContent(35,0.831379 );

  h_corr[13]->SetBinContent(1,0.980381 );
  h_corr[13]->SetBinContent(3,0.974874 );
  h_corr[13]->SetBinContent(5,0.973392 );
  h_corr[13]->SetBinContent(7,0.970502 );
  h_corr[13]->SetBinContent(9,0.973016 );
  h_corr[13]->SetBinContent(11,0.975672 );
  h_corr[13]->SetBinContent(13,0.963539 );
  h_corr[13]->SetBinContent(15,0.950881 );
  h_corr[13]->SetBinContent(17,0.946406 );
  h_corr[13]->SetBinContent(19,0.927728 );
  h_corr[13]->SetBinContent(21,0.928867 );
  h_corr[13]->SetBinContent(23,0.920211 );
  h_corr[13]->SetBinContent(25,0.920334 );
  h_corr[13]->SetBinContent(27,1.01417 );
  h_corr[13]->SetBinContent(29,0.894637 );
  h_corr[13]->SetBinContent(31,0.894975 );
  h_corr[13]->SetBinContent(33,0.856302 );
  h_corr[13]->SetBinContent(35,0.831379 );

   Int_t tmpEta = -1;                                                                                             
   for (Int_t iEta = 0; iEta < nBinsEta; ++iEta){								       
     if ( leftEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <rightEta[iEta] ){				       
       tmpEta = iEta;											       
     }													       
   }													       
   													       
   Int_t tmpBr = -1;											       
   for (Int_t iSigmaPhiSigmaEta = 0; iSigmaPhiSigmaEta < nBinsBr; ++iSigmaPhiSigmaEta){			       
     if (leftBr [iSigmaPhiSigmaEta]  <= sigmaPhiSigmaEta && sigmaPhiSigmaEta <rightBr [iSigmaPhiSigmaEta] ){      
       tmpBr = iSigmaPhiSigmaEta;										       
     }													       
   }													       
   if (tmpEta == -1 || tmpBr == -1){									       
     for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];                                  		       
     return  1;												       
   }													       
   													       
   Double_t tmp = h_corr[tmpEta]->GetBinContent(2*tmpBr+1);				   		       
   for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];                                  		       
   return  tmp;                                                                                                   
}													   
                                                                         
Double_t applyScCorrectionsET_EB(Double_t ET){  							   
  const Int_t    nBinsET             = 13;             
  Double_t       leftET  [nBinsET];                    
  Double_t       rightET [nBinsET];                    
  Double_t       ETBins  [nBinsET*2];                  
  leftET[0] =  5 ; 
  leftET[1] =  10 ; 
  leftET[2] =  20 ; 
  leftET[3] =  30 ; 
  leftET[4] =  40 ; 
  leftET[5] =  50 ; 
  leftET[6] =  60 ; 
  leftET[7] =  80 ; 
  leftET[8] =  100 ; 
  leftET[9] =  120 ; 
  leftET[10] =  140 ; 
  leftET[11] =  160 ; 
  leftET[12] =  180 ; 
  rightET[0] =  10 ; 
  rightET[1] =  20 ; 
  rightET[2] =  30 ; 
  rightET[3] =  40 ; 
  rightET[4] =  50 ; 
  rightET[5] =  60 ; 
  rightET[6] =  80 ; 
  rightET[7] =  100 ; 
  rightET[8] =  120 ; 
  rightET[9] =  140 ; 
  rightET[10] =  160 ; 
  rightET[11] =  180 ; 
  rightET[12] =  200 ; 
  ETBins[0] =  5 ; 
  ETBins[1] =  10 ; 
  ETBins[2] =  10 ; 
  ETBins[3] =  20 ; 
  ETBins[4] =  20 ; 
  ETBins[5] =  30 ; 
  ETBins[6] =  30 ; 
  ETBins[7] =  40 ; 
  ETBins[8] =  40 ; 
  ETBins[9] =  50 ; 
  ETBins[10] =  50 ; 
  ETBins[11] =  60 ; 
  ETBins[12] =  60 ; 
  ETBins[13] =  80 ; 
  ETBins[14] =  80 ; 
  ETBins[15] =  100 ; 
  ETBins[16] =  100 ; 
  ETBins[17] =  120 ; 
  ETBins[18] =  120 ; 
  ETBins[19] =  140 ; 
  ETBins[20] =  140 ; 
  ETBins[21] =  160 ; 
  ETBins[22] =  160 ; 
  ETBins[23] =  180 ; 
  ETBins[24] =  180 ; 
  ETBins[25] =  200 ; 
  TH1F *h_CBET_EB    = new TH1F("h_CBET_EB"    ,"h_CBET_EB"    ,nBinsET*2-1, ETBins); 
  h_CBET_EB->SetBinContent(1, 0.995242); 
  h_CBET_EB->SetBinContent(3, 1.00323); 
  h_CBET_EB->SetBinContent(5, 1.00103); 
  h_CBET_EB->SetBinContent(7, 1.0007); 
  h_CBET_EB->SetBinContent(9, 1.00113); 
  h_CBET_EB->SetBinContent(11, 1.00058); 
  h_CBET_EB->SetBinContent(13, 1.0004); 
  h_CBET_EB->SetBinContent(15, 1.00021); 
  h_CBET_EB->SetBinContent(17, 0.999826); 
  h_CBET_EB->SetBinContent(19, 1.00008); 
  h_CBET_EB->SetBinContent(21, 0.999749); 
  h_CBET_EB->SetBinContent(23, 0.999684); 
  h_CBET_EB->SetBinContent(25, 0.999763); 
  Int_t iET      = -1;                                                                   
  for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
    if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
      iET  = iiET;  								      
    }										      
  }										      
  if (iET == -1) {delete  h_CBET_EB; return 1;}					      
											      
  Int_t binET =  2*iET+1 ; // h_CBET_EB->FindBin(ET);                                    
  Double_t tmp = h_CBET_EB->GetBinContent(binET);                                        
  delete h_CBET_EB;                                                             	      
  if ( 0< binET && binET < 2*nBinsET+1) return tmp;                          	      
  else return 1.;                                                               	      
                                                                                         
}                                                                               
                                                                                  
                                                                         
Double_t applyScCorrectionsET_EE(Double_t ET){  							   
  const Int_t    nBinsET             = 13;             
  Double_t       leftET  [nBinsET];                    
  Double_t       rightET [nBinsET];                    
  Double_t       ETBins  [nBinsET*2];                  
  leftET[0] =  5 ; 
  leftET[1] =  10 ; 
  leftET[2] =  20 ; 
  leftET[3] =  30 ; 
  leftET[4] =  40 ; 
  leftET[5] =  50 ; 
  leftET[6] =  60 ; 
  leftET[7] =  80 ; 
  leftET[8] =  100 ; 
  leftET[9] =  120 ; 
  leftET[10] =  140 ; 
  leftET[11] =  160 ; 
  leftET[12] =  180 ; 
  rightET[0] =  10 ; 
  rightET[1] =  20 ; 
  rightET[2] =  30 ; 
  rightET[3] =  40 ; 
  rightET[4] =  50 ; 
  rightET[5] =  60 ; 
  rightET[6] =  80 ; 
  rightET[7] =  100 ; 
  rightET[8] =  120 ; 
  rightET[9] =  140 ; 
  rightET[10] =  160 ; 
  rightET[11] =  180 ; 
  rightET[12] =  200 ; 
  ETBins[0] =  5 ; 
  ETBins[1] =  10 ; 
  ETBins[2] =  10 ; 
  ETBins[3] =  20 ; 
  ETBins[4] =  20 ; 
  ETBins[5] =  30 ; 
  ETBins[6] =  30 ; 
  ETBins[7] =  40 ; 
  ETBins[8] =  40 ; 
  ETBins[9] =  50 ; 
  ETBins[10] =  50 ; 
  ETBins[11] =  60 ; 
  ETBins[12] =  60 ; 
  ETBins[13] =  80 ; 
  ETBins[14] =  80 ; 
  ETBins[15] =  100 ; 
  ETBins[16] =  100 ; 
  ETBins[17] =  120 ; 
  ETBins[18] =  120 ; 
  ETBins[19] =  140 ; 
  ETBins[20] =  140 ; 
  ETBins[21] =  160 ; 
  ETBins[22] =  160 ; 
  ETBins[23] =  180 ; 
  ETBins[24] =  180 ; 
  ETBins[25] =  200 ; 
  TH1F *h_CBET_EE    = new TH1F("h_CBET_EE"    ,"h_CBET_EE"    ,nBinsET*2-1, ETBins); 
  h_CBET_EE->SetBinContent(1, 0.963657); 
  h_CBET_EE->SetBinContent(3, 0.997299); 
  h_CBET_EE->SetBinContent(5, 0.996249); 
  h_CBET_EE->SetBinContent(7, 0.995575); 
  h_CBET_EE->SetBinContent(9, 0.995707); 
  h_CBET_EE->SetBinContent(11, 0.996382); 
  h_CBET_EE->SetBinContent(13, 0.997129); 
  h_CBET_EE->SetBinContent(15, 0.998241); 
  h_CBET_EE->SetBinContent(17, 0.999317); 
  h_CBET_EE->SetBinContent(19, 1.00034); 
  h_CBET_EE->SetBinContent(21, 1.00081); 
  h_CBET_EE->SetBinContent(23, 1.00124); 
  h_CBET_EE->SetBinContent(25, 1.00221); 
  Int_t iET      = -1;                                                                   
  for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
    if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
      iET  = iiET;  								      
    }										      
  }										      
  if (iET == -1) {delete  h_CBET_EE; return 1;}					      
											      
  Int_t binET =  2*iET+1 ; // h_CBET_EE->FindBin(ET);                                    
  Double_t tmp = h_CBET_EE->GetBinContent(binET);                                        
  delete h_CBET_EE;                                                             	      
  if ( 0< binET && binET < 2*nBinsET+1) return tmp;                          	      
  else return 1.;                                                               	      
                                                                                         
}                                                                               
                                                                                  
#endif                                                 
