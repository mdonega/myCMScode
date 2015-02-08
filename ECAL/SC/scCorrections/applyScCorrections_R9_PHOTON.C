#ifndef scCorrectionsR9ETAET_h                                              
#define scCorrectionsR9ETAET_h                                              
#include "TFile.h"                                                      
#include "TH1F.h"				                       
  	                                                               
Double_t applyScCorrectionsR9Eta(Double_t eta, Double_t R9){  
  	                                                               
  const Int_t    nBinsEta = 14;                    
  Double_t       leftEta  [14];                   
  Double_t       rightEta [14];                   
  const Int_t    nBinsR9  = 17;                     
  Double_t       leftR9  [17];                      
  Double_t       rightR9 [17];                      
  Double_t R9bins  [34];                    
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
  leftR9[4] =  0.55 ; 
  leftR9[5] =  0.6 ; 
  leftR9[6] =  0.65 ; 
  leftR9[7] =  0.7 ; 
  leftR9[8] =  0.75 ; 
  leftR9[9] =  0.8 ; 
  leftR9[10] =  0.82 ; 
  leftR9[11] =  0.84 ; 
  leftR9[12] =  0.86 ; 
  leftR9[13] =  0.88 ; 
  leftR9[14] =  0.9 ; 
  leftR9[15] =  0.92 ; 
  leftR9[16] =  0.94 ; 
  rightR9[0] =  0.2 ; 
  rightR9[1] =  0.4 ; 
  rightR9[2] =  0.5 ; 
  rightR9[3] =  0.55 ; 
  rightR9[4] =  0.6 ; 
  rightR9[5] =  0.65 ; 
  rightR9[6] =  0.7 ; 
  rightR9[7] =  0.75 ; 
  rightR9[8] =  0.8 ; 
  rightR9[9] =  0.82 ; 
  rightR9[10] =  0.84 ; 
  rightR9[11] =  0.86 ; 
  rightR9[12] =  0.88 ; 
  rightR9[13] =  0.9 ; 
  rightR9[14] =  0.92 ; 
  rightR9[15] =  0.94 ; 
  rightR9[16] =  0.95 ; 
  R9bins[0] =  0 ; 
  R9bins[1] =  0.2 ; 
  R9bins[2] =  0.2 ; 
  R9bins[3] =  0.4 ; 
  R9bins[4] =  0.4 ; 
  R9bins[5] =  0.5 ; 
  R9bins[6] =  0.5 ; 
  R9bins[7] =  0.55 ; 
  R9bins[8] =  0.55 ; 
  R9bins[9] =  0.6 ; 
  R9bins[10] =  0.6 ; 
  R9bins[11] =  0.65 ; 
  R9bins[12] =  0.65 ; 
  R9bins[13] =  0.7 ; 
  R9bins[14] =  0.7 ; 
  R9bins[15] =  0.75 ; 
  R9bins[16] =  0.75 ; 
  R9bins[17] =  0.8 ; 
  R9bins[18] =  0.8 ; 
  R9bins[19] =  0.82 ; 
  R9bins[20] =  0.82 ; 
  R9bins[21] =  0.84 ; 
  R9bins[22] =  0.84 ; 
  R9bins[23] =  0.86 ; 
  R9bins[24] =  0.86 ; 
  R9bins[25] =  0.88 ; 
  R9bins[26] =  0.88 ; 
  R9bins[27] =  0.9 ; 
  R9bins[28] =  0.9 ; 
  R9bins[29] =  0.92 ; 
  R9bins[30] =  0.92 ; 
  R9bins[31] =  0.94 ; 
  R9bins[32] =  0.94 ; 
  R9bins[33] =  0.95 ; 
  for (Int_t i = 0; i<nBinsEta; ++i){                                                   
    h_corr[i] = new TH1F(Form("h_corr_%d",i),Form("h_corr_%d",i),nBinsR9*2-1, R9bins);  
  }                                                                                     
  h_corr[0]->SetBinContent(1,1 );
  h_corr[0]->SetBinContent(3,1 );
  h_corr[0]->SetBinContent(5,0.999943 );
  h_corr[0]->SetBinContent(7,1.00439 );
  h_corr[0]->SetBinContent(9,1.00313 );
  h_corr[0]->SetBinContent(11,1.00566 );
  h_corr[0]->SetBinContent(13,1.00386 );
  h_corr[0]->SetBinContent(15,1.00256 );
  h_corr[0]->SetBinContent(17,1.00534 );
  h_corr[0]->SetBinContent(19,1.00353 );
  h_corr[0]->SetBinContent(21,1.00468 );
  h_corr[0]->SetBinContent(23,1.0045 );
  h_corr[0]->SetBinContent(25,1.00365 );
  h_corr[0]->SetBinContent(27,1.00421 );
  h_corr[0]->SetBinContent(29,1.00367 );
  h_corr[0]->SetBinContent(31,1.00362 );
  h_corr[0]->SetBinContent(33,1.00362 );

  h_corr[1]->SetBinContent(1,1 );
  h_corr[1]->SetBinContent(3,1 );
  h_corr[1]->SetBinContent(5,1.00152 );
  h_corr[1]->SetBinContent(7,1.00357 );
  h_corr[1]->SetBinContent(9,0.998369 );
  h_corr[1]->SetBinContent(11,0.999684 );
  h_corr[1]->SetBinContent(13,1.00309 );
  h_corr[1]->SetBinContent(15,1.00298 );
  h_corr[1]->SetBinContent(17,1.00243 );
  h_corr[1]->SetBinContent(19,1.00378 );
  h_corr[1]->SetBinContent(21,1.00111 );
  h_corr[1]->SetBinContent(23,1.00281 );
  h_corr[1]->SetBinContent(25,1.00216 );
  h_corr[1]->SetBinContent(27,1.00334 );
  h_corr[1]->SetBinContent(29,1.00353 );
  h_corr[1]->SetBinContent(31,1.00355 );
  h_corr[1]->SetBinContent(33,1.00355 );

  h_corr[2]->SetBinContent(1,1 );
  h_corr[2]->SetBinContent(3,0.982168 );
  h_corr[2]->SetBinContent(5,1.00039 );
  h_corr[2]->SetBinContent(7,0.998773 );
  h_corr[2]->SetBinContent(9,1.00223 );
  h_corr[2]->SetBinContent(11,1.00167 );
  h_corr[2]->SetBinContent(13,0.998374 );
  h_corr[2]->SetBinContent(15,1.0009 );
  h_corr[2]->SetBinContent(17,1.00127 );
  h_corr[2]->SetBinContent(19,1.00115 );
  h_corr[2]->SetBinContent(21,1.00212 );
  h_corr[2]->SetBinContent(23,1.00241 );
  h_corr[2]->SetBinContent(25,1.00171 );
  h_corr[2]->SetBinContent(27,1.00268 );
  h_corr[2]->SetBinContent(29,1.00238 );
  h_corr[2]->SetBinContent(31,1.00259 );
  h_corr[2]->SetBinContent(33,1.00355 );

  h_corr[3]->SetBinContent(1,1 );
  h_corr[3]->SetBinContent(3,0.982168 );
  h_corr[3]->SetBinContent(5,0.986905 );
  h_corr[3]->SetBinContent(7,0.990583 );
  h_corr[3]->SetBinContent(9,0.990099 );
  h_corr[3]->SetBinContent(11,0.995894 );
  h_corr[3]->SetBinContent(13,0.992576 );
  h_corr[3]->SetBinContent(15,0.998568 );
  h_corr[3]->SetBinContent(17,0.997684 );
  h_corr[3]->SetBinContent(19,0.999103 );
  h_corr[3]->SetBinContent(21,0.998777 );
  h_corr[3]->SetBinContent(23,0.997117 );
  h_corr[3]->SetBinContent(25,0.999349 );
  h_corr[3]->SetBinContent(27,0.99905 );
  h_corr[3]->SetBinContent(29,0.999951 );
  h_corr[3]->SetBinContent(31,1.00124 );
  h_corr[3]->SetBinContent(33,1.00355 );

  h_corr[4]->SetBinContent(1,1 );
  h_corr[4]->SetBinContent(3,0.982633 );
  h_corr[4]->SetBinContent(5,0.977806 );
  h_corr[4]->SetBinContent(7,0.982302 );
  h_corr[4]->SetBinContent(9,0.983167 );
  h_corr[4]->SetBinContent(11,0.98937 );
  h_corr[4]->SetBinContent(13,0.989981 );
  h_corr[4]->SetBinContent(15,0.993774 );
  h_corr[4]->SetBinContent(17,0.99112 );
  h_corr[4]->SetBinContent(19,0.992916 );
  h_corr[4]->SetBinContent(21,0.99361 );
  h_corr[4]->SetBinContent(23,0.99735 );
  h_corr[4]->SetBinContent(25,0.995403 );
  h_corr[4]->SetBinContent(27,0.995701 );
  h_corr[4]->SetBinContent(29,0.99918 );
  h_corr[4]->SetBinContent(31,0.999634 );
  h_corr[4]->SetBinContent(33,1.00355 );

  h_corr[5]->SetBinContent(1,1 );
  h_corr[5]->SetBinContent(3,0.953911 );
  h_corr[5]->SetBinContent(5,0.972472 );
  h_corr[5]->SetBinContent(7,0.972494 );
  h_corr[5]->SetBinContent(9,0.972314 );
  h_corr[5]->SetBinContent(11,0.973071 );
  h_corr[5]->SetBinContent(13,0.977458 );
  h_corr[5]->SetBinContent(15,0.98013 );
  h_corr[5]->SetBinContent(17,0.983699 );
  h_corr[5]->SetBinContent(19,0.98635 );
  h_corr[5]->SetBinContent(21,0.988131 );
  h_corr[5]->SetBinContent(23,0.988876 );
  h_corr[5]->SetBinContent(25,0.992301 );
  h_corr[5]->SetBinContent(27,0.993211 );
  h_corr[5]->SetBinContent(29,0.995093 );
  h_corr[5]->SetBinContent(31,0.997583 );
  h_corr[5]->SetBinContent(33,1.00355 );

  h_corr[6]->SetBinContent(1,1 );
  h_corr[6]->SetBinContent(3,0.908394 );
  h_corr[6]->SetBinContent(5,0.944249 );
  h_corr[6]->SetBinContent(7,0.952616 );
  h_corr[6]->SetBinContent(9,0.957175 );
  h_corr[6]->SetBinContent(11,0.964384 );
  h_corr[6]->SetBinContent(13,0.965502 );
  h_corr[6]->SetBinContent(15,0.969432 );
  h_corr[6]->SetBinContent(17,0.97627 );
  h_corr[6]->SetBinContent(19,0.978303 );
  h_corr[6]->SetBinContent(21,0.981185 );
  h_corr[6]->SetBinContent(23,0.984923 );
  h_corr[6]->SetBinContent(25,0.987002 );
  h_corr[6]->SetBinContent(27,0.98914 );
  h_corr[6]->SetBinContent(29,0.993234 );
  h_corr[6]->SetBinContent(31,0.996001 );
  h_corr[6]->SetBinContent(33,1.00355 );

  h_corr[7]->SetBinContent(1,1 );
  h_corr[7]->SetBinContent(3,0.855321 );
  h_corr[7]->SetBinContent(5,0.877453 );
  h_corr[7]->SetBinContent(7,0.921625 );
  h_corr[7]->SetBinContent(9,0.908532 );
  h_corr[7]->SetBinContent(11,0.916271 );
  h_corr[7]->SetBinContent(13,0.925257 );
  h_corr[7]->SetBinContent(15,0.92492 );
  h_corr[7]->SetBinContent(17,0.934162 );
  h_corr[7]->SetBinContent(19,0.945068 );
  h_corr[7]->SetBinContent(21,0.947231 );
  h_corr[7]->SetBinContent(23,0.94911 );
  h_corr[7]->SetBinContent(25,0.956037 );
  h_corr[7]->SetBinContent(27,0.960095 );
  h_corr[7]->SetBinContent(29,0.962878 );
  h_corr[7]->SetBinContent(31,0.968421 );
  h_corr[7]->SetBinContent(33,0.972673 );

  h_corr[8]->SetBinContent(1,1 );
  h_corr[8]->SetBinContent(3,0.832724 );
  h_corr[8]->SetBinContent(5,0.890843 );
  h_corr[8]->SetBinContent(7,0.892871 );
  h_corr[8]->SetBinContent(9,0.873541 );
  h_corr[8]->SetBinContent(11,0.91176 );
  h_corr[8]->SetBinContent(13,0.906798 );
  h_corr[8]->SetBinContent(15,0.906414 );
  h_corr[8]->SetBinContent(17,0.926098 );
  h_corr[8]->SetBinContent(19,0.935472 );
  h_corr[8]->SetBinContent(21,0.93933 );
  h_corr[8]->SetBinContent(23,0.943761 );
  h_corr[8]->SetBinContent(25,0.952256 );
  h_corr[8]->SetBinContent(27,0.953924 );
  h_corr[8]->SetBinContent(29,0.96216 );
  h_corr[8]->SetBinContent(31,0.971198 );
  h_corr[8]->SetBinContent(33,0.977903 );

  h_corr[9]->SetBinContent(1,1 );
  h_corr[9]->SetBinContent(3,0.872876 );
  h_corr[9]->SetBinContent(5,0.881787 );
  h_corr[9]->SetBinContent(7,0.875539 );
  h_corr[9]->SetBinContent(9,0.889751 );
  h_corr[9]->SetBinContent(11,0.904228 );
  h_corr[9]->SetBinContent(13,0.888626 );
  h_corr[9]->SetBinContent(15,0.90753 );
  h_corr[9]->SetBinContent(17,0.921484 );
  h_corr[9]->SetBinContent(19,0.936064 );
  h_corr[9]->SetBinContent(21,0.932156 );
  h_corr[9]->SetBinContent(23,0.942542 );
  h_corr[9]->SetBinContent(25,0.946949 );
  h_corr[9]->SetBinContent(27,0.954372 );
  h_corr[9]->SetBinContent(29,0.961591 );
  h_corr[9]->SetBinContent(31,0.969418 );
  h_corr[9]->SetBinContent(33,0.976888 );

  h_corr[10]->SetBinContent(1,1 );
  h_corr[10]->SetBinContent(3,0.872876 );
  h_corr[10]->SetBinContent(5,0.881787 );
  h_corr[10]->SetBinContent(7,0.875539 );
  h_corr[10]->SetBinContent(9,0.889751 );
  h_corr[10]->SetBinContent(11,0.939144 );
  h_corr[10]->SetBinContent(13,0.901311 );
  h_corr[10]->SetBinContent(15,0.909427 );
  h_corr[10]->SetBinContent(17,0.92246 );
  h_corr[10]->SetBinContent(19,0.93799 );
  h_corr[10]->SetBinContent(21,0.934188 );
  h_corr[10]->SetBinContent(23,0.938523 );
  h_corr[10]->SetBinContent(25,0.947867 );
  h_corr[10]->SetBinContent(27,0.956968 );
  h_corr[10]->SetBinContent(29,0.964185 );
  h_corr[10]->SetBinContent(31,0.972708 );
  h_corr[10]->SetBinContent(33,0.979595 );

  h_corr[11]->SetBinContent(1,1 );
  h_corr[11]->SetBinContent(3,0.93992 );
  h_corr[11]->SetBinContent(5,0.881787 );
  h_corr[11]->SetBinContent(7,0.875539 );
  h_corr[11]->SetBinContent(9,0.889751 );
  h_corr[11]->SetBinContent(11,0.939144 );
  h_corr[11]->SetBinContent(13,0.901311 );
  h_corr[11]->SetBinContent(15,0.909427 );
  h_corr[11]->SetBinContent(17,0.92246 );
  h_corr[11]->SetBinContent(19,0.93799 );
  h_corr[11]->SetBinContent(21,0.934188 );
  h_corr[11]->SetBinContent(23,0.94781 );
  h_corr[11]->SetBinContent(25,0.953525 );
  h_corr[11]->SetBinContent(27,0.961487 );
  h_corr[11]->SetBinContent(29,0.966214 );
  h_corr[11]->SetBinContent(31,0.973934 );
  h_corr[11]->SetBinContent(33,0.978503 );

  h_corr[12]->SetBinContent(1,1 );
  h_corr[12]->SetBinContent(3,0.93992 );
  h_corr[12]->SetBinContent(5,0.371909 );
  h_corr[12]->SetBinContent(7,0.683397 );
  h_corr[12]->SetBinContent(9,0.447894 );
  h_corr[12]->SetBinContent(11,0.939144 );
  h_corr[12]->SetBinContent(13,0.901311 );
  h_corr[12]->SetBinContent(15,0.909427 );
  h_corr[12]->SetBinContent(17,0.92246 );
  h_corr[12]->SetBinContent(19,0.93799 );
  h_corr[12]->SetBinContent(21,0.934188 );
  h_corr[12]->SetBinContent(23,0.94781 );
  h_corr[12]->SetBinContent(25,0.963911 );
  h_corr[12]->SetBinContent(27,0.968525 );
  h_corr[12]->SetBinContent(29,0.966917 );
  h_corr[12]->SetBinContent(31,0.97299 );
  h_corr[12]->SetBinContent(33,0.97755 );

  h_corr[13]->SetBinContent(1,1 );
  h_corr[13]->SetBinContent(3,0.93992 );
  h_corr[13]->SetBinContent(5,0.371909 );
  h_corr[13]->SetBinContent(7,0.683397 );
  h_corr[13]->SetBinContent(9,0.447894 );
  h_corr[13]->SetBinContent(11,0.939144 );
  h_corr[13]->SetBinContent(13,0.901311 );
  h_corr[13]->SetBinContent(15,0.909427 );
  h_corr[13]->SetBinContent(17,0.92246 );
  h_corr[13]->SetBinContent(19,0.93799 );
  h_corr[13]->SetBinContent(21,0.934188 );
  h_corr[13]->SetBinContent(23,0.94781 );
  h_corr[13]->SetBinContent(25,0.963911 );
  h_corr[13]->SetBinContent(27,0.955513 );
  h_corr[13]->SetBinContent(29,0.966688 );
  h_corr[13]->SetBinContent(31,0.969602 );
  h_corr[13]->SetBinContent(33,0.977446 );

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
  h_CBET_EB->SetBinContent(1, 0.979785); 
  h_CBET_EB->SetBinContent(3, 1.00237); 
  h_CBET_EB->SetBinContent(5, 1.00059); 
  h_CBET_EB->SetBinContent(7, 1.00063); 
  h_CBET_EB->SetBinContent(9, 1.00016); 
  h_CBET_EB->SetBinContent(11, 1.00036); 
  h_CBET_EB->SetBinContent(13, 1.00057); 
  h_CBET_EB->SetBinContent(15, 1.00048); 
  h_CBET_EB->SetBinContent(17, 1.00046); 
  h_CBET_EB->SetBinContent(19, 1.00024); 
  h_CBET_EB->SetBinContent(21, 0.999924); 
  h_CBET_EB->SetBinContent(23, 0.99936); 
  h_CBET_EB->SetBinContent(25, 0.999745); 
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
  h_CBET_EE->SetBinContent(1, 1.0047); 
  h_CBET_EE->SetBinContent(3, 1.00364); 
  h_CBET_EE->SetBinContent(5, 1.0031); 
  h_CBET_EE->SetBinContent(7, 1.00025); 
  h_CBET_EE->SetBinContent(9, 0.99925); 
  h_CBET_EE->SetBinContent(11, 0.998472); 
  h_CBET_EE->SetBinContent(13, 0.999057); 
  h_CBET_EE->SetBinContent(15, 0.998511); 
  h_CBET_EE->SetBinContent(17, 0.999667); 
  h_CBET_EE->SetBinContent(19, 0.998984); 
  h_CBET_EE->SetBinContent(21, 0.999958); 
  h_CBET_EE->SetBinContent(23, 0.999955); 
  h_CBET_EE->SetBinContent(25, 0.999846); 
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
