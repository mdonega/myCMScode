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
  h_corr[0]->SetBinContent(1,1.0017 );
  h_corr[0]->SetBinContent(3,1.00284 );
  h_corr[0]->SetBinContent(5,1.00461 );
  h_corr[0]->SetBinContent(7,1.00461 );
  h_corr[0]->SetBinContent(9,1.0036 );
  h_corr[0]->SetBinContent(11,1.00317 );
  h_corr[0]->SetBinContent(13,1.00295 );
  h_corr[0]->SetBinContent(15,1.00348 );
  h_corr[0]->SetBinContent(17,1.00279 );
  h_corr[0]->SetBinContent(19,1.00149 );
  h_corr[0]->SetBinContent(21,1.00151 );
  h_corr[0]->SetBinContent(23,1.00251 );
  h_corr[0]->SetBinContent(25,1.00044 );
  h_corr[0]->SetBinContent(27,1.00105 );
  h_corr[0]->SetBinContent(29,1.0022 );
  h_corr[0]->SetBinContent(31,0.997722 );
  h_corr[0]->SetBinContent(33,1.00193 );
  h_corr[0]->SetBinContent(35,0.998449 );

  h_corr[1]->SetBinContent(1,1.00289 );
  h_corr[1]->SetBinContent(3,1.00255 );
  h_corr[1]->SetBinContent(5,1.00433 );
  h_corr[1]->SetBinContent(7,1.00374 );
  h_corr[1]->SetBinContent(9,1.00307 );
  h_corr[1]->SetBinContent(11,1.00238 );
  h_corr[1]->SetBinContent(13,1.00177 );
  h_corr[1]->SetBinContent(15,1.00175 );
  h_corr[1]->SetBinContent(17,1.001 );
  h_corr[1]->SetBinContent(19,1.0004 );
  h_corr[1]->SetBinContent(21,0.999708 );
  h_corr[1]->SetBinContent(23,1.00171 );
  h_corr[1]->SetBinContent(25,0.999308 );
  h_corr[1]->SetBinContent(27,1.00311 );
  h_corr[1]->SetBinContent(29,1.00151 );
  h_corr[1]->SetBinContent(31,1.00419 );
  h_corr[1]->SetBinContent(33,0.996714 );
  h_corr[1]->SetBinContent(35,0.992016 );

  h_corr[2]->SetBinContent(1,1.00204 );
  h_corr[2]->SetBinContent(3,1.00235 );
  h_corr[2]->SetBinContent(5,1.00316 );
  h_corr[2]->SetBinContent(7,1.00274 );
  h_corr[2]->SetBinContent(9,1.00197 );
  h_corr[2]->SetBinContent(11,1.00105 );
  h_corr[2]->SetBinContent(13,1.0005 );
  h_corr[2]->SetBinContent(15,1.0012 );
  h_corr[2]->SetBinContent(17,1.00064 );
  h_corr[2]->SetBinContent(19,1.00012 );
  h_corr[2]->SetBinContent(21,0.999379 );
  h_corr[2]->SetBinContent(23,0.997918 );
  h_corr[2]->SetBinContent(25,0.999065 );
  h_corr[2]->SetBinContent(27,0.996795 );
  h_corr[2]->SetBinContent(29,0.998009 );
  h_corr[2]->SetBinContent(31,0.998568 );
  h_corr[2]->SetBinContent(33,0.995413 );
  h_corr[2]->SetBinContent(35,0.990731 );

  h_corr[3]->SetBinContent(1,1.0025 );
  h_corr[3]->SetBinContent(3,1.0015 );
  h_corr[3]->SetBinContent(5,1.00216 );
  h_corr[3]->SetBinContent(7,1.00107 );
  h_corr[3]->SetBinContent(9,1.00044 );
  h_corr[3]->SetBinContent(11,0.99943 );
  h_corr[3]->SetBinContent(13,0.999615 );
  h_corr[3]->SetBinContent(15,0.998489 );
  h_corr[3]->SetBinContent(17,0.997976 );
  h_corr[3]->SetBinContent(19,0.995556 );
  h_corr[3]->SetBinContent(21,0.997779 );
  h_corr[3]->SetBinContent(23,0.995095 );
  h_corr[3]->SetBinContent(25,0.993017 );
  h_corr[3]->SetBinContent(27,0.992634 );
  h_corr[3]->SetBinContent(29,0.991802 );
  h_corr[3]->SetBinContent(31,0.989669 );
  h_corr[3]->SetBinContent(33,0.986718 );
  h_corr[3]->SetBinContent(35,0.985735 );

  h_corr[4]->SetBinContent(1,0.99967 );
  h_corr[4]->SetBinContent(3,0.999931 );
  h_corr[4]->SetBinContent(5,1.00002 );
  h_corr[4]->SetBinContent(7,0.998998 );
  h_corr[4]->SetBinContent(9,0.997947 );
  h_corr[4]->SetBinContent(11,0.996426 );
  h_corr[4]->SetBinContent(13,0.995717 );
  h_corr[4]->SetBinContent(15,0.995111 );
  h_corr[4]->SetBinContent(17,0.993612 );
  h_corr[4]->SetBinContent(19,0.994311 );
  h_corr[4]->SetBinContent(21,0.993118 );
  h_corr[4]->SetBinContent(23,0.990982 );
  h_corr[4]->SetBinContent(25,0.990437 );
  h_corr[4]->SetBinContent(27,0.99021 );
  h_corr[4]->SetBinContent(29,0.989854 );
  h_corr[4]->SetBinContent(31,0.985701 );
  h_corr[4]->SetBinContent(33,0.981088 );
  h_corr[4]->SetBinContent(35,0.976796 );

  h_corr[5]->SetBinContent(1,0.99726 );
  h_corr[5]->SetBinContent(3,0.998501 );
  h_corr[5]->SetBinContent(5,0.997647 );
  h_corr[5]->SetBinContent(7,0.996109 );
  h_corr[5]->SetBinContent(9,0.994001 );
  h_corr[5]->SetBinContent(11,0.992682 );
  h_corr[5]->SetBinContent(13,0.991712 );
  h_corr[5]->SetBinContent(15,0.990257 );
  h_corr[5]->SetBinContent(17,0.988499 );
  h_corr[5]->SetBinContent(19,0.985523 );
  h_corr[5]->SetBinContent(21,0.98652 );
  h_corr[5]->SetBinContent(23,0.983028 );
  h_corr[5]->SetBinContent(25,0.983218 );
  h_corr[5]->SetBinContent(27,0.978137 );
  h_corr[5]->SetBinContent(29,0.976549 );
  h_corr[5]->SetBinContent(31,0.975195 );
  h_corr[5]->SetBinContent(33,0.971767 );
  h_corr[5]->SetBinContent(35,0.948249 );

  h_corr[6]->SetBinContent(1,0.995072 );
  h_corr[6]->SetBinContent(3,0.995189 );
  h_corr[6]->SetBinContent(5,0.994656 );
  h_corr[6]->SetBinContent(7,0.992733 );
  h_corr[6]->SetBinContent(9,0.990514 );
  h_corr[6]->SetBinContent(11,0.989792 );
  h_corr[6]->SetBinContent(13,0.988267 );
  h_corr[6]->SetBinContent(15,0.986557 );
  h_corr[6]->SetBinContent(17,0.984806 );
  h_corr[6]->SetBinContent(19,0.983369 );
  h_corr[6]->SetBinContent(21,0.981047 );
  h_corr[6]->SetBinContent(23,0.978636 );
  h_corr[6]->SetBinContent(25,0.978238 );
  h_corr[6]->SetBinContent(27,0.976758 );
  h_corr[6]->SetBinContent(29,0.974463 );
  h_corr[6]->SetBinContent(31,0.97439 );
  h_corr[6]->SetBinContent(33,0.965305 );
  h_corr[6]->SetBinContent(35,0.948249 );

  h_corr[7]->SetBinContent(1,0.974636 );
  h_corr[7]->SetBinContent(3,0.972214 );
  h_corr[7]->SetBinContent(5,0.968194 );
  h_corr[7]->SetBinContent(7,0.964847 );
  h_corr[7]->SetBinContent(9,0.966185 );
  h_corr[7]->SetBinContent(11,0.965527 );
  h_corr[7]->SetBinContent(13,0.959991 );
  h_corr[7]->SetBinContent(15,0.95917 );
  h_corr[7]->SetBinContent(17,0.956163 );
  h_corr[7]->SetBinContent(19,0.951905 );
  h_corr[7]->SetBinContent(21,0.951701 );
  h_corr[7]->SetBinContent(23,0.949487 );
  h_corr[7]->SetBinContent(25,0.941172 );
  h_corr[7]->SetBinContent(27,0.938937 );
  h_corr[7]->SetBinContent(29,0.939491 );
  h_corr[7]->SetBinContent(31,0.925304 );
  h_corr[7]->SetBinContent(33,0.907215 );
  h_corr[7]->SetBinContent(35,0.866589 );

  h_corr[8]->SetBinContent(1,0.97925 );
  h_corr[8]->SetBinContent(3,0.976872 );
  h_corr[8]->SetBinContent(5,0.972514 );
  h_corr[8]->SetBinContent(7,0.969633 );
  h_corr[8]->SetBinContent(9,0.968011 );
  h_corr[8]->SetBinContent(11,0.964239 );
  h_corr[8]->SetBinContent(13,0.960834 );
  h_corr[8]->SetBinContent(15,0.954948 );
  h_corr[8]->SetBinContent(17,0.949875 );
  h_corr[8]->SetBinContent(19,0.945175 );
  h_corr[8]->SetBinContent(21,0.945648 );
  h_corr[8]->SetBinContent(23,0.934222 );
  h_corr[8]->SetBinContent(25,0.928208 );
  h_corr[8]->SetBinContent(27,0.910054 );
  h_corr[8]->SetBinContent(29,0.900805 );
  h_corr[8]->SetBinContent(31,0.8991 );
  h_corr[8]->SetBinContent(33,0.868958 );
  h_corr[8]->SetBinContent(35,0.842271 );

  h_corr[9]->SetBinContent(1,0.982423 );
  h_corr[9]->SetBinContent(3,0.979533 );
  h_corr[9]->SetBinContent(5,0.975584 );
  h_corr[9]->SetBinContent(7,0.973639 );
  h_corr[9]->SetBinContent(9,0.97045 );
  h_corr[9]->SetBinContent(11,0.964687 );
  h_corr[9]->SetBinContent(13,0.95991 );
  h_corr[9]->SetBinContent(15,0.951856 );
  h_corr[9]->SetBinContent(17,0.946562 );
  h_corr[9]->SetBinContent(19,0.937987 );
  h_corr[9]->SetBinContent(21,0.916211 );
  h_corr[9]->SetBinContent(23,0.91251 );
  h_corr[9]->SetBinContent(25,0.904678 );
  h_corr[9]->SetBinContent(27,0.884514 );
  h_corr[9]->SetBinContent(29,0.879562 );
  h_corr[9]->SetBinContent(31,0.886015 );
  h_corr[9]->SetBinContent(33,0.848648 );
  h_corr[9]->SetBinContent(35,0.842271 );

  h_corr[10]->SetBinContent(1,0.986282 );
  h_corr[10]->SetBinContent(3,0.985664 );
  h_corr[10]->SetBinContent(5,0.98123 );
  h_corr[10]->SetBinContent(7,0.979725 );
  h_corr[10]->SetBinContent(9,0.97554 );
  h_corr[10]->SetBinContent(11,0.967806 );
  h_corr[10]->SetBinContent(13,0.970002 );
  h_corr[10]->SetBinContent(15,0.956301 );
  h_corr[10]->SetBinContent(17,0.947315 );
  h_corr[10]->SetBinContent(19,0.930724 );
  h_corr[10]->SetBinContent(21,0.933288 );
  h_corr[10]->SetBinContent(23,0.922212 );
  h_corr[10]->SetBinContent(25,0.904678 );
  h_corr[10]->SetBinContent(27,0.884514 );
  h_corr[10]->SetBinContent(29,0.879562 );
  h_corr[10]->SetBinContent(31,0.886015 );
  h_corr[10]->SetBinContent(33,0.848648 );
  h_corr[10]->SetBinContent(35,0.842271 );

  h_corr[11]->SetBinContent(1,0.988854 );
  h_corr[11]->SetBinContent(3,0.98754 );
  h_corr[11]->SetBinContent(5,0.984298 );
  h_corr[11]->SetBinContent(7,0.982108 );
  h_corr[11]->SetBinContent(9,0.977779 );
  h_corr[11]->SetBinContent(11,0.970481 );
  h_corr[11]->SetBinContent(13,0.963743 );
  h_corr[11]->SetBinContent(15,0.955344 );
  h_corr[11]->SetBinContent(17,0.936082 );
  h_corr[11]->SetBinContent(19,0.930724 );
  h_corr[11]->SetBinContent(21,0.933288 );
  h_corr[11]->SetBinContent(23,0.922212 );
  h_corr[11]->SetBinContent(25,0.904678 );
  h_corr[11]->SetBinContent(27,0.884514 );
  h_corr[11]->SetBinContent(29,0.879562 );
  h_corr[11]->SetBinContent(31,0.886015 );
  h_corr[11]->SetBinContent(33,0.848648 );
  h_corr[11]->SetBinContent(35,0.842271 );

  h_corr[12]->SetBinContent(1,0.99002 );
  h_corr[12]->SetBinContent(3,0.990227 );
  h_corr[12]->SetBinContent(5,0.985724 );
  h_corr[12]->SetBinContent(7,0.98334 );
  h_corr[12]->SetBinContent(9,0.97887 );
  h_corr[12]->SetBinContent(11,0.972733 );
  h_corr[12]->SetBinContent(13,0.970714 );
  h_corr[12]->SetBinContent(15,0.957453 );
  h_corr[12]->SetBinContent(17,0.936082 );
  h_corr[12]->SetBinContent(19,0.930724 );
  h_corr[12]->SetBinContent(21,0.933288 );
  h_corr[12]->SetBinContent(23,0.922212 );
  h_corr[12]->SetBinContent(25,0.904678 );
  h_corr[12]->SetBinContent(27,0.884514 );
  h_corr[12]->SetBinContent(29,0.879562 );
  h_corr[12]->SetBinContent(31,0.886015 );
  h_corr[12]->SetBinContent(33,0.848648 );
  h_corr[12]->SetBinContent(35,0.842271 );

  h_corr[13]->SetBinContent(1,0.990464 );
  h_corr[13]->SetBinContent(3,0.989728 );
  h_corr[13]->SetBinContent(5,0.987199 );
  h_corr[13]->SetBinContent(7,0.981657 );
  h_corr[13]->SetBinContent(9,0.975242 );
  h_corr[13]->SetBinContent(11,0.961499 );
  h_corr[13]->SetBinContent(13,0.964004 );
  h_corr[13]->SetBinContent(15,0.957453 );
  h_corr[13]->SetBinContent(17,0.936082 );
  h_corr[13]->SetBinContent(19,0.930724 );
  h_corr[13]->SetBinContent(21,0.933288 );
  h_corr[13]->SetBinContent(23,0.922212 );
  h_corr[13]->SetBinContent(25,0.904678 );
  h_corr[13]->SetBinContent(27,0.884514 );
  h_corr[13]->SetBinContent(29,0.879562 );
  h_corr[13]->SetBinContent(31,0.886015 );
  h_corr[13]->SetBinContent(33,0.848648 );
  h_corr[13]->SetBinContent(35,0.842271 );

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
  h_CBET_EB->SetBinContent(1, 0.943784); 
  h_CBET_EB->SetBinContent(3, 0.992349); 
  h_CBET_EB->SetBinContent(5, 0.996126); 
  h_CBET_EB->SetBinContent(7, 0.998095); 
  h_CBET_EB->SetBinContent(9, 0.998606); 
  h_CBET_EB->SetBinContent(11, 0.999043); 
  h_CBET_EB->SetBinContent(13, 0.999252); 
  h_CBET_EB->SetBinContent(15, 0.99973); 
  h_CBET_EB->SetBinContent(17, 0.999954); 
  h_CBET_EB->SetBinContent(19, 1.00002); 
  h_CBET_EB->SetBinContent(21, 0.93242); 
  h_CBET_EB->SetBinContent(23, 1.0003); 
  h_CBET_EB->SetBinContent(25, 1.00029); 
  h_CBET_EB->SetBinContent(27, 1.00043); 
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
  h_CBET_EE->SetBinContent(1, 0.895841); 
  h_CBET_EE->SetBinContent(3, 0.970611); 
  h_CBET_EE->SetBinContent(5, 0.982806); 
  h_CBET_EE->SetBinContent(7, 0.986253); 
  h_CBET_EE->SetBinContent(9, 0.991506); 
  h_CBET_EE->SetBinContent(11, 0.993435); 
  h_CBET_EE->SetBinContent(13, 0.995184); 
  h_CBET_EE->SetBinContent(15, 0.997441); 
  h_CBET_EE->SetBinContent(17, 0.998862); 
  h_CBET_EE->SetBinContent(19, 0.999821); 
  h_CBET_EE->SetBinContent(21, 1.00062); 
  h_CBET_EE->SetBinContent(23, 1.00126); 
  h_CBET_EE->SetBinContent(25, 1.00179); 
  h_CBET_EE->SetBinContent(27, 1.0042); 
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
