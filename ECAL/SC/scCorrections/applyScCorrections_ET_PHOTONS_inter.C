#ifndef scCorrectionsBrETAET_h                                              
#define scCorrectionsBrETAET_h                                              
#include "TFile.h"                                                      
#include "TH1F.h"				                       
#include <iostream>

bool DBG = false;
  	                                                               
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
  h_corr[0]->SetBinContent(1,1.00477 );
  h_corr[0]->SetBinContent(3,1.0005 );
  h_corr[0]->SetBinContent(5,1.00293 );
  h_corr[0]->SetBinContent(7,1.0046 );
  h_corr[0]->SetBinContent(9,1.00419 );
  h_corr[0]->SetBinContent(11,1.00477 );
  h_corr[0]->SetBinContent(13,1.00384 );
  h_corr[0]->SetBinContent(15,1.00448 );
  h_corr[0]->SetBinContent(17,1.00402 );
  h_corr[0]->SetBinContent(19,1.0051 );
  h_corr[0]->SetBinContent(21,1.00306 );
  h_corr[0]->SetBinContent(23,1.00324 );
  h_corr[0]->SetBinContent(25,1.00344 );
  h_corr[0]->SetBinContent(27,1.00536 );
  h_corr[0]->SetBinContent(29,1.0025 );
  h_corr[0]->SetBinContent(31,1.0021 );
  h_corr[0]->SetBinContent(33,1.00103 );
  h_corr[0]->SetBinContent(35,0.99688 );

  h_corr[1]->SetBinContent(1,1.00684 );
  h_corr[1]->SetBinContent(3,1.00073 );
  h_corr[1]->SetBinContent(5,1.00374 );
  h_corr[1]->SetBinContent(7,1.00425 );
  h_corr[1]->SetBinContent(9,1.0046 );
  h_corr[1]->SetBinContent(11,1.0038 );
  h_corr[1]->SetBinContent(13,1.00412 );
  h_corr[1]->SetBinContent(15,1.00263 );
  h_corr[1]->SetBinContent(17,1.00319 );
  h_corr[1]->SetBinContent(19,1.00138 );
  h_corr[1]->SetBinContent(21,1.00185 );
  h_corr[1]->SetBinContent(23,1.0011 );
  h_corr[1]->SetBinContent(25,0.999708 );
  h_corr[1]->SetBinContent(27,1.00156 );
  h_corr[1]->SetBinContent(29,1.00507 );
  h_corr[1]->SetBinContent(31,1.00024 );
  h_corr[1]->SetBinContent(33,0.999653 );
  h_corr[1]->SetBinContent(35,0.996048 );

  h_corr[2]->SetBinContent(1,1.00365 );
  h_corr[2]->SetBinContent(3,1.00016 );
  h_corr[2]->SetBinContent(5,1.00223 );
  h_corr[2]->SetBinContent(7,1.00357 );
  h_corr[2]->SetBinContent(9,1.00321 );
  h_corr[2]->SetBinContent(11,1.0029 );
  h_corr[2]->SetBinContent(13,1.0028 );
  h_corr[2]->SetBinContent(15,1.00168 );
  h_corr[2]->SetBinContent(17,1.00192 );
  h_corr[2]->SetBinContent(19,1.00164 );
  h_corr[2]->SetBinContent(21,1.00057 );
  h_corr[2]->SetBinContent(23,1.00231 );
  h_corr[2]->SetBinContent(25,0.99915 );
  h_corr[2]->SetBinContent(27,1.00004 );
  h_corr[2]->SetBinContent(29,0.999525 );
  h_corr[2]->SetBinContent(31,0.998512 );
  h_corr[2]->SetBinContent(33,0.997322 );
  h_corr[2]->SetBinContent(35,0.994791 );

  h_corr[3]->SetBinContent(1,1.00365 );
  h_corr[3]->SetBinContent(3,1.00091 );
  h_corr[3]->SetBinContent(5,1.00165 );
  h_corr[3]->SetBinContent(7,1.00144 );
  h_corr[3]->SetBinContent(9,1.00161 );
  h_corr[3]->SetBinContent(11,1.00033 );
  h_corr[3]->SetBinContent(13,0.998908 );
  h_corr[3]->SetBinContent(15,0.998933 );
  h_corr[3]->SetBinContent(17,0.998971 );
  h_corr[3]->SetBinContent(19,0.996114 );
  h_corr[3]->SetBinContent(21,0.998552 );
  h_corr[3]->SetBinContent(23,0.997014 );
  h_corr[3]->SetBinContent(25,0.996017 );
  h_corr[3]->SetBinContent(27,0.994346 );
  h_corr[3]->SetBinContent(29,0.997474 );
  h_corr[3]->SetBinContent(31,0.994367 );
  h_corr[3]->SetBinContent(33,0.989633 );
  h_corr[3]->SetBinContent(35,0.983556 );

  h_corr[4]->SetBinContent(1,1.00365 );
  h_corr[4]->SetBinContent(3,0.999573 );
  h_corr[4]->SetBinContent(5,0.999298 );
  h_corr[4]->SetBinContent(7,0.999856 );
  h_corr[4]->SetBinContent(9,0.999745 );
  h_corr[4]->SetBinContent(11,0.998014 );
  h_corr[4]->SetBinContent(13,0.998564 );
  h_corr[4]->SetBinContent(15,0.996768 );
  h_corr[4]->SetBinContent(17,0.995129 );
  h_corr[4]->SetBinContent(19,0.992972 );
  h_corr[4]->SetBinContent(21,0.99556 );
  h_corr[4]->SetBinContent(23,0.992829 );
  h_corr[4]->SetBinContent(25,0.990584 );
  h_corr[4]->SetBinContent(27,0.988897 );
  h_corr[4]->SetBinContent(29,0.987413 );
  h_corr[4]->SetBinContent(31,0.986436 );
  h_corr[4]->SetBinContent(33,0.987777 );
  h_corr[4]->SetBinContent(35,0.968688 );

  h_corr[5]->SetBinContent(1,1.00365 );
  h_corr[5]->SetBinContent(3,0.997488 );
  h_corr[5]->SetBinContent(5,0.997056 );
  h_corr[5]->SetBinContent(7,0.996287 );
  h_corr[5]->SetBinContent(9,0.997043 );
  h_corr[5]->SetBinContent(11,0.995985 );
  h_corr[5]->SetBinContent(13,0.993078 );
  h_corr[5]->SetBinContent(15,0.992365 );
  h_corr[5]->SetBinContent(17,0.98878 );
  h_corr[5]->SetBinContent(19,0.985867 );
  h_corr[5]->SetBinContent(21,0.988083 );
  h_corr[5]->SetBinContent(23,0.982983 );
  h_corr[5]->SetBinContent(25,0.984689 );
  h_corr[5]->SetBinContent(27,0.986268 );
  h_corr[5]->SetBinContent(29,0.977702 );
  h_corr[5]->SetBinContent(31,0.976403 );
  h_corr[5]->SetBinContent(33,0.970385 );
  h_corr[5]->SetBinContent(35,0.95356 );

  h_corr[6]->SetBinContent(1,1.00365 );
  h_corr[6]->SetBinContent(3,0.996276 );
  h_corr[6]->SetBinContent(5,0.995901 );
  h_corr[6]->SetBinContent(7,0.995306 );
  h_corr[6]->SetBinContent(9,0.994644 );
  h_corr[6]->SetBinContent(11,0.993144 );
  h_corr[6]->SetBinContent(13,0.991161 );
  h_corr[6]->SetBinContent(15,0.988541 );
  h_corr[6]->SetBinContent(17,0.986377 );
  h_corr[6]->SetBinContent(19,0.985698 );
  h_corr[6]->SetBinContent(21,0.983213 );
  h_corr[6]->SetBinContent(23,0.982471 );
  h_corr[6]->SetBinContent(25,0.978945 );
  h_corr[6]->SetBinContent(27,0.979868 );
  h_corr[6]->SetBinContent(29,0.973695 );
  h_corr[6]->SetBinContent(31,0.971409 );
  h_corr[6]->SetBinContent(33,0.967811 );
  h_corr[6]->SetBinContent(35,0.95356 );

  h_corr[7]->SetBinContent(1,0.966757 );
  h_corr[7]->SetBinContent(3,0.973499 );
  h_corr[7]->SetBinContent(5,0.969414 );
  h_corr[7]->SetBinContent(7,0.969698 );
  h_corr[7]->SetBinContent(9,0.96632 );
  h_corr[7]->SetBinContent(11,0.965057 );
  h_corr[7]->SetBinContent(13,0.962489 );
  h_corr[7]->SetBinContent(15,0.962289 );
  h_corr[7]->SetBinContent(17,0.95726 );
  h_corr[7]->SetBinContent(19,0.95717 );
  h_corr[7]->SetBinContent(21,0.950804 );
  h_corr[7]->SetBinContent(23,0.946758 );
  h_corr[7]->SetBinContent(25,0.943674 );
  h_corr[7]->SetBinContent(27,0.942974 );
  h_corr[7]->SetBinContent(29,0.939583 );
  h_corr[7]->SetBinContent(31,0.936795 );
  h_corr[7]->SetBinContent(33,0.91318 );
  h_corr[7]->SetBinContent(35,0.864583 );

  h_corr[8]->SetBinContent(1,0.973319 );
  h_corr[8]->SetBinContent(3,0.974327 );
  h_corr[8]->SetBinContent(5,0.97135 );
  h_corr[8]->SetBinContent(7,0.969466 );
  h_corr[8]->SetBinContent(9,0.96644 );
  h_corr[8]->SetBinContent(11,0.96251 );
  h_corr[8]->SetBinContent(13,0.960385 );
  h_corr[8]->SetBinContent(15,0.954011 );
  h_corr[8]->SetBinContent(17,0.945243 );
  h_corr[8]->SetBinContent(19,0.95272 );
  h_corr[8]->SetBinContent(21,0.942462 );
  h_corr[8]->SetBinContent(23,0.933115 );
  h_corr[8]->SetBinContent(25,0.91591 );
  h_corr[8]->SetBinContent(27,0.919095 );
  h_corr[8]->SetBinContent(29,0.8951 );
  h_corr[8]->SetBinContent(31,0.91149 );
  h_corr[8]->SetBinContent(33,0.872187 );
  h_corr[8]->SetBinContent(35,0.831379 );

  h_corr[9]->SetBinContent(1,0.97587 );
  h_corr[9]->SetBinContent(3,0.972743 );
  h_corr[9]->SetBinContent(5,0.971705 );
  h_corr[9]->SetBinContent(7,0.968167 );
  h_corr[9]->SetBinContent(9,0.968744 );
  h_corr[9]->SetBinContent(11,0.96537 );
  h_corr[9]->SetBinContent(13,0.958599 );
  h_corr[9]->SetBinContent(15,0.954942 );
  h_corr[9]->SetBinContent(17,0.946286 );
  h_corr[9]->SetBinContent(19,0.931168 );
  h_corr[9]->SetBinContent(21,0.929851 );
  h_corr[9]->SetBinContent(23,0.904241 );
  h_corr[9]->SetBinContent(25,0.920334 );
  h_corr[9]->SetBinContent(27,1.01417 );
  h_corr[9]->SetBinContent(29,0.894637 );
  h_corr[9]->SetBinContent(31,0.894975 );
  h_corr[9]->SetBinContent(33,0.856302 );
  h_corr[9]->SetBinContent(35,0.831379 );

  h_corr[10]->SetBinContent(1,0.980946 );
  h_corr[10]->SetBinContent(3,0.975896 );
  h_corr[10]->SetBinContent(5,0.97371 );
  h_corr[10]->SetBinContent(7,0.973454 );
  h_corr[10]->SetBinContent(9,0.971114 );
  h_corr[10]->SetBinContent(11,0.967695 );
  h_corr[10]->SetBinContent(13,0.965971 );
  h_corr[10]->SetBinContent(15,0.953794 );
  h_corr[10]->SetBinContent(17,0.95019 );
  h_corr[10]->SetBinContent(19,0.927728 );
  h_corr[10]->SetBinContent(21,0.928867 );
  h_corr[10]->SetBinContent(23,0.920211 );
  h_corr[10]->SetBinContent(25,0.920334 );
  h_corr[10]->SetBinContent(27,1.01417 );
  h_corr[10]->SetBinContent(29,0.894637 );
  h_corr[10]->SetBinContent(31,0.894975 );
  h_corr[10]->SetBinContent(33,0.856302 );
  h_corr[10]->SetBinContent(35,0.831379 );

  h_corr[11]->SetBinContent(1,0.985509 );
  h_corr[11]->SetBinContent(3,0.975446 );
  h_corr[11]->SetBinContent(5,0.976873 );
  h_corr[11]->SetBinContent(7,0.975401 );
  h_corr[11]->SetBinContent(9,0.974248 );
  h_corr[11]->SetBinContent(11,0.972033 );
  h_corr[11]->SetBinContent(13,0.968997 );
  h_corr[11]->SetBinContent(15,0.950584 );
  h_corr[11]->SetBinContent(17,0.95019 );
  h_corr[11]->SetBinContent(19,0.927728 );
  h_corr[11]->SetBinContent(21,0.928867 );
  h_corr[11]->SetBinContent(23,0.920211 );
  h_corr[11]->SetBinContent(25,0.920334 );
  h_corr[11]->SetBinContent(27,1.01417 );
  h_corr[11]->SetBinContent(29,0.894637 );
  h_corr[11]->SetBinContent(31,0.894975 );
  h_corr[11]->SetBinContent(33,0.856302 );
  h_corr[11]->SetBinContent(35,0.831379 );

  h_corr[12]->SetBinContent(1,0.985509 );
  h_corr[12]->SetBinContent(3,0.974643 );
  h_corr[12]->SetBinContent(5,0.975387 );
  h_corr[12]->SetBinContent(7,0.977001 );
  h_corr[12]->SetBinContent(9,0.974089 );
  h_corr[12]->SetBinContent(11,0.967086 );
  h_corr[12]->SetBinContent(13,0.964069 );
  h_corr[12]->SetBinContent(15,0.950584 );
  h_corr[12]->SetBinContent(17,0.95019 );
  h_corr[12]->SetBinContent(19,0.927728 );
  h_corr[12]->SetBinContent(21,0.928867 );
  h_corr[12]->SetBinContent(23,0.920211 );
  h_corr[12]->SetBinContent(25,0.920334 );
  h_corr[12]->SetBinContent(27,1.01417 );
  h_corr[12]->SetBinContent(29,0.894637 );
  h_corr[12]->SetBinContent(31,0.894975 );
  h_corr[12]->SetBinContent(33,0.856302 );
  h_corr[12]->SetBinContent(35,0.831379 );

  h_corr[13]->SetBinContent(1,0.979224 );
  h_corr[13]->SetBinContent(3,0.975708 );
  h_corr[13]->SetBinContent(5,0.973844 );
  h_corr[13]->SetBinContent(7,0.971448 );
  h_corr[13]->SetBinContent(9,0.975281 );
  h_corr[13]->SetBinContent(11,0.976356 );
  h_corr[13]->SetBinContent(13,0.964069 );
  h_corr[13]->SetBinContent(15,0.950584 );
  h_corr[13]->SetBinContent(17,0.95019 );
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
  Int_t tmpBr  = -1;	

  // Extra protections										       
   
  if (TMath::Abs(eta)  <   leftEta[0]           ) { tmpEta = 0;          if (DBG) std::cout << " WARNING [applyScCorrections]: (TMath::Abs(eta)  <   leftEta[0]          " << std::endl;}
  if (TMath::Abs(eta)  >=  rightEta[nBinsEta-1] ) { tmpEta = nBinsEta-1; if (DBG) std::cout << " WARNING [applyScCorrections]: TMath::Abs(eta)  >=  rightEta[nBinsEta-1] " << std::endl;}

  if (sigmaPhiSigmaEta <  leftBr [0]            ) {tmpBr = 0;            if (DBG) std::cout << " WARNING [applyScCorrections]: sigmaPhiSigmaEta <  leftBr [0]            " << std::endl;}
  if (sigmaPhiSigmaEta >= rightBr[nBinsBr]      ) {tmpBr = nBinsBr  -1;  if (DBG) std::cout << " WARNING [applyScCorrections]: sigmaPhiSigmaEta >= rightBr[nBinsBr]      " << std::endl;}
  
  for (Int_t iEta = 0; iEta < nBinsEta; ++iEta){								       
    if ( leftEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <rightEta[iEta] ){				       
      tmpEta = iEta;											       
    }													       
  }													         

  for (Int_t iSigmaPhiSigmaEta = 0; iSigmaPhiSigmaEta < nBinsBr; ++iSigmaPhiSigmaEta){			       
    if (leftBr [iSigmaPhiSigmaEta]  <= sigmaPhiSigmaEta && sigmaPhiSigmaEta <rightBr [iSigmaPhiSigmaEta] ){      
      tmpBr = iSigmaPhiSigmaEta;										       
    }													       
  }													       
  
  // Interpolation
  Double_t tmpInter = 1;
  // In eta cracks/gaps 
  if (tmpEta == -1 && tmpBr != -1 ) { // need to interpolate only eta, if br is out of range skip this
    
    if (TMath::Abs(eta) >=rightEta[nBinsEta-1] ) { // out of ECAL boundary
      for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];    
      return 1; // don't correct
    }
    
    // central bin at eta = 0
    if (0 <= TMath::Abs(eta) && TMath::Abs(eta) <leftEta[0] ) {
      
      tmpInter = h_corr[0]->GetBinContent(2*tmpBr+1);
      
    }
    else { // all other crack-bins
      
      for (Int_t iEta = 0; iEta < nBinsEta-1; ++iEta){								       
	if (rightEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <leftEta[iEta+1] ){
	  tmpInter = ( h_corr[iEta]  ->GetBinContent(2*tmpBr+1) + 
		       h_corr[iEta+1]->GetBinContent(2*tmpBr+1) ) / 2. ;
	}
      }
    }
    for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];    
    return tmpInter;
  }  
  // end interpolation
  
  if (tmpEta == -1 || tmpBr == -1){									       
    for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];                                  		       
    return  1; // don't correct												       
  }													       
  
  Double_t tmp = h_corr[tmpEta]->GetBinContent(2*tmpBr+1);				   		       
  for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];                                  		       
   return  tmp;                                                                                                   
}													   

