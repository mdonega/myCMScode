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
  h_corr[0]->SetBinContent(1,1.00308 );
  h_corr[0]->SetBinContent(3,1.00062 );
  h_corr[0]->SetBinContent(5,1.00259 );
  h_corr[0]->SetBinContent(7,1.00425 );
  h_corr[0]->SetBinContent(9,1.00364 );
  h_corr[0]->SetBinContent(11,1.00326 );
  h_corr[0]->SetBinContent(13,1.0028 );
  h_corr[0]->SetBinContent(15,1.00366 );
  h_corr[0]->SetBinContent(17,1.00303 );
  h_corr[0]->SetBinContent(19,1.00151 );
  h_corr[0]->SetBinContent(21,1.00159 );
  h_corr[0]->SetBinContent(23,1.00266 );
  h_corr[0]->SetBinContent(25,1.0004 );
  h_corr[0]->SetBinContent(27,1.00094 );
  h_corr[0]->SetBinContent(29,1.00198 );
  h_corr[0]->SetBinContent(31,0.997722 );
  h_corr[0]->SetBinContent(33,1.00201 );
  h_corr[0]->SetBinContent(35,0.998449 );

  h_corr[1]->SetBinContent(1,1 );
  h_corr[1]->SetBinContent(3,1.00058 );
  h_corr[1]->SetBinContent(5,1.00165 );
  h_corr[1]->SetBinContent(7,1.00321 );
  h_corr[1]->SetBinContent(9,1.00316 );
  h_corr[1]->SetBinContent(11,1.0027 );
  h_corr[1]->SetBinContent(13,1.00164 );
  h_corr[1]->SetBinContent(15,1.00209 );
  h_corr[1]->SetBinContent(17,1.00104 );
  h_corr[1]->SetBinContent(19,1.00026 );
  h_corr[1]->SetBinContent(21,0.999867 );
  h_corr[1]->SetBinContent(23,1.00175 );
  h_corr[1]->SetBinContent(25,0.99947 );
  h_corr[1]->SetBinContent(27,1.00321 );
  h_corr[1]->SetBinContent(29,1.00153 );
  h_corr[1]->SetBinContent(31,1.00405 );
  h_corr[1]->SetBinContent(33,0.996695 );
  h_corr[1]->SetBinContent(35,0.992048 );

  h_corr[2]->SetBinContent(1,1.00063 );
  h_corr[2]->SetBinContent(3,0.999791 );
  h_corr[2]->SetBinContent(5,1.00078 );
  h_corr[2]->SetBinContent(7,1.002 );
  h_corr[2]->SetBinContent(9,1.00198 );
  h_corr[2]->SetBinContent(11,1.00105 );
  h_corr[2]->SetBinContent(13,1.0005 );
  h_corr[2]->SetBinContent(15,1.0009 );
  h_corr[2]->SetBinContent(17,1.00032 );
  h_corr[2]->SetBinContent(19,1.00001 );
  h_corr[2]->SetBinContent(21,0.999406 );
  h_corr[2]->SetBinContent(23,0.997789 );
  h_corr[2]->SetBinContent(25,0.999352 );
  h_corr[2]->SetBinContent(27,0.99683 );
  h_corr[2]->SetBinContent(29,0.997964 );
  h_corr[2]->SetBinContent(31,0.998597 );
  h_corr[2]->SetBinContent(33,0.995274 );
  h_corr[2]->SetBinContent(35,0.990731 );

  h_corr[3]->SetBinContent(1,1.00063 );
  h_corr[3]->SetBinContent(3,0.999059 );
  h_corr[3]->SetBinContent(5,0.999459 );
  h_corr[3]->SetBinContent(7,1.00006 );
  h_corr[3]->SetBinContent(9,1.00052 );
  h_corr[3]->SetBinContent(11,0.999417 );
  h_corr[3]->SetBinContent(13,0.999721 );
  h_corr[3]->SetBinContent(15,0.998402 );
  h_corr[3]->SetBinContent(17,0.997817 );
  h_corr[3]->SetBinContent(19,0.99577 );
  h_corr[3]->SetBinContent(21,0.997747 );
  h_corr[3]->SetBinContent(23,0.992782 );
  h_corr[3]->SetBinContent(25,0.992903 );
  h_corr[3]->SetBinContent(27,0.992608 );
  h_corr[3]->SetBinContent(29,0.991851 );
  h_corr[3]->SetBinContent(31,0.989344 );
  h_corr[3]->SetBinContent(33,0.986714 );
  h_corr[3]->SetBinContent(35,0.985782 );

  h_corr[4]->SetBinContent(1,1.00063 );
  h_corr[4]->SetBinContent(3,0.998007 );
  h_corr[4]->SetBinContent(5,0.997222 );
  h_corr[4]->SetBinContent(7,0.997407 );
  h_corr[4]->SetBinContent(9,0.997584 );
  h_corr[4]->SetBinContent(11,0.996435 );
  h_corr[4]->SetBinContent(13,0.995717 );
  h_corr[4]->SetBinContent(15,0.995115 );
  h_corr[4]->SetBinContent(17,0.993429 );
  h_corr[4]->SetBinContent(19,0.994326 );
  h_corr[4]->SetBinContent(21,0.993154 );
  h_corr[4]->SetBinContent(23,0.99079 );
  h_corr[4]->SetBinContent(25,0.991551 );
  h_corr[4]->SetBinContent(27,0.986891 );
  h_corr[4]->SetBinContent(29,0.989705 );
  h_corr[4]->SetBinContent(31,0.985593 );
  h_corr[4]->SetBinContent(33,0.981088 );
  h_corr[4]->SetBinContent(35,0.976729 );

  h_corr[5]->SetBinContent(1,1.00063 );
  h_corr[5]->SetBinContent(3,0.996282 );
  h_corr[5]->SetBinContent(5,0.995113 );
  h_corr[5]->SetBinContent(7,0.994426 );
  h_corr[5]->SetBinContent(9,0.993657 );
  h_corr[5]->SetBinContent(11,0.992405 );
  h_corr[5]->SetBinContent(13,0.991786 );
  h_corr[5]->SetBinContent(15,0.989696 );
  h_corr[5]->SetBinContent(17,0.988338 );
  h_corr[5]->SetBinContent(19,0.985387 );
  h_corr[5]->SetBinContent(21,0.986162 );
  h_corr[5]->SetBinContent(23,0.982823 );
  h_corr[5]->SetBinContent(25,0.983209 );
  h_corr[5]->SetBinContent(27,0.978042 );
  h_corr[5]->SetBinContent(29,0.976582 );
  h_corr[5]->SetBinContent(31,0.975195 );
  h_corr[5]->SetBinContent(33,0.971747 );
  h_corr[5]->SetBinContent(35,0.948249 );

  h_corr[6]->SetBinContent(1,1.00063 );
  h_corr[6]->SetBinContent(3,0.993167 );
  h_corr[6]->SetBinContent(5,0.991906 );
  h_corr[6]->SetBinContent(7,0.991258 );
  h_corr[6]->SetBinContent(9,0.9894 );
  h_corr[6]->SetBinContent(11,0.989635 );
  h_corr[6]->SetBinContent(13,0.987865 );
  h_corr[6]->SetBinContent(15,0.986439 );
  h_corr[6]->SetBinContent(17,0.984314 );
  h_corr[6]->SetBinContent(19,0.983435 );
  h_corr[6]->SetBinContent(21,0.980854 );
  h_corr[6]->SetBinContent(23,0.978795 );
  h_corr[6]->SetBinContent(25,0.977921 );
  h_corr[6]->SetBinContent(27,0.97698 );
  h_corr[6]->SetBinContent(29,0.974533 );
  h_corr[6]->SetBinContent(31,0.974288 );
  h_corr[6]->SetBinContent(33,0.965295 );
  h_corr[6]->SetBinContent(35,0.948249 );

  h_corr[7]->SetBinContent(1,0.967157 );
  h_corr[7]->SetBinContent(3,0.966031 );
  h_corr[7]->SetBinContent(5,0.963019 );
  h_corr[7]->SetBinContent(7,0.96183 );
  h_corr[7]->SetBinContent(9,0.965422 );
  h_corr[7]->SetBinContent(11,0.963865 );
  h_corr[7]->SetBinContent(13,0.958784 );
  h_corr[7]->SetBinContent(15,0.958448 );
  h_corr[7]->SetBinContent(17,0.955634 );
  h_corr[7]->SetBinContent(19,0.951589 );
  h_corr[7]->SetBinContent(21,0.95184 );
  h_corr[7]->SetBinContent(23,0.949234 );
  h_corr[7]->SetBinContent(25,0.943285 );
  h_corr[7]->SetBinContent(27,0.938592 );
  h_corr[7]->SetBinContent(29,0.939253 );
  h_corr[7]->SetBinContent(31,0.925131 );
  h_corr[7]->SetBinContent(33,0.907146 );
  h_corr[7]->SetBinContent(35,0.866589 );

  h_corr[8]->SetBinContent(1,0.967076 );
  h_corr[8]->SetBinContent(3,0.968639 );
  h_corr[8]->SetBinContent(5,0.968946 );
  h_corr[8]->SetBinContent(7,0.967603 );
  h_corr[8]->SetBinContent(9,0.966661 );
  h_corr[8]->SetBinContent(11,0.963774 );
  h_corr[8]->SetBinContent(13,0.960966 );
  h_corr[8]->SetBinContent(15,0.954744 );
  h_corr[8]->SetBinContent(17,0.949668 );
  h_corr[8]->SetBinContent(19,0.944268 );
  h_corr[8]->SetBinContent(21,0.945659 );
  h_corr[8]->SetBinContent(23,0.93433 );
  h_corr[8]->SetBinContent(25,0.928208 );
  h_corr[8]->SetBinContent(27,0.910054 );
  h_corr[8]->SetBinContent(29,0.900805 );
  h_corr[8]->SetBinContent(31,0.8991 );
  h_corr[8]->SetBinContent(33,0.868958 );
  h_corr[8]->SetBinContent(35,0.842271 );

  h_corr[9]->SetBinContent(1,0.970619 );
  h_corr[9]->SetBinContent(3,0.96935 );
  h_corr[9]->SetBinContent(5,0.969716 );
  h_corr[9]->SetBinContent(7,0.971263 );
  h_corr[9]->SetBinContent(9,0.969144 );
  h_corr[9]->SetBinContent(11,0.964077 );
  h_corr[9]->SetBinContent(13,0.959751 );
  h_corr[9]->SetBinContent(15,0.951493 );
  h_corr[9]->SetBinContent(17,0.946315 );
  h_corr[9]->SetBinContent(19,0.937987 );
  h_corr[9]->SetBinContent(21,0.915992 );
  h_corr[9]->SetBinContent(23,0.912515 );
  h_corr[9]->SetBinContent(25,0.904678 );
  h_corr[9]->SetBinContent(27,0.884514 );
  h_corr[9]->SetBinContent(29,0.879562 );
  h_corr[9]->SetBinContent(31,0.884811 );
  h_corr[9]->SetBinContent(33,0.848648 );
  h_corr[9]->SetBinContent(35,0.842271 );

  h_corr[10]->SetBinContent(1,0.973771 );
  h_corr[10]->SetBinContent(3,0.973666 );
  h_corr[10]->SetBinContent(5,0.973594 );
  h_corr[10]->SetBinContent(7,0.975679 );
  h_corr[10]->SetBinContent(9,0.973012 );
  h_corr[10]->SetBinContent(11,0.966487 );
  h_corr[10]->SetBinContent(13,0.968665 );
  h_corr[10]->SetBinContent(15,0.955938 );
  h_corr[10]->SetBinContent(17,0.946894 );
  h_corr[10]->SetBinContent(19,0.931812 );
  h_corr[10]->SetBinContent(21,0.933288 );
  h_corr[10]->SetBinContent(23,0.922043 );
  h_corr[10]->SetBinContent(25,0.904678 );
  h_corr[10]->SetBinContent(27,0.884514 );
  h_corr[10]->SetBinContent(29,0.879562 );
  h_corr[10]->SetBinContent(31,0.884811 );
  h_corr[10]->SetBinContent(33,0.848648 );
  h_corr[10]->SetBinContent(35,0.842271 );

  h_corr[11]->SetBinContent(1,0.975012 );
  h_corr[11]->SetBinContent(3,0.974118 );
  h_corr[11]->SetBinContent(5,0.975591 );
  h_corr[11]->SetBinContent(7,0.978809 );
  h_corr[11]->SetBinContent(9,0.976455 );
  h_corr[11]->SetBinContent(11,0.969305 );
  h_corr[11]->SetBinContent(13,0.963475 );
  h_corr[11]->SetBinContent(15,0.950412 );
  h_corr[11]->SetBinContent(17,0.935719 );
  h_corr[11]->SetBinContent(19,0.931812 );
  h_corr[11]->SetBinContent(21,0.933288 );
  h_corr[11]->SetBinContent(23,0.922043 );
  h_corr[11]->SetBinContent(25,0.904678 );
  h_corr[11]->SetBinContent(27,0.884514 );
  h_corr[11]->SetBinContent(29,0.879562 );
  h_corr[11]->SetBinContent(31,0.884811 );
  h_corr[11]->SetBinContent(33,0.848648 );
  h_corr[11]->SetBinContent(35,0.842271 );

  h_corr[12]->SetBinContent(1,0.973559 );
  h_corr[12]->SetBinContent(3,0.972279 );
  h_corr[12]->SetBinContent(5,0.972817 );
  h_corr[12]->SetBinContent(7,0.977667 );
  h_corr[12]->SetBinContent(9,0.975673 );
  h_corr[12]->SetBinContent(11,0.969869 );
  h_corr[12]->SetBinContent(13,0.970385 );
  h_corr[12]->SetBinContent(15,0.956242 );
  h_corr[12]->SetBinContent(17,0.935719 );
  h_corr[12]->SetBinContent(19,0.931812 );
  h_corr[12]->SetBinContent(21,0.933288 );
  h_corr[12]->SetBinContent(23,0.922043 );
  h_corr[12]->SetBinContent(25,0.904678 );
  h_corr[12]->SetBinContent(27,0.884514 );
  h_corr[12]->SetBinContent(29,0.879562 );
  h_corr[12]->SetBinContent(31,0.884811 );
  h_corr[12]->SetBinContent(33,0.848648 );
  h_corr[12]->SetBinContent(35,0.842271 );

  h_corr[13]->SetBinContent(1,0.978924 );
  h_corr[13]->SetBinContent(3,0.973835 );
  h_corr[13]->SetBinContent(5,0.97702 );
  h_corr[13]->SetBinContent(7,0.975044 );
  h_corr[13]->SetBinContent(9,0.9722 );
  h_corr[13]->SetBinContent(11,0.961411 );
  h_corr[13]->SetBinContent(13,0.963396 );
  h_corr[13]->SetBinContent(15,0.956242 );
  h_corr[13]->SetBinContent(17,0.935719 );
  h_corr[13]->SetBinContent(19,0.931812 );
  h_corr[13]->SetBinContent(21,0.933288 );
  h_corr[13]->SetBinContent(23,0.922043 );
  h_corr[13]->SetBinContent(25,0.904678 );
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
  h_CBET_EB->SetBinContent(1, 0.944061); 
  h_CBET_EB->SetBinContent(3, 0.994123); 
  h_CBET_EB->SetBinContent(5, 0.996905); 
  h_CBET_EB->SetBinContent(7, 0.99777); 
  h_CBET_EB->SetBinContent(9, 0.998342); 
  h_CBET_EB->SetBinContent(11, 0.998588); 
  h_CBET_EB->SetBinContent(13, 0.998522); 
  h_CBET_EB->SetBinContent(15, 0.999283); 
  h_CBET_EB->SetBinContent(17, 0.999332); 
  h_CBET_EB->SetBinContent(19, 0.999965); 
  h_CBET_EB->SetBinContent(21, 1.00013); 
  h_CBET_EB->SetBinContent(23, 1.00034); 
  h_CBET_EB->SetBinContent(25, 1.0006); 
  h_CBET_EB->SetBinContent(27, 1.00091); 
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
  h_CBET_EE->SetBinContent(1, 0.891732); 
  h_CBET_EE->SetBinContent(3, 0.962799); 
  h_CBET_EE->SetBinContent(5, 0.979829); 
  h_CBET_EE->SetBinContent(7, 0.980821); 
  h_CBET_EE->SetBinContent(9, 0.988695); 
  h_CBET_EE->SetBinContent(11, 0.990339); 
  h_CBET_EE->SetBinContent(13, 0.993176); 
  h_CBET_EE->SetBinContent(15, 0.996146); 
  h_CBET_EE->SetBinContent(17, 0.997999); 
  h_CBET_EE->SetBinContent(19, 0.999819); 
  h_CBET_EE->SetBinContent(21, 1.0008); 
  h_CBET_EE->SetBinContent(23, 1.00238); 
  h_CBET_EE->SetBinContent(25, 1.00312); 
  h_CBET_EE->SetBinContent(27, 1.00503); 
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
