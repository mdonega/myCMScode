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
  h_corr[0]->SetBinContent(1,1.00163 );
  h_corr[0]->SetBinContent(3,1 );
  h_corr[0]->SetBinContent(5,1.00464 );
  h_corr[0]->SetBinContent(7,1.00434 );
  h_corr[0]->SetBinContent(9,1.00358 );
  h_corr[0]->SetBinContent(11,1.00318 );
  h_corr[0]->SetBinContent(13,1.00276 );
  h_corr[0]->SetBinContent(15,1.00351 );
  h_corr[0]->SetBinContent(17,1.00253 );
  h_corr[0]->SetBinContent(19,1.00155 );
  h_corr[0]->SetBinContent(21,1.00147 );
  h_corr[0]->SetBinContent(23,1.00243 );
  h_corr[0]->SetBinContent(25,1.00023 );
  h_corr[0]->SetBinContent(27,1.00101 );
  h_corr[0]->SetBinContent(29,1.00203 );
  h_corr[0]->SetBinContent(31,0.997828 );
  h_corr[0]->SetBinContent(33,1.00155 );
  h_corr[0]->SetBinContent(35,0.998511 );

  h_corr[1]->SetBinContent(1,1.00288 );
  h_corr[1]->SetBinContent(3,1.00254 );
  h_corr[1]->SetBinContent(5,1.00432 );
  h_corr[1]->SetBinContent(7,1.00419 );
  h_corr[1]->SetBinContent(9,1.00307 );
  h_corr[1]->SetBinContent(11,1.00237 );
  h_corr[1]->SetBinContent(13,1.00167 );
  h_corr[1]->SetBinContent(15,1.00176 );
  h_corr[1]->SetBinContent(17,1.00063 );
  h_corr[1]->SetBinContent(19,1.00042 );
  h_corr[1]->SetBinContent(21,1.00004 );
  h_corr[1]->SetBinContent(23,1.0017 );
  h_corr[1]->SetBinContent(25,0.999315 );
  h_corr[1]->SetBinContent(27,1.00316 );
  h_corr[1]->SetBinContent(29,1.00149 );
  h_corr[1]->SetBinContent(31,1.0012 );
  h_corr[1]->SetBinContent(33,0.99689 );
  h_corr[1]->SetBinContent(35,0.989029 );

  h_corr[2]->SetBinContent(1,1.00204 );
  h_corr[2]->SetBinContent(3,1.00236 );
  h_corr[2]->SetBinContent(5,1.00316 );
  h_corr[2]->SetBinContent(7,1.00274 );
  h_corr[2]->SetBinContent(9,1.00195 );
  h_corr[2]->SetBinContent(11,1.00102 );
  h_corr[2]->SetBinContent(13,1.00052 );
  h_corr[2]->SetBinContent(15,1.00116 );
  h_corr[2]->SetBinContent(17,0.999752 );
  h_corr[2]->SetBinContent(19,0.999949 );
  h_corr[2]->SetBinContent(21,0.999388 );
  h_corr[2]->SetBinContent(23,0.997655 );
  h_corr[2]->SetBinContent(25,0.999066 );
  h_corr[2]->SetBinContent(27,0.996756 );
  h_corr[2]->SetBinContent(29,0.997856 );
  h_corr[2]->SetBinContent(31,0.99863 );
  h_corr[2]->SetBinContent(33,0.995514 );
  h_corr[2]->SetBinContent(35,0.98848 );

  h_corr[3]->SetBinContent(1,1.00249 );
  h_corr[3]->SetBinContent(3,1.00149 );
  h_corr[3]->SetBinContent(5,1.00215 );
  h_corr[3]->SetBinContent(7,1.00106 );
  h_corr[3]->SetBinContent(9,1.00043 );
  h_corr[3]->SetBinContent(11,0.999124 );
  h_corr[3]->SetBinContent(13,0.999621 );
  h_corr[3]->SetBinContent(15,0.998207 );
  h_corr[3]->SetBinContent(17,0.997971 );
  h_corr[3]->SetBinContent(19,0.995548 );
  h_corr[3]->SetBinContent(21,0.997858 );
  h_corr[3]->SetBinContent(23,0.993692 );
  h_corr[3]->SetBinContent(25,0.992988 );
  h_corr[3]->SetBinContent(27,0.992706 );
  h_corr[3]->SetBinContent(29,0.991806 );
  h_corr[3]->SetBinContent(31,0.989482 );
  h_corr[3]->SetBinContent(33,0.986657 );
  h_corr[3]->SetBinContent(35,0.985444 );

  h_corr[4]->SetBinContent(1,0.99968 );
  h_corr[4]->SetBinContent(3,0.999966 );
  h_corr[4]->SetBinContent(5,1.00002 );
  h_corr[4]->SetBinContent(7,0.998999 );
  h_corr[4]->SetBinContent(9,0.997963 );
  h_corr[4]->SetBinContent(11,0.9964 );
  h_corr[4]->SetBinContent(13,0.995725 );
  h_corr[4]->SetBinContent(15,0.995092 );
  h_corr[4]->SetBinContent(17,0.9936 );
  h_corr[4]->SetBinContent(19,0.994345 );
  h_corr[4]->SetBinContent(21,0.993151 );
  h_corr[4]->SetBinContent(23,0.990551 );
  h_corr[4]->SetBinContent(25,0.990446 );
  h_corr[4]->SetBinContent(27,0.988923 );
  h_corr[4]->SetBinContent(29,0.989822 );
  h_corr[4]->SetBinContent(31,0.985518 );
  h_corr[4]->SetBinContent(33,0.980889 );
  h_corr[4]->SetBinContent(35,0.975655 );

  h_corr[5]->SetBinContent(1,0.997254 );
  h_corr[5]->SetBinContent(3,0.998469 );
  h_corr[5]->SetBinContent(5,0.997638 );
  h_corr[5]->SetBinContent(7,0.996065 );
  h_corr[5]->SetBinContent(9,0.993992 );
  h_corr[5]->SetBinContent(11,0.992692 );
  h_corr[5]->SetBinContent(13,0.991734 );
  h_corr[5]->SetBinContent(15,0.990257 );
  h_corr[5]->SetBinContent(17,0.988536 );
  h_corr[5]->SetBinContent(19,0.985603 );
  h_corr[5]->SetBinContent(21,0.986429 );
  h_corr[5]->SetBinContent(23,0.983022 );
  h_corr[5]->SetBinContent(25,0.983236 );
  h_corr[5]->SetBinContent(27,0.978145 );
  h_corr[5]->SetBinContent(29,0.976663 );
  h_corr[5]->SetBinContent(31,0.975238 );
  h_corr[5]->SetBinContent(33,0.971603 );
  h_corr[5]->SetBinContent(35,0.949003 );

  h_corr[6]->SetBinContent(1,0.995066 );
  h_corr[6]->SetBinContent(3,0.995199 );
  h_corr[6]->SetBinContent(5,0.99464 );
  h_corr[6]->SetBinContent(7,0.992723 );
  h_corr[6]->SetBinContent(9,0.990509 );
  h_corr[6]->SetBinContent(11,0.989786 );
  h_corr[6]->SetBinContent(13,0.988239 );
  h_corr[6]->SetBinContent(15,0.986557 );
  h_corr[6]->SetBinContent(17,0.984824 );
  h_corr[6]->SetBinContent(19,0.98333 );
  h_corr[6]->SetBinContent(21,0.981036 );
  h_corr[6]->SetBinContent(23,0.978641 );
  h_corr[6]->SetBinContent(25,0.978099 );
  h_corr[6]->SetBinContent(27,0.976751 );
  h_corr[6]->SetBinContent(29,0.974553 );
  h_corr[6]->SetBinContent(31,0.974278 );
  h_corr[6]->SetBinContent(33,0.965263 );
  h_corr[6]->SetBinContent(35,0.949003 );

  h_corr[7]->SetBinContent(1,0.974522 );
  h_corr[7]->SetBinContent(3,0.972059 );
  h_corr[7]->SetBinContent(5,0.968185 );
  h_corr[7]->SetBinContent(7,0.964734 );
  h_corr[7]->SetBinContent(9,0.966034 );
  h_corr[7]->SetBinContent(11,0.965556 );
  h_corr[7]->SetBinContent(13,0.960278 );
  h_corr[7]->SetBinContent(15,0.959152 );
  h_corr[7]->SetBinContent(17,0.956066 );
  h_corr[7]->SetBinContent(19,0.951752 );
  h_corr[7]->SetBinContent(21,0.951464 );
  h_corr[7]->SetBinContent(23,0.949419 );
  h_corr[7]->SetBinContent(25,0.940684 );
  h_corr[7]->SetBinContent(27,0.939051 );
  h_corr[7]->SetBinContent(29,0.939756 );
  h_corr[7]->SetBinContent(31,0.921095 );
  h_corr[7]->SetBinContent(33,0.907631 );
  h_corr[7]->SetBinContent(35,0.868708 );

  h_corr[8]->SetBinContent(1,0.979136 );
  h_corr[8]->SetBinContent(3,0.976923 );
  h_corr[8]->SetBinContent(5,0.972271 );
  h_corr[8]->SetBinContent(7,0.969452 );
  h_corr[8]->SetBinContent(9,0.967946 );
  h_corr[8]->SetBinContent(11,0.964341 );
  h_corr[8]->SetBinContent(13,0.960692 );
  h_corr[8]->SetBinContent(15,0.954939 );
  h_corr[8]->SetBinContent(17,0.949486 );
  h_corr[8]->SetBinContent(19,0.945554 );
  h_corr[8]->SetBinContent(21,0.944931 );
  h_corr[8]->SetBinContent(23,0.934204 );
  h_corr[8]->SetBinContent(25,0.926858 );
  h_corr[8]->SetBinContent(27,0.908754 );
  h_corr[8]->SetBinContent(29,0.90143 );
  h_corr[8]->SetBinContent(31,0.89686 );
  h_corr[8]->SetBinContent(33,0.86605 );
  h_corr[8]->SetBinContent(35,0.831657 );

  h_corr[9]->SetBinContent(1,0.982361 );
  h_corr[9]->SetBinContent(3,0.979519 );
  h_corr[9]->SetBinContent(5,0.975455 );
  h_corr[9]->SetBinContent(7,0.973602 );
  h_corr[9]->SetBinContent(9,0.970418 );
  h_corr[9]->SetBinContent(11,0.96463 );
  h_corr[9]->SetBinContent(13,0.959902 );
  h_corr[9]->SetBinContent(15,0.951912 );
  h_corr[9]->SetBinContent(17,0.946621 );
  h_corr[9]->SetBinContent(19,0.93773 );
  h_corr[9]->SetBinContent(21,0.916748 );
  h_corr[9]->SetBinContent(23,0.914251 );
  h_corr[9]->SetBinContent(25,0.903339 );
  h_corr[9]->SetBinContent(27,0.88225 );
  h_corr[9]->SetBinContent(29,0.876974 );
  h_corr[9]->SetBinContent(31,0.876348 );
  h_corr[9]->SetBinContent(33,0.844519 );
  h_corr[9]->SetBinContent(35,0.831657 );

  h_corr[10]->SetBinContent(1,0.986272 );
  h_corr[10]->SetBinContent(3,0.985674 );
  h_corr[10]->SetBinContent(5,0.981201 );
  h_corr[10]->SetBinContent(7,0.979792 );
  h_corr[10]->SetBinContent(9,0.97583 );
  h_corr[10]->SetBinContent(11,0.967866 );
  h_corr[10]->SetBinContent(13,0.970041 );
  h_corr[10]->SetBinContent(15,0.956418 );
  h_corr[10]->SetBinContent(17,0.946688 );
  h_corr[10]->SetBinContent(19,0.928366 );
  h_corr[10]->SetBinContent(21,0.911252 );
  h_corr[10]->SetBinContent(23,0.919512 );
  h_corr[10]->SetBinContent(25,0.903339 );
  h_corr[10]->SetBinContent(27,22.2762 );
  h_corr[10]->SetBinContent(29,0.876974 );
  h_corr[10]->SetBinContent(31,0.876348 );
  h_corr[10]->SetBinContent(33,0.844519 );
  h_corr[10]->SetBinContent(35,0.831657 );

  h_corr[11]->SetBinContent(1,0.988833 );
  h_corr[11]->SetBinContent(3,0.987518 );
  h_corr[11]->SetBinContent(5,0.984313 );
  h_corr[11]->SetBinContent(7,0.982003 );
  h_corr[11]->SetBinContent(9,0.977802 );
  h_corr[11]->SetBinContent(11,0.970163 );
  h_corr[11]->SetBinContent(13,0.964062 );
  h_corr[11]->SetBinContent(15,0.953966 );
  h_corr[11]->SetBinContent(17,0.935231 );
  h_corr[11]->SetBinContent(19,0.928366 );
  h_corr[11]->SetBinContent(21,0.911252 );
  h_corr[11]->SetBinContent(23,0.919512 );
  h_corr[11]->SetBinContent(25,0.903339 );
  h_corr[11]->SetBinContent(27,22.2762 );
  h_corr[11]->SetBinContent(29,0.876974 );
  h_corr[11]->SetBinContent(31,0.876348 );
  h_corr[11]->SetBinContent(33,0.844519 );
  h_corr[11]->SetBinContent(35,0.831657 );

  h_corr[12]->SetBinContent(1,0.990009 );
  h_corr[12]->SetBinContent(3,0.990131 );
  h_corr[12]->SetBinContent(5,0.98599 );
  h_corr[12]->SetBinContent(7,0.9834 );
  h_corr[12]->SetBinContent(9,0.978899 );
  h_corr[12]->SetBinContent(11,0.972062 );
  h_corr[12]->SetBinContent(13,0.969899 );
  h_corr[12]->SetBinContent(15,0.95688 );
  h_corr[12]->SetBinContent(17,0.935231 );
  h_corr[12]->SetBinContent(19,0.928366 );
  h_corr[12]->SetBinContent(21,0.911252 );
  h_corr[12]->SetBinContent(23,0.919512 );
  h_corr[12]->SetBinContent(25,0.903339 );
  h_corr[12]->SetBinContent(27,22.2762 );
  h_corr[12]->SetBinContent(29,0.876974 );
  h_corr[12]->SetBinContent(31,0.876348 );
  h_corr[12]->SetBinContent(33,0.844519 );
  h_corr[12]->SetBinContent(35,0.831657 );

  h_corr[13]->SetBinContent(1,0.990453 );
  h_corr[13]->SetBinContent(3,0.989741 );
  h_corr[13]->SetBinContent(5,0.987168 );
  h_corr[13]->SetBinContent(7,0.981397 );
  h_corr[13]->SetBinContent(9,0.974104 );
  h_corr[13]->SetBinContent(11,0.961228 );
  h_corr[13]->SetBinContent(13,0.963284 );
  h_corr[13]->SetBinContent(15,0.95688 );
  h_corr[13]->SetBinContent(17,0.935231 );
  h_corr[13]->SetBinContent(19,0.928366 );
  h_corr[13]->SetBinContent(21,0.911252 );
  h_corr[13]->SetBinContent(23,0.919512 );
  h_corr[13]->SetBinContent(25,0.903339 );
  h_corr[13]->SetBinContent(27,22.2762 );
  h_corr[13]->SetBinContent(29,0.876974 );
  h_corr[13]->SetBinContent(31,0.876348 );
  h_corr[13]->SetBinContent(33,0.844519 );
  h_corr[13]->SetBinContent(35,0.831657 );

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
  h_CBET_EB->SetBinContent(1, 0.972175); 
  h_CBET_EB->SetBinContent(3, 0.992809); 
  h_CBET_EB->SetBinContent(5, 0.996143); 
  h_CBET_EB->SetBinContent(7, 0.998399); 
  h_CBET_EB->SetBinContent(9, 0.999115); 
  h_CBET_EB->SetBinContent(11, 0.99918); 
  h_CBET_EB->SetBinContent(13, 0.999463); 
  h_CBET_EB->SetBinContent(15, 1.00011); 
  h_CBET_EB->SetBinContent(17, 1.00014); 
  h_CBET_EB->SetBinContent(19, 1.00018); 
  h_CBET_EB->SetBinContent(21, 1.00041); 
  h_CBET_EB->SetBinContent(23, 1.00049); 
  h_CBET_EB->SetBinContent(25, 1.00054); 
  h_CBET_EB->SetBinContent(27, 1.00064); 
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
  h_CBET_EE->SetBinContent(1, 0.928851); 
  h_CBET_EE->SetBinContent(3, 0.970676); 
  h_CBET_EE->SetBinContent(5, 0.982964); 
  h_CBET_EE->SetBinContent(7, 0.986517); 
  h_CBET_EE->SetBinContent(9, 0.99156); 
  h_CBET_EE->SetBinContent(11, 0.993459); 
  h_CBET_EE->SetBinContent(13, 0.995173); 
  h_CBET_EE->SetBinContent(15, 0.997663); 
  h_CBET_EE->SetBinContent(17, 0.998846); 
  h_CBET_EE->SetBinContent(19, 0.999834); 
  h_CBET_EE->SetBinContent(21, 1.00059); 
  h_CBET_EE->SetBinContent(23, 1.00128); 
  h_CBET_EE->SetBinContent(25, 1.00182); 
  h_CBET_EE->SetBinContent(27, 1.00424); 
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