Double_t applyScCorrectionsET_EB(Double_t ET){  							   
  const Int_t    nBinsET             = 14;             
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
  leftET[13] =  200 ; 
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
  rightET[13] =  250 ; 
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
  ETBins[26] =  200 ; 
  ETBins[27] =  250 ; 
  TH1F *h_CBET_EB    = new TH1F("h_CBET_EB"    ,"h_CBET_EB"    ,nBinsET*2-1, ETBins); 
  h_CBET_EB->SetBinContent(1, 0.996172); 
  h_CBET_EB->SetBinContent(3, 1.00346); 
  h_CBET_EB->SetBinContent(5, 1.00096); 
  h_CBET_EB->SetBinContent(7, 1.00067); 
  h_CBET_EB->SetBinContent(9, 1.00105); 
  h_CBET_EB->SetBinContent(11, 1.00053); 
  h_CBET_EB->SetBinContent(13, 1.00052); 
  h_CBET_EB->SetBinContent(15, 1.00023); 
  h_CBET_EB->SetBinContent(17, 0.999966); 
  h_CBET_EB->SetBinContent(19, 1.00009); 
  h_CBET_EB->SetBinContent(21, 0.999689); 
  h_CBET_EB->SetBinContent(23, 0.999704); 
  h_CBET_EB->SetBinContent(25, 0.999898); 
  h_CBET_EB->SetBinContent(27, 0.999869); 

  Int_t iET      = -1;                      
//   for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
//     if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
//       iET  = iiET;  								      
//     }										      
//   }										      
//   if (iET == -1) {delete  h_CBET_EB; return 1;}					      
				
  // Extra protections										       
  if (ET < leftET  [0] )         { iET = 0;              if (DBG) std::cout << " WARNING [applyScCorrections]: ET < leftET  [0] )       " << std::endl;}
  if (ET > rightET [nBinsET-1] ) { iET = nBinsET-1;      if (DBG) std::cout << " WARNING [applyScCorrections]: ET > rightET [nBinsET-1] " << std::endl;}
  
  Int_t binET =  2*iET+1 ; // h_CBET_EB->FindBin(ET);                                    
  Double_t tmp = h_CBET_EB->GetBinContent(binET);                                        
  delete h_CBET_EB;                                                             	      
  if ( 0< binET && binET < 2*nBinsET+1) return tmp;                          	      
  else return 1.;                                                               	      
                                                                                         
}                                                                               
                                                                                  
                                                                         
Double_t applyScCorrectionsET_EE(Double_t ET){  							   
  const Int_t    nBinsET             = 14;             
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
  leftET[13] =  200 ; 
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
  rightET[13] =  250 ; 
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
  ETBins[26] =  200 ; 
  ETBins[27] =  250 ; 
  TH1F *h_CBET_EE    = new TH1F("h_CBET_EE"    ,"h_CBET_EE"    ,nBinsET*2-1, ETBins); 
  h_CBET_EE->SetBinContent(1, 0.962984); 
  h_CBET_EE->SetBinContent(3, 0.998347); 
  h_CBET_EE->SetBinContent(5, 0.995259); 
  h_CBET_EE->SetBinContent(7, 0.994463); 
  h_CBET_EE->SetBinContent(9, 0.994789); 
  h_CBET_EE->SetBinContent(11, 0.995445); 
  h_CBET_EE->SetBinContent(13, 0.996237); 
  h_CBET_EE->SetBinContent(15, 0.997266); 
  h_CBET_EE->SetBinContent(17, 0.998239); 
  h_CBET_EE->SetBinContent(19, 0.999248); 
  h_CBET_EE->SetBinContent(21, 0.999833); 
  h_CBET_EE->SetBinContent(23, 1.0003); 
  h_CBET_EE->SetBinContent(25, 1.00502); 
  h_CBET_EE->SetBinContent(27, 1.00295); 

  Int_t iET      = -1;                                                                   
//   for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
//     if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
//       iET  = iiET;  								      
//     }										      
//   }										      
//   if (iET == -1) {delete  h_CBET_EE; return 1;}					      

  // Extra protections										       
  if (ET < leftET  [0] )         { iET = 0;             if (DBG) std::cout << " WARNING [applyScCorrections]: ET < leftET  [0] )       " << std::endl;}
  if (ET > rightET [nBinsET-1] ) { iET = nBinsET-1; 	if (DBG) std::cout << " WARNING [applyScCorrections]: ET > rightET [nBinsET-1] " << std::endl;}
  
  Int_t binET =  2*iET+1 ; // h_CBET_EE->FindBin(ET);                                    
  Double_t tmp = h_CBET_EE->GetBinContent(binET);                                        
  delete h_CBET_EE;                                                             	      
  if ( 0< binET && binET < 2*nBinsET+1) return tmp;                          	      
  else return 1.;                                                               	      
                                                                                         
}                                                                               
                                                                                  
#endif                                                 
