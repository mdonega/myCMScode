#ifndef scCorrectionsR9ETAET_h                                              
#define scCorrectionsR9ETAET_h                                              
#include "TFile.h"                                                      
#include "TH1F.h"				                       
  	                                                               
Double_t applyScCorrectionsR9Eta(Double_t eta, Double_t R9){  
  	                                                               
  const Int_t    nBinsEta = 14;                    
  Double_t       leftEta  [14];                   
  Double_t       rightEta [14];                   
  const Int_t    nBinsR9  = 14;                     
  Double_t       leftR9  [14];                      
  Double_t       rightR9 [14];                      
  Double_t R9bins  [28];                    
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
  leftR9[0] =  0 ; 
  leftR9[1] =  0.2 ; 
  leftR9[2] =  0.4 ; 
  leftR9[3] =  0.5 ; 
  leftR9[4] =  0.6 ; 
  leftR9[5] =  0.7 ; 
  leftR9[6] =  0.8 ; 
  leftR9[7] =  0.82 ; 
  leftR9[8] =  0.84 ; 
  leftR9[9] =  0.86 ; 
  leftR9[10] =  0.88 ; 
  leftR9[11] =  0.9 ; 
  leftR9[12] =  0.92 ; 
  leftR9[13] =  0.94 ; 
  rightR9[0] =  0.2 ; 
  rightR9[1] =  0.4 ; 
  rightR9[2] =  0.5 ; 
  rightR9[3] =  0.6 ; 
  rightR9[4] =  0.7 ; 
  rightR9[5] =  0.8 ; 
  rightR9[6] =  0.82 ; 
  rightR9[7] =  0.84 ; 
  rightR9[8] =  0.86 ; 
  rightR9[9] =  0.88 ; 
  rightR9[10] =  0.9 ; 
  rightR9[11] =  0.92 ; 
  rightR9[12] =  0.94 ; 
  rightR9[13] =  0.95 ; 
  R9bins[0] =  0 ; 
  R9bins[1] =  0.2 ; 
  R9bins[2] =  0.2 ; 
  R9bins[3] =  0.4 ; 
  R9bins[4] =  0.4 ; 
  R9bins[5] =  0.5 ; 
  R9bins[6] =  0.5 ; 
  R9bins[7] =  0.6 ; 
  R9bins[8] =  0.6 ; 
  R9bins[9] =  0.7 ; 
  R9bins[10] =  0.7 ; 
  R9bins[11] =  0.8 ; 
  R9bins[12] =  0.8 ; 
  R9bins[13] =  0.82 ; 
  R9bins[14] =  0.82 ; 
  R9bins[15] =  0.84 ; 
  R9bins[16] =  0.84 ; 
  R9bins[17] =  0.86 ; 
  R9bins[18] =  0.86 ; 
  R9bins[19] =  0.88 ; 
  R9bins[20] =  0.88 ; 
  R9bins[21] =  0.9 ; 
  R9bins[22] =  0.9 ; 
  R9bins[23] =  0.92 ; 
  R9bins[24] =  0.92 ; 
  R9bins[25] =  0.94 ; 
  R9bins[26] =  0.94 ; 
  R9bins[27] =  0.95 ; 
  for (Int_t i = 0; i<nBinsEta; ++i){                                                   
    h_corr[i] = new TH1F(Form("h_corr_%d",i),Form("h_corr_%d",i),nBinsR9*2-1, R9bins);  
  }                                                                                     
  h_corr[0]->SetBinContent(1,1 );
  h_corr[0]->SetBinContent(3,1 );
  h_corr[0]->SetBinContent(5,0.998776 );
  h_corr[0]->SetBinContent(7,1.00102 );
  h_corr[0]->SetBinContent(9,1.00103 );
  h_corr[0]->SetBinContent(11,1.00341 );
  h_corr[0]->SetBinContent(13,1.00344 );
  h_corr[0]->SetBinContent(15,1.00268 );
  h_corr[0]->SetBinContent(17,1.00174 );
  h_corr[0]->SetBinContent(19,1.00261 );
  h_corr[0]->SetBinContent(21,1.00304 );
  h_corr[0]->SetBinContent(23,1.00264 );
  h_corr[0]->SetBinContent(25,1.00263 );
  h_corr[0]->SetBinContent(27,1.00263 );

  h_corr[1]->SetBinContent(1,1 );
  h_corr[1]->SetBinContent(3,1 );
  h_corr[1]->SetBinContent(5,0.995641 );
  h_corr[1]->SetBinContent(7,0.999235 );
  h_corr[1]->SetBinContent(9,0.999492 );
  h_corr[1]->SetBinContent(11,1.00068 );
  h_corr[1]->SetBinContent(13,1.00117 );
  h_corr[1]->SetBinContent(15,1.00254 );
  h_corr[1]->SetBinContent(17,1.00221 );
  h_corr[1]->SetBinContent(19,1.00142 );
  h_corr[1]->SetBinContent(21,1.00156 );
  h_corr[1]->SetBinContent(23,1.00119 );
  h_corr[1]->SetBinContent(25,1.00222 );
  h_corr[1]->SetBinContent(27,1.00222 );

  h_corr[2]->SetBinContent(1,1 );
  h_corr[2]->SetBinContent(3,0.982465 );
  h_corr[2]->SetBinContent(5,0.995672 );
  h_corr[2]->SetBinContent(7,0.996706 );
  h_corr[2]->SetBinContent(9,0.997927 );
  h_corr[2]->SetBinContent(11,0.999954 );
  h_corr[2]->SetBinContent(13,0.999395 );
  h_corr[2]->SetBinContent(15,1.00167 );
  h_corr[2]->SetBinContent(17,0.999485 );
  h_corr[2]->SetBinContent(19,1.00022 );
  h_corr[2]->SetBinContent(21,1.00067 );
  h_corr[2]->SetBinContent(23,1.00039 );
  h_corr[2]->SetBinContent(25,1.00094 );
  h_corr[2]->SetBinContent(27,1.00222 );

  h_corr[3]->SetBinContent(1,1 );
  h_corr[3]->SetBinContent(3,0.982465 );
  h_corr[3]->SetBinContent(5,0.996378 );
  h_corr[3]->SetBinContent(7,0.990778 );
  h_corr[3]->SetBinContent(9,0.996487 );
  h_corr[3]->SetBinContent(11,0.995288 );
  h_corr[3]->SetBinContent(13,0.993327 );
  h_corr[3]->SetBinContent(15,0.998395 );
  h_corr[3]->SetBinContent(17,0.997371 );
  h_corr[3]->SetBinContent(19,0.997396 );
  h_corr[3]->SetBinContent(21,0.998245 );
  h_corr[3]->SetBinContent(23,0.998556 );
  h_corr[3]->SetBinContent(25,0.999365 );
  h_corr[3]->SetBinContent(27,1.00222 );

  h_corr[4]->SetBinContent(1,1 );
  h_corr[4]->SetBinContent(3,0.96602 );
  h_corr[4]->SetBinContent(5,0.974659 );
  h_corr[4]->SetBinContent(7,0.974726 );
  h_corr[4]->SetBinContent(9,0.982575 );
  h_corr[4]->SetBinContent(11,0.98788 );
  h_corr[4]->SetBinContent(13,0.988248 );
  h_corr[4]->SetBinContent(15,0.990609 );
  h_corr[4]->SetBinContent(17,0.993097 );
  h_corr[4]->SetBinContent(19,0.994659 );
  h_corr[4]->SetBinContent(21,0.993562 );
  h_corr[4]->SetBinContent(23,0.995685 );
  h_corr[4]->SetBinContent(25,0.99703 );
  h_corr[4]->SetBinContent(27,1.00222 );

  h_corr[5]->SetBinContent(1,1 );
  h_corr[5]->SetBinContent(3,0.951241 );
  h_corr[5]->SetBinContent(5,0.941814 );
  h_corr[5]->SetBinContent(7,0.955708 );
  h_corr[5]->SetBinContent(9,0.972912 );
  h_corr[5]->SetBinContent(11,0.974974 );
  h_corr[5]->SetBinContent(13,0.981191 );
  h_corr[5]->SetBinContent(15,0.983683 );
  h_corr[5]->SetBinContent(17,0.985883 );
  h_corr[5]->SetBinContent(19,0.987019 );
  h_corr[5]->SetBinContent(21,0.988677 );
  h_corr[5]->SetBinContent(23,0.992103 );
  h_corr[5]->SetBinContent(25,0.994554 );
  h_corr[5]->SetBinContent(27,1.00222 );

  h_corr[6]->SetBinContent(1,4.71612 );
  h_corr[6]->SetBinContent(3,0.891618 );
  h_corr[6]->SetBinContent(5,0.9211 );
  h_corr[6]->SetBinContent(7,0.941753 );
  h_corr[6]->SetBinContent(9,0.957315 );
  h_corr[6]->SetBinContent(11,0.967645 );
  h_corr[6]->SetBinContent(13,0.974541 );
  h_corr[6]->SetBinContent(15,0.976461 );
  h_corr[6]->SetBinContent(17,0.9787 );
  h_corr[6]->SetBinContent(19,0.982104 );
  h_corr[6]->SetBinContent(21,0.983332 );
  h_corr[6]->SetBinContent(23,0.986802 );
  h_corr[6]->SetBinContent(25,0.989593 );
  h_corr[6]->SetBinContent(27,1.00222 );

  h_corr[7]->SetBinContent(1,10.1658 );
  h_corr[7]->SetBinContent(3,0.853095 );
  h_corr[7]->SetBinContent(5,0.899299 );
  h_corr[7]->SetBinContent(7,0.868995 );
  h_corr[7]->SetBinContent(9,0.892945 );
  h_corr[7]->SetBinContent(11,0.967645 );
  h_corr[7]->SetBinContent(13,0.938428 );
  h_corr[7]->SetBinContent(15,0.940741 );
  h_corr[7]->SetBinContent(17,0.944251 );
  h_corr[7]->SetBinContent(19,0.949137 );
  h_corr[7]->SetBinContent(21,0.95314 );
  h_corr[7]->SetBinContent(23,0.956699 );
  h_corr[7]->SetBinContent(25,0.964138 );
  h_corr[7]->SetBinContent(27,0.966389 );

  h_corr[8]->SetBinContent(1,0.935697 );
  h_corr[8]->SetBinContent(3,0.828614 );
  h_corr[8]->SetBinContent(5,0.859276 );
  h_corr[8]->SetBinContent(7,0.861129 );
  h_corr[8]->SetBinContent(9,0.87682 );
  h_corr[8]->SetBinContent(11,0.967645 );
  h_corr[8]->SetBinContent(13,0.930869 );
  h_corr[8]->SetBinContent(15,0.935323 );
  h_corr[8]->SetBinContent(17,0.940227 );
  h_corr[8]->SetBinContent(19,0.947877 );
  h_corr[8]->SetBinContent(21,0.95334 );
  h_corr[8]->SetBinContent(23,0.962415 );
  h_corr[8]->SetBinContent(25,0.965858 );
  h_corr[8]->SetBinContent(27,0.972506 );

  h_corr[9]->SetBinContent(1,1.00732 );
  h_corr[9]->SetBinContent(3,9.18959 );
  h_corr[9]->SetBinContent(5,0.875887 );
  h_corr[9]->SetBinContent(7,0.861385 );
  h_corr[9]->SetBinContent(9,0.873724 );
  h_corr[9]->SetBinContent(11,0.905695 );
  h_corr[9]->SetBinContent(13,0.918231 );
  h_corr[9]->SetBinContent(15,0.926491 );
  h_corr[9]->SetBinContent(17,0.932529 );
  h_corr[9]->SetBinContent(19,0.942108 );
  h_corr[9]->SetBinContent(21,0.950134 );
  h_corr[9]->SetBinContent(23,0.960518 );
  h_corr[9]->SetBinContent(25,0.968164 );
  h_corr[9]->SetBinContent(27,0.97405 );

  h_corr[10]->SetBinContent(1,1.00732 );
  h_corr[10]->SetBinContent(3,9.18959 );
  h_corr[10]->SetBinContent(5,0.875887 );
  h_corr[10]->SetBinContent(7,0.866745 );
  h_corr[10]->SetBinContent(9,0.880266 );
  h_corr[10]->SetBinContent(11,0.916892 );
  h_corr[10]->SetBinContent(13,0.921567 );
  h_corr[10]->SetBinContent(15,0.93273 );
  h_corr[10]->SetBinContent(17,0.94018 );
  h_corr[10]->SetBinContent(19,0.951188 );
  h_corr[10]->SetBinContent(21,0.957874 );
  h_corr[10]->SetBinContent(23,0.962303 );
  h_corr[10]->SetBinContent(25,0.972149 );
  h_corr[10]->SetBinContent(27,0.977245 );

  h_corr[11]->SetBinContent(1,1.00732 );
  h_corr[11]->SetBinContent(3,9.18959 );
  h_corr[11]->SetBinContent(5,0.875887 );
  h_corr[11]->SetBinContent(7,0.866745 );
  h_corr[11]->SetBinContent(9,0.880266 );
  h_corr[11]->SetBinContent(11,0.916697 );
  h_corr[11]->SetBinContent(13,0.921567 );
  h_corr[11]->SetBinContent(15,0.927691 );
  h_corr[11]->SetBinContent(17,0.938931 );
  h_corr[11]->SetBinContent(19,0.94323 );
  h_corr[11]->SetBinContent(21,0.965543 );
  h_corr[11]->SetBinContent(23,0.964583 );
  h_corr[11]->SetBinContent(25,0.97299 );
  h_corr[11]->SetBinContent(27,0.978466 );

  h_corr[12]->SetBinContent(1,1.00732 );
  h_corr[12]->SetBinContent(3,9.18959 );
  h_corr[12]->SetBinContent(5,0.37359 );
  h_corr[12]->SetBinContent(7,-2.94507 );
  h_corr[12]->SetBinContent(9,0.880266 );
  h_corr[12]->SetBinContent(11,1.09211 );
  h_corr[12]->SetBinContent(13,0.921567 );
  h_corr[12]->SetBinContent(15,0.927691 );
  h_corr[12]->SetBinContent(17,0.936567 );
  h_corr[12]->SetBinContent(19,0.938838 );
  h_corr[12]->SetBinContent(21,0.955022 );
  h_corr[12]->SetBinContent(23,0.959681 );
  h_corr[12]->SetBinContent(25,0.973592 );
  h_corr[12]->SetBinContent(27,0.978348 );

  h_corr[13]->SetBinContent(1,1.00732 );
  h_corr[13]->SetBinContent(3,9.18959 );
  h_corr[13]->SetBinContent(5,0.37359 );
  h_corr[13]->SetBinContent(7,-2.94507 );
  h_corr[13]->SetBinContent(9,0.880266 );
  h_corr[13]->SetBinContent(11,1.09211 );
  h_corr[13]->SetBinContent(13,0.921567 );
  h_corr[13]->SetBinContent(15,0.927691 );
  h_corr[13]->SetBinContent(17,0.936567 );
  h_corr[13]->SetBinContent(19,0.938838 );
  h_corr[13]->SetBinContent(21,0.945808 );
  h_corr[13]->SetBinContent(23,0.961921 );
  h_corr[13]->SetBinContent(25,0.973602 );
  h_corr[13]->SetBinContent(27,0.978514 );

   Int_t tmpEta = -1;                                                                                             
   for (Int_t iEta = 0; iEta < nBinsEta; ++iEta){								       
     if ( leftEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <rightEta[iEta] ){				       
       tmpEta = iEta;											       
     }													       
   }													       
   													       
   Int_t tmpR9 = -1;											       
   for (Int_t iR9 = 0; iR9 < nBinsR9; ++iR9){			       
     if (leftR9 [iR9]  <= R9 && R9 <rightR9 [iR9] ){      
       tmpR9 = iR9;										       
     }													       
   }													       
   if (tmpEta == -1 || tmpR9 == -1){									       
     for (Int_t i = 0; i < nBinsEta; ++i) delete h_corr[i];                                  		       
     return  1;												       
   }													       
   													       
   Double_t tmp = h_corr[tmpEta]->GetBinContent(2*tmpR9+1);				   		       
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
  h_CBET_EB->SetBinContent(1, 0.944517); 
  h_CBET_EB->SetBinContent(3, 0.995092); 
  h_CBET_EB->SetBinContent(5, 0.99676); 
  h_CBET_EB->SetBinContent(7, 0.997789); 
  h_CBET_EB->SetBinContent(9, 0.99777); 
  h_CBET_EB->SetBinContent(11, 0.999053); 
  h_CBET_EB->SetBinContent(13, 0.999068); 
  h_CBET_EB->SetBinContent(15, 0.999019); 
  h_CBET_EB->SetBinContent(17, 0.999523); 
  h_CBET_EB->SetBinContent(19, 0.999229); 
  h_CBET_EB->SetBinContent(21, 1.00058); 
  h_CBET_EB->SetBinContent(23, 1.23039); 
  h_CBET_EB->SetBinContent(25, 1.00072); 
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
  h_CBET_EE->SetBinContent(1, 0.916783); 
  h_CBET_EE->SetBinContent(3, 0.975242); 
  h_CBET_EE->SetBinContent(5, 0.984501); 
  h_CBET_EE->SetBinContent(7, 0.989607); 
  h_CBET_EE->SetBinContent(9, 0.993244); 
  h_CBET_EE->SetBinContent(11, 0.993486); 
  h_CBET_EE->SetBinContent(13, 0.996501); 
  h_CBET_EE->SetBinContent(15, 0.998265); 
  h_CBET_EE->SetBinContent(17, 0.999764); 
  h_CBET_EE->SetBinContent(19, 1.00099); 
  h_CBET_EE->SetBinContent(21, 1.00235); 
  h_CBET_EE->SetBinContent(23, 1.00325); 
  h_CBET_EE->SetBinContent(25, 1.00328); 
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
