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
  h_corr[0]->SetBinContent(1,1.00171 );
  h_corr[0]->SetBinContent(3,1.00282 );
  h_corr[0]->SetBinContent(5,1.00474 );
  h_corr[0]->SetBinContent(7,1.00447 );
  h_corr[0]->SetBinContent(9,1.00369 );
  h_corr[0]->SetBinContent(11,1.00326 );
  h_corr[0]->SetBinContent(13,1.00295 );
  h_corr[0]->SetBinContent(15,1.00365 );
  h_corr[0]->SetBinContent(17,1.00274 );
  h_corr[0]->SetBinContent(19,1.00135 );
  h_corr[0]->SetBinContent(21,1.00114 );
  h_corr[0]->SetBinContent(23,1.00241 );
  h_corr[0]->SetBinContent(25,0.99946 );
  h_corr[0]->SetBinContent(27,1.00054 );
  h_corr[0]->SetBinContent(29,1.00221 );
  h_corr[0]->SetBinContent(31,0.997337 );
  h_corr[0]->SetBinContent(33,1.00081 );
  h_corr[0]->SetBinContent(35,0.998511 );

  h_corr[1]->SetBinContent(1,1.00259 );
  h_corr[1]->SetBinContent(3,1.00246 );
  h_corr[1]->SetBinContent(5,1.00432 );
  h_corr[1]->SetBinContent(7,1.00388 );
  h_corr[1]->SetBinContent(9,1.00331 );
  h_corr[1]->SetBinContent(11,1.00232 );
  h_corr[1]->SetBinContent(13,1.00157 );
  h_corr[1]->SetBinContent(15,1.00109 );
  h_corr[1]->SetBinContent(17,1.00063 );
  h_corr[1]->SetBinContent(19,1.00029 );
  h_corr[1]->SetBinContent(21,0.999058 );
  h_corr[1]->SetBinContent(23,1.0016 );
  h_corr[1]->SetBinContent(25,0.99891 );
  h_corr[1]->SetBinContent(27,1.0033 );
  h_corr[1]->SetBinContent(29,1.00147 );
  h_corr[1]->SetBinContent(31,1.00119 );
  h_corr[1]->SetBinContent(33,0.996805 );
  h_corr[1]->SetBinContent(35,0.989029 );

  h_corr[2]->SetBinContent(1,1.00221 );
  h_corr[2]->SetBinContent(3,1.00229 );
  h_corr[2]->SetBinContent(5,1.00309 );
  h_corr[2]->SetBinContent(7,1.00265 );
  h_corr[2]->SetBinContent(9,1.00189 );
  h_corr[2]->SetBinContent(11,1.00089 );
  h_corr[2]->SetBinContent(13,1.00034 );
  h_corr[2]->SetBinContent(15,1.00066 );
  h_corr[2]->SetBinContent(17,0.999278 );
  h_corr[2]->SetBinContent(19,1.0001 );
  h_corr[2]->SetBinContent(21,0.999329 );
  h_corr[2]->SetBinContent(23,0.997319 );
  h_corr[2]->SetBinContent(25,0.998792 );
  h_corr[2]->SetBinContent(27,0.996925 );
  h_corr[2]->SetBinContent(29,0.997826 );
  h_corr[2]->SetBinContent(31,0.998531 );
  h_corr[2]->SetBinContent(33,0.995165 );
  h_corr[2]->SetBinContent(35,0.98848 );

  h_corr[3]->SetBinContent(1,1.00203 );
  h_corr[3]->SetBinContent(3,1.00115 );
  h_corr[3]->SetBinContent(5,1.00185 );
  h_corr[3]->SetBinContent(7,1.00102 );
  h_corr[3]->SetBinContent(9,1.00008 );
  h_corr[3]->SetBinContent(11,0.999561 );
  h_corr[3]->SetBinContent(13,0.999492 );
  h_corr[3]->SetBinContent(15,0.997963 );
  h_corr[3]->SetBinContent(17,0.997058 );
  h_corr[3]->SetBinContent(19,0.995378 );
  h_corr[3]->SetBinContent(21,0.997621 );
  h_corr[3]->SetBinContent(23,0.992207 );
  h_corr[3]->SetBinContent(25,0.992355 );
  h_corr[3]->SetBinContent(27,0.992452 );
  h_corr[3]->SetBinContent(29,0.991789 );
  h_corr[3]->SetBinContent(31,0.989244 );
  h_corr[3]->SetBinContent(33,0.9864 );
  h_corr[3]->SetBinContent(35,0.985444 );

  h_corr[4]->SetBinContent(1,0.9994 );
  h_corr[4]->SetBinContent(3,0.999551 );
  h_corr[4]->SetBinContent(5,0.999583 );
  h_corr[4]->SetBinContent(7,0.998771 );
  h_corr[4]->SetBinContent(9,0.997534 );
  h_corr[4]->SetBinContent(11,0.995669 );
  h_corr[4]->SetBinContent(13,0.995715 );
  h_corr[4]->SetBinContent(15,0.994081 );
  h_corr[4]->SetBinContent(17,0.992437 );
  h_corr[4]->SetBinContent(19,0.993539 );
  h_corr[4]->SetBinContent(21,0.991507 );
  h_corr[4]->SetBinContent(23,0.989916 );
  h_corr[4]->SetBinContent(25,0.990223 );
  h_corr[4]->SetBinContent(27,0.98634 );
  h_corr[4]->SetBinContent(29,0.988124 );
  h_corr[4]->SetBinContent(31,0.985505 );
  h_corr[4]->SetBinContent(33,0.980063 );
  h_corr[4]->SetBinContent(35,0.97569 );

  h_corr[5]->SetBinContent(1,0.99694 );
  h_corr[5]->SetBinContent(3,0.997466 );
  h_corr[5]->SetBinContent(5,0.997395 );
  h_corr[5]->SetBinContent(7,0.995592 );
  h_corr[5]->SetBinContent(9,0.992997 );
  h_corr[5]->SetBinContent(11,0.991602 );
  h_corr[5]->SetBinContent(13,0.990837 );
  h_corr[5]->SetBinContent(15,0.989606 );
  h_corr[5]->SetBinContent(17,0.987878 );
  h_corr[5]->SetBinContent(19,0.985209 );
  h_corr[5]->SetBinContent(21,0.985906 );
  h_corr[5]->SetBinContent(23,0.982075 );
  h_corr[5]->SetBinContent(25,0.982573 );
  h_corr[5]->SetBinContent(27,0.978518 );
  h_corr[5]->SetBinContent(29,0.975877 );
  h_corr[5]->SetBinContent(31,0.974875 );
  h_corr[5]->SetBinContent(33,0.970736 );
  h_corr[5]->SetBinContent(35,0.948701 );

  h_corr[6]->SetBinContent(1,0.993696 );
  h_corr[6]->SetBinContent(3,0.994076 );
  h_corr[6]->SetBinContent(5,0.993786 );
  h_corr[6]->SetBinContent(7,0.991581 );
  h_corr[6]->SetBinContent(9,0.98873 );
  h_corr[6]->SetBinContent(11,0.988462 );
  h_corr[6]->SetBinContent(13,0.98682 );
  h_corr[6]->SetBinContent(15,0.984906 );
  h_corr[6]->SetBinContent(17,0.982758 );
  h_corr[6]->SetBinContent(19,0.981574 );
  h_corr[6]->SetBinContent(21,0.979194 );
  h_corr[6]->SetBinContent(23,0.977043 );
  h_corr[6]->SetBinContent(25,0.976329 );
  h_corr[6]->SetBinContent(27,0.975293 );
  h_corr[6]->SetBinContent(29,0.97354 );
  h_corr[6]->SetBinContent(31,0.972908 );
  h_corr[6]->SetBinContent(33,0.964038 );
  h_corr[6]->SetBinContent(35,0.948701 );

  h_corr[7]->SetBinContent(1,0.972843 );
  h_corr[7]->SetBinContent(3,0.969681 );
  h_corr[7]->SetBinContent(5,0.964996 );
  h_corr[7]->SetBinContent(7,0.962308 );
  h_corr[7]->SetBinContent(9,0.961938 );
  h_corr[7]->SetBinContent(11,0.963253 );
  h_corr[7]->SetBinContent(13,0.958152 );
  h_corr[7]->SetBinContent(15,0.957159 );
  h_corr[7]->SetBinContent(17,0.953267 );
  h_corr[7]->SetBinContent(19,0.950758 );
  h_corr[7]->SetBinContent(21,0.949397 );
  h_corr[7]->SetBinContent(23,0.947351 );
  h_corr[7]->SetBinContent(25,0.938058 );
  h_corr[7]->SetBinContent(27,0.936939 );
  h_corr[7]->SetBinContent(29,0.939717 );
  h_corr[7]->SetBinContent(31,0.923203 );
  h_corr[7]->SetBinContent(33,0.90723 );
  h_corr[7]->SetBinContent(35,0.868708 );

  h_corr[8]->SetBinContent(1,0.977245 );
  h_corr[8]->SetBinContent(3,0.974599 );
  h_corr[8]->SetBinContent(5,0.96961 );
  h_corr[8]->SetBinContent(7,0.96621 );
  h_corr[8]->SetBinContent(9,0.965168 );
  h_corr[8]->SetBinContent(11,0.960386 );
  h_corr[8]->SetBinContent(13,0.957726 );
  h_corr[8]->SetBinContent(15,0.952448 );
  h_corr[8]->SetBinContent(17,0.947245 );
  h_corr[8]->SetBinContent(19,0.943345 );
  h_corr[8]->SetBinContent(21,0.943499 );
  h_corr[8]->SetBinContent(23,0.933455 );
  h_corr[8]->SetBinContent(25,0.928454 );
  h_corr[8]->SetBinContent(27,0.908754 );
  h_corr[8]->SetBinContent(29,0.901171 );
  h_corr[8]->SetBinContent(31,0.89686 );
  h_corr[8]->SetBinContent(33,0.86605 );
  h_corr[8]->SetBinContent(35,0.831657 );

  h_corr[9]->SetBinContent(1,0.980797 );
  h_corr[9]->SetBinContent(3,0.977376 );
  h_corr[9]->SetBinContent(5,0.973089 );
  h_corr[9]->SetBinContent(7,0.971201 );
  h_corr[9]->SetBinContent(9,0.967817 );
  h_corr[9]->SetBinContent(11,0.962181 );
  h_corr[9]->SetBinContent(13,0.958024 );
  h_corr[9]->SetBinContent(15,0.95015 );
  h_corr[9]->SetBinContent(17,0.945073 );
  h_corr[9]->SetBinContent(19,0.937267 );
  h_corr[9]->SetBinContent(21,0.916748 );
  h_corr[9]->SetBinContent(23,0.915056 );
  h_corr[9]->SetBinContent(25,0.903111 );
  h_corr[9]->SetBinContent(27,0.88225 );
  h_corr[9]->SetBinContent(29,0.876974 );
  h_corr[9]->SetBinContent(31,0.876348 );
  h_corr[9]->SetBinContent(33,0.844519 );
  h_corr[9]->SetBinContent(35,0.831657 );

  h_corr[10]->SetBinContent(1,0.985468 );
  h_corr[10]->SetBinContent(3,0.984432 );
  h_corr[10]->SetBinContent(5,0.980098 );
  h_corr[10]->SetBinContent(7,0.978119 );
  h_corr[10]->SetBinContent(9,0.974056 );
  h_corr[10]->SetBinContent(11,0.966605 );
  h_corr[10]->SetBinContent(13,0.968777 );
  h_corr[10]->SetBinContent(15,0.955809 );
  h_corr[10]->SetBinContent(17,0.947147 );
  h_corr[10]->SetBinContent(19,0.928263 );
  h_corr[10]->SetBinContent(21,0.911252 );
  h_corr[10]->SetBinContent(23,0.919512 );
  h_corr[10]->SetBinContent(25,0.903111 );
  h_corr[10]->SetBinContent(27,22.2762 );
  h_corr[10]->SetBinContent(29,0.876974 );
  h_corr[10]->SetBinContent(31,0.876348 );
  h_corr[10]->SetBinContent(33,0.844519 );
  h_corr[10]->SetBinContent(35,0.831657 );

  h_corr[11]->SetBinContent(1,0.988746 );
  h_corr[11]->SetBinContent(3,0.986874 );
  h_corr[11]->SetBinContent(5,0.983583 );
  h_corr[11]->SetBinContent(7,0.980845 );
  h_corr[11]->SetBinContent(9,0.977424 );
  h_corr[11]->SetBinContent(11,0.969455 );
  h_corr[11]->SetBinContent(13,0.964048 );
  h_corr[11]->SetBinContent(15,0.953966 );
  h_corr[11]->SetBinContent(17,0.935231 );
  h_corr[11]->SetBinContent(19,0.928263 );
  h_corr[11]->SetBinContent(21,0.911252 );
  h_corr[11]->SetBinContent(23,0.919512 );
  h_corr[11]->SetBinContent(25,0.903111 );
  h_corr[11]->SetBinContent(27,22.2762 );
  h_corr[11]->SetBinContent(29,0.876974 );
  h_corr[11]->SetBinContent(31,0.876348 );
  h_corr[11]->SetBinContent(33,0.844519 );
  h_corr[11]->SetBinContent(35,0.831657 );

  h_corr[12]->SetBinContent(1,0.989542 );
  h_corr[12]->SetBinContent(3,0.989549 );
  h_corr[12]->SetBinContent(5,0.984517 );
  h_corr[12]->SetBinContent(7,0.983504 );
  h_corr[12]->SetBinContent(9,0.979381 );
  h_corr[12]->SetBinContent(11,0.97032 );
  h_corr[12]->SetBinContent(13,0.969899 );
  h_corr[12]->SetBinContent(15,0.95688 );
  h_corr[12]->SetBinContent(17,0.935231 );
  h_corr[12]->SetBinContent(19,0.928263 );
  h_corr[12]->SetBinContent(21,0.911252 );
  h_corr[12]->SetBinContent(23,0.919512 );
  h_corr[12]->SetBinContent(25,0.903111 );
  h_corr[12]->SetBinContent(27,22.2762 );
  h_corr[12]->SetBinContent(29,0.876974 );
  h_corr[12]->SetBinContent(31,0.876348 );
  h_corr[12]->SetBinContent(33,0.844519 );
  h_corr[12]->SetBinContent(35,0.831657 );

  h_corr[13]->SetBinContent(1,0.990317 );
  h_corr[13]->SetBinContent(3,0.988959 );
  h_corr[13]->SetBinContent(5,0.986011 );
  h_corr[13]->SetBinContent(7,0.980766 );
  h_corr[13]->SetBinContent(9,0.972958 );
  h_corr[13]->SetBinContent(11,0.961209 );
  h_corr[13]->SetBinContent(13,0.96329 );
  h_corr[13]->SetBinContent(15,0.95688 );
  h_corr[13]->SetBinContent(17,0.935231 );
  h_corr[13]->SetBinContent(19,0.928263 );
  h_corr[13]->SetBinContent(21,0.911252 );
  h_corr[13]->SetBinContent(23,0.919512 );
  h_corr[13]->SetBinContent(25,0.903111 );
  h_corr[13]->SetBinContent(27,22.2762 );
  h_corr[13]->SetBinContent(29,0.876974 );
  h_corr[13]->SetBinContent(31,0.876348 );
  h_corr[13]->SetBinContent(33,0.844519 );
  h_corr[13]->SetBinContent(35,0.831657 );

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
     return  1;	// don't correct												       
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
  h_CBET_EB->SetBinContent(1, 0.97213); 
  h_CBET_EB->SetBinContent(3, 0.993014); 
  h_CBET_EB->SetBinContent(5, 0.996218); 
  h_CBET_EB->SetBinContent(7, 0.998312); 
  h_CBET_EB->SetBinContent(9, 0.999062); 
  h_CBET_EB->SetBinContent(11, 0.999167); 
  h_CBET_EB->SetBinContent(13, 0.999471); 
  h_CBET_EB->SetBinContent(15, 0.999949); 
  h_CBET_EB->SetBinContent(17, 1.00016); 
  h_CBET_EB->SetBinContent(19, 1.00026); 
  h_CBET_EB->SetBinContent(21, 1.00042); 
  h_CBET_EB->SetBinContent(23, 1.00058); 
  h_CBET_EB->SetBinContent(25, 1.00049); 
  Int_t iET      = -1;                                                                   
  for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
    if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
      iET  = iiET;  								      
    }										      
  }										      
  if (ET < leftET  [0] )         { iET = 0;              if (DBG) std::cout << " WARNING [applyScCorrections]: ET < leftET  [0] )       " << std::endl;}   
  if (ET > rightET [nBinsET-1] ) { iET = nBinsET-1;      if (DBG) std::cout << " WARNING [applyScCorrections]: ET > rightET [nBinsET-1] " << std::endl;}   
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
  h_CBET_EE->SetBinContent(1, 0.930081); 
  h_CBET_EE->SetBinContent(3, 0.971831); 
  h_CBET_EE->SetBinContent(5, 0.983336); 
  h_CBET_EE->SetBinContent(7, 0.987887); 
  h_CBET_EE->SetBinContent(9, 0.992476); 
  h_CBET_EE->SetBinContent(11, 0.994831); 
  h_CBET_EE->SetBinContent(13, 0.996455); 
  h_CBET_EE->SetBinContent(15, 0.998774); 
  h_CBET_EE->SetBinContent(17, 1.00023); 
  h_CBET_EE->SetBinContent(19, 1.00126); 
  h_CBET_EE->SetBinContent(21, 1.00208); 
  h_CBET_EE->SetBinContent(23, 1.00274); 
  h_CBET_EE->SetBinContent(25, 1.00299); 
  Int_t iET      = -1;                                                                   
  for (Int_t iiET  = 0; iiET  < nBinsET;  ++iiET ){ 				      
    if ( leftET [iiET]  <= (ET)      &&       (ET) < rightET[iiET] ) {		      
      iET  = iiET;  								      
    }										      
  }										      
  if (ET < leftET  [0] )         { iET = 0;              if (DBG) std::cout << " WARNING [applyScCorrections]: ET < leftET  [0] )       " << std::endl;}   
  if (ET > rightET [nBinsET-1] ) { iET = nBinsET-1;      if (DBG) std::cout << " WARNING [applyScCorrections]: ET > rightET [nBinsET-1] " << std::endl;}   
  if (iET == -1) {delete  h_CBET_EE; return 1;}					      
											      
  Int_t binET =  2*iET+1 ; // h_CBET_EE->FindBin(ET);                                    
  Double_t tmp = h_CBET_EE->GetBinContent(binET);                                        
  delete h_CBET_EE;                                                             	      
  if ( 0< binET && binET < 2*nBinsET+1) return tmp;                          	      
  else return 1.;                                                               	      
                                                                                         
}                                                                               
                                                                                  
#endif                                                 
