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
  h_corr[0]->SetBinContent(1,1.0031 );
  h_corr[0]->SetBinContent(3,1.00087 );
  h_corr[0]->SetBinContent(5,1.00301 );
  h_corr[0]->SetBinContent(7,1.00457 );
  h_corr[0]->SetBinContent(9,1.00394 );
  h_corr[0]->SetBinContent(11,1.00366 );
  h_corr[0]->SetBinContent(13,1.00287 );
  h_corr[0]->SetBinContent(15,1.00424 );
  h_corr[0]->SetBinContent(17,1.00298 );
  h_corr[0]->SetBinContent(19,1.00143 );
  h_corr[0]->SetBinContent(21,1.00116 );
  h_corr[0]->SetBinContent(23,1.00364 );
  h_corr[0]->SetBinContent(25,0.999812 );
  h_corr[0]->SetBinContent(27,1.00053 );
  h_corr[0]->SetBinContent(29,1.00223 );
  h_corr[0]->SetBinContent(31,0.997174 );
  h_corr[0]->SetBinContent(33,1.00116 );
  h_corr[0]->SetBinContent(35,0.998449 );

  h_corr[1]->SetBinContent(1,1 );
  h_corr[1]->SetBinContent(3,1.00066 );
  h_corr[1]->SetBinContent(5,1.00155 );
  h_corr[1]->SetBinContent(7,1.00315 );
  h_corr[1]->SetBinContent(9,1.00336 );
  h_corr[1]->SetBinContent(11,1.00258 );
  h_corr[1]->SetBinContent(13,1.00168 );
  h_corr[1]->SetBinContent(15,1.00152 );
  h_corr[1]->SetBinContent(17,1.00097 );
  h_corr[1]->SetBinContent(19,1.00028 );
  h_corr[1]->SetBinContent(21,0.999063 );
  h_corr[1]->SetBinContent(23,1.00157 );
  h_corr[1]->SetBinContent(25,0.999082 );
  h_corr[1]->SetBinContent(27,1.00337 );
  h_corr[1]->SetBinContent(29,1.00149 );
  h_corr[1]->SetBinContent(31,1.00125 );
  h_corr[1]->SetBinContent(33,0.996577 );
  h_corr[1]->SetBinContent(35,0.992048 );

  h_corr[2]->SetBinContent(1,1.00071 );
  h_corr[2]->SetBinContent(3,0.999841 );
  h_corr[2]->SetBinContent(5,1.00073 );
  h_corr[2]->SetBinContent(7,1.00216 );
  h_corr[2]->SetBinContent(9,1.00183 );
  h_corr[2]->SetBinContent(11,1.00115 );
  h_corr[2]->SetBinContent(13,1.00031 );
  h_corr[2]->SetBinContent(15,1.00071 );
  h_corr[2]->SetBinContent(17,1.00017 );
  h_corr[2]->SetBinContent(19,1.0002 );
  h_corr[2]->SetBinContent(21,0.999351 );
  h_corr[2]->SetBinContent(23,0.997278 );
  h_corr[2]->SetBinContent(25,0.9989 );
  h_corr[2]->SetBinContent(27,0.997076 );
  h_corr[2]->SetBinContent(29,0.997898 );
  h_corr[2]->SetBinContent(31,0.99854 );
  h_corr[2]->SetBinContent(33,0.994811 );
  h_corr[2]->SetBinContent(35,0.990731 );

  h_corr[3]->SetBinContent(1,1.00071 );
  h_corr[3]->SetBinContent(3,0.998259 );
  h_corr[3]->SetBinContent(5,0.999223 );
  h_corr[3]->SetBinContent(7,0.999781 );
  h_corr[3]->SetBinContent(9,1.00028 );
  h_corr[3]->SetBinContent(11,0.999636 );
  h_corr[3]->SetBinContent(13,1.00009 );
  h_corr[3]->SetBinContent(15,0.997823 );
  h_corr[3]->SetBinContent(17,0.997059 );
  h_corr[3]->SetBinContent(19,0.995506 );
  h_corr[3]->SetBinContent(21,0.997562 );
  h_corr[3]->SetBinContent(23,0.991422 );
  h_corr[3]->SetBinContent(25,0.992429 );
  h_corr[3]->SetBinContent(27,0.992346 );
  h_corr[3]->SetBinContent(29,0.991837 );
  h_corr[3]->SetBinContent(31,0.989225 );
  h_corr[3]->SetBinContent(33,0.986444 );
  h_corr[3]->SetBinContent(35,0.985782 );

  h_corr[4]->SetBinContent(1,1.00071 );
  h_corr[4]->SetBinContent(3,0.996987 );
  h_corr[4]->SetBinContent(5,0.996789 );
  h_corr[4]->SetBinContent(7,0.996622 );
  h_corr[4]->SetBinContent(9,0.996835 );
  h_corr[4]->SetBinContent(11,0.996068 );
  h_corr[4]->SetBinContent(13,0.995744 );
  h_corr[4]->SetBinContent(15,0.994223 );
  h_corr[4]->SetBinContent(17,0.992306 );
  h_corr[4]->SetBinContent(19,0.993504 );
  h_corr[4]->SetBinContent(21,0.991405 );
  h_corr[4]->SetBinContent(23,0.989893 );
  h_corr[4]->SetBinContent(25,0.990057 );
  h_corr[4]->SetBinContent(27,0.986196 );
  h_corr[4]->SetBinContent(29,0.987714 );
  h_corr[4]->SetBinContent(31,0.985588 );
  h_corr[4]->SetBinContent(33,0.980466 );
  h_corr[4]->SetBinContent(35,0.976755 );

  h_corr[5]->SetBinContent(1,1.00071 );
  h_corr[5]->SetBinContent(3,0.996551 );
  h_corr[5]->SetBinContent(5,0.994843 );
  h_corr[5]->SetBinContent(7,0.994013 );
  h_corr[5]->SetBinContent(9,0.992893 );
  h_corr[5]->SetBinContent(11,0.99101 );
  h_corr[5]->SetBinContent(13,0.990637 );
  h_corr[5]->SetBinContent(15,0.989144 );
  h_corr[5]->SetBinContent(17,0.987679 );
  h_corr[5]->SetBinContent(19,0.985159 );
  h_corr[5]->SetBinContent(21,0.98531 );
  h_corr[5]->SetBinContent(23,0.981632 );
  h_corr[5]->SetBinContent(25,0.982596 );
  h_corr[5]->SetBinContent(27,0.978629 );
  h_corr[5]->SetBinContent(29,0.975904 );
  h_corr[5]->SetBinContent(31,0.974814 );
  h_corr[5]->SetBinContent(33,0.971012 );
  h_corr[5]->SetBinContent(35,0.947996 );

  h_corr[6]->SetBinContent(1,1.00071 );
  h_corr[6]->SetBinContent(3,0.991421 );
  h_corr[6]->SetBinContent(5,0.99077 );
  h_corr[6]->SetBinContent(7,0.990361 );
  h_corr[6]->SetBinContent(9,0.987674 );
  h_corr[6]->SetBinContent(11,0.988161 );
  h_corr[6]->SetBinContent(13,0.986266 );
  h_corr[6]->SetBinContent(15,0.984784 );
  h_corr[6]->SetBinContent(17,0.982505 );
  h_corr[6]->SetBinContent(19,0.981538 );
  h_corr[6]->SetBinContent(21,0.978957 );
  h_corr[6]->SetBinContent(23,0.976995 );
  h_corr[6]->SetBinContent(25,0.97647 );
  h_corr[6]->SetBinContent(27,0.975462 );
  h_corr[6]->SetBinContent(29,0.973397 );
  h_corr[6]->SetBinContent(31,0.972919 );
  h_corr[6]->SetBinContent(33,0.964265 );
  h_corr[6]->SetBinContent(35,0.947996 );

  h_corr[7]->SetBinContent(1,0.954986 );
  h_corr[7]->SetBinContent(3,0.963201 );
  h_corr[7]->SetBinContent(5,0.960919 );
  h_corr[7]->SetBinContent(7,0.959805 );
  h_corr[7]->SetBinContent(9,0.962171 );
  h_corr[7]->SetBinContent(11,0.961802 );
  h_corr[7]->SetBinContent(13,0.95675 );
  h_corr[7]->SetBinContent(15,0.956472 );
  h_corr[7]->SetBinContent(17,0.952868 );
  h_corr[7]->SetBinContent(19,0.950404 );
  h_corr[7]->SetBinContent(21,0.949734 );
  h_corr[7]->SetBinContent(23,0.947156 );
  h_corr[7]->SetBinContent(25,0.936856 );
  h_corr[7]->SetBinContent(27,0.936401 );
  h_corr[7]->SetBinContent(29,0.939468 );
  h_corr[7]->SetBinContent(31,0.923204 );
  h_corr[7]->SetBinContent(33,0.906832 );
  h_corr[7]->SetBinContent(35,0.866589 );

  h_corr[8]->SetBinContent(1,0.965351 );
  h_corr[8]->SetBinContent(3,0.966619 );
  h_corr[8]->SetBinContent(5,0.966169 );
  h_corr[8]->SetBinContent(7,0.964656 );
  h_corr[8]->SetBinContent(9,0.96416 );
  h_corr[8]->SetBinContent(11,0.959969 );
  h_corr[8]->SetBinContent(13,0.957565 );
  h_corr[8]->SetBinContent(15,0.952238 );
  h_corr[8]->SetBinContent(17,0.947543 );
  h_corr[8]->SetBinContent(19,0.943352 );
  h_corr[8]->SetBinContent(21,0.943838 );
  h_corr[8]->SetBinContent(23,0.933914 );
  h_corr[8]->SetBinContent(25,0.927261 );
  h_corr[8]->SetBinContent(27,0.910054 );
  h_corr[8]->SetBinContent(29,0.900566 );
  h_corr[8]->SetBinContent(31,0.8991 );
  h_corr[8]->SetBinContent(33,0.868958 );
  h_corr[8]->SetBinContent(35,0.842271 );

  h_corr[9]->SetBinContent(1,0.97004 );
  h_corr[9]->SetBinContent(3,0.968053 );
  h_corr[9]->SetBinContent(5,0.967615 );
  h_corr[9]->SetBinContent(7,0.968921 );
  h_corr[9]->SetBinContent(9,0.966815 );
  h_corr[9]->SetBinContent(11,0.961791 );
  h_corr[9]->SetBinContent(13,0.957612 );
  h_corr[9]->SetBinContent(15,0.949823 );
  h_corr[9]->SetBinContent(17,0.9451 );
  h_corr[9]->SetBinContent(19,0.937541 );
  h_corr[9]->SetBinContent(21,0.915992 );
  h_corr[9]->SetBinContent(23,0.912375 );
  h_corr[9]->SetBinContent(25,0.904449 );
  h_corr[9]->SetBinContent(27,0.884514 );
  h_corr[9]->SetBinContent(29,0.879562 );
  h_corr[9]->SetBinContent(31,0.884811 );
  h_corr[9]->SetBinContent(33,0.848648 );
  h_corr[9]->SetBinContent(35,0.842271 );

  h_corr[10]->SetBinContent(1,0.973303 );
  h_corr[10]->SetBinContent(3,0.97224 );
  h_corr[10]->SetBinContent(5,0.97254 );
  h_corr[10]->SetBinContent(7,0.974591 );
  h_corr[10]->SetBinContent(9,0.971459 );
  h_corr[10]->SetBinContent(11,0.96539 );
  h_corr[10]->SetBinContent(13,0.968714 );
  h_corr[10]->SetBinContent(15,0.955301 );
  h_corr[10]->SetBinContent(17,0.946333 );
  h_corr[10]->SetBinContent(19,0.92954 );
  h_corr[10]->SetBinContent(21,0.933288 );
  h_corr[10]->SetBinContent(23,0.922043 );
  h_corr[10]->SetBinContent(25,0.904449 );
  h_corr[10]->SetBinContent(27,0.884514 );
  h_corr[10]->SetBinContent(29,0.879562 );
  h_corr[10]->SetBinContent(31,0.884811 );
  h_corr[10]->SetBinContent(33,0.848648 );
  h_corr[10]->SetBinContent(35,0.842271 );

  h_corr[11]->SetBinContent(1,0.974431 );
  h_corr[11]->SetBinContent(3,0.973886 );
  h_corr[11]->SetBinContent(5,0.975515 );
  h_corr[11]->SetBinContent(7,0.978793 );
  h_corr[11]->SetBinContent(9,0.975158 );
  h_corr[11]->SetBinContent(11,0.968215 );
  h_corr[11]->SetBinContent(13,0.963592 );
  h_corr[11]->SetBinContent(15,0.950412 );
  h_corr[11]->SetBinContent(17,0.935719 );
  h_corr[11]->SetBinContent(19,0.92954 );
  h_corr[11]->SetBinContent(21,0.933288 );
  h_corr[11]->SetBinContent(23,0.922043 );
  h_corr[11]->SetBinContent(25,0.904449 );
  h_corr[11]->SetBinContent(27,0.884514 );
  h_corr[11]->SetBinContent(29,0.879562 );
  h_corr[11]->SetBinContent(31,0.884811 );
  h_corr[11]->SetBinContent(33,0.848648 );
  h_corr[11]->SetBinContent(35,0.842271 );

  h_corr[12]->SetBinContent(1,0.974153 );
  h_corr[12]->SetBinContent(3,0.971868 );
  h_corr[12]->SetBinContent(5,0.972922 );
  h_corr[12]->SetBinContent(7,0.977988 );
  h_corr[12]->SetBinContent(9,0.975764 );
  h_corr[12]->SetBinContent(11,0.969332 );
  h_corr[12]->SetBinContent(13,0.970385 );
  h_corr[12]->SetBinContent(15,0.956242 );
  h_corr[12]->SetBinContent(17,0.935719 );
  h_corr[12]->SetBinContent(19,0.92954 );
  h_corr[12]->SetBinContent(21,0.933288 );
  h_corr[12]->SetBinContent(23,0.922043 );
  h_corr[12]->SetBinContent(25,0.904449 );
  h_corr[12]->SetBinContent(27,0.884514 );
  h_corr[12]->SetBinContent(29,0.879562 );
  h_corr[12]->SetBinContent(31,0.884811 );
  h_corr[12]->SetBinContent(33,0.848648 );
  h_corr[12]->SetBinContent(35,0.842271 );

  h_corr[13]->SetBinContent(1,0.979293 );
  h_corr[13]->SetBinContent(3,0.973745 );
  h_corr[13]->SetBinContent(5,0.976737 );
  h_corr[13]->SetBinContent(7,0.974531 );
  h_corr[13]->SetBinContent(9,0.97286 );
  h_corr[13]->SetBinContent(11,0.961133 );
  h_corr[13]->SetBinContent(13,0.963505 );
  h_corr[13]->SetBinContent(15,0.956242 );
  h_corr[13]->SetBinContent(17,0.935719 );
  h_corr[13]->SetBinContent(19,0.92954 );
  h_corr[13]->SetBinContent(21,0.933288 );
  h_corr[13]->SetBinContent(23,0.922043 );
  h_corr[13]->SetBinContent(25,0.904449 );
  h_corr[13]->SetBinContent(27,0.884514 );
  h_corr[13]->SetBinContent(29,0.879562 );
  h_corr[13]->SetBinContent(31,0.884811 );
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
  h_CBET_EB->SetBinContent(1, 0.943658); 
  h_CBET_EB->SetBinContent(3, 0.994546); 
  h_CBET_EB->SetBinContent(5, 0.997003); 
  h_CBET_EB->SetBinContent(7, 0.997912); 
  h_CBET_EB->SetBinContent(9, 0.99844); 
  h_CBET_EB->SetBinContent(11, 0.998749); 
  h_CBET_EB->SetBinContent(13, 0.99884); 
  h_CBET_EB->SetBinContent(15, 0.999243); 
  h_CBET_EB->SetBinContent(17, 0.999686); 
  h_CBET_EB->SetBinContent(19, 1.00017); 
  h_CBET_EB->SetBinContent(21, 1.00061); 
  h_CBET_EB->SetBinContent(23, 1.0008); 
  h_CBET_EB->SetBinContent(25, 1.00091); 
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
  h_CBET_EE->SetBinContent(1, 1.17942); 
  h_CBET_EE->SetBinContent(3, 0.964212); 
  h_CBET_EE->SetBinContent(5, 0.980811); 
  h_CBET_EE->SetBinContent(7, 0.982194); 
  h_CBET_EE->SetBinContent(9, 0.989856); 
  h_CBET_EE->SetBinContent(11, 0.991903); 
  h_CBET_EE->SetBinContent(13, 0.99507); 
  h_CBET_EE->SetBinContent(15, 0.998067); 
  h_CBET_EE->SetBinContent(17, 0.999851); 
  h_CBET_EE->SetBinContent(19, 1.00167); 
  h_CBET_EE->SetBinContent(21, 1.00274); 
  h_CBET_EE->SetBinContent(23, 1.0044); 
  h_CBET_EE->SetBinContent(25, 1.00462); 
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
