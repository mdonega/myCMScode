#include "TMath.h"

Double_t applyScCorrectionsBrEta(Double_t eta, Double_t sigmaPhiSigmaEta){ 

  bool DBG = false;

  // eta binning ------------------------------------------------------------------------------- 
  // 
  const Double_t etaCrackMin = 1.44; 
  const Double_t etaCrackMax = 1.56; 
   
  //STD 
  const Int_t    nBinsEta              = 14; 
  Double_t       leftEta  [nBinsEta]   = { 0.02, 0.25, 0.46, 0.81, 0.91, 1.01, 1.16,           etaCrackMax,  1.653,  1.8, 2.0, 2.2, 2.3, 2.4 };  
  Double_t       rightEta [nBinsEta]   = { 0.25, 0.42, 0.77, 0.91, 1.01, 1.13, etaCrackMin,    1.653,        1.8  ,  2.0, 2.2, 2.3, 2.4, 2.5 };  

  Double_t xcorr[nBinsEta];
  xcorr[0]=1.00227;
  xcorr[1]=1.00252;
  xcorr[2]=1.00225;
  xcorr[3]=1.00159;
  xcorr[4]=0.999475;
  xcorr[5]=0.997203;
  xcorr[6]=0.993886;
  xcorr[7]=0.971262;
  xcorr[8]=0.975922;
  xcorr[9]=0.979087;
  xcorr[10]=0.98495;
  xcorr[11]=0.98781;
  xcorr[12]=0.989546;
  xcorr[13]=0.989638;

  Double_t par0[nBinsEta]; 
  Double_t par1[nBinsEta]; 
  Double_t par2[nBinsEta]; 

  par0[0] = 1.00718;
  par1[0] = -0.00187886;
  par2[0] = 0 ;

  par0[1] = 1.00713;
  par1[1] = -0.00227574;
  par2[1] = 0 ;

  par0[2] = 1.00641;
  par1[2] = -0.00259935;
  par2[2] = 0 ;

  par0[3] = 1.00761;
  par1[3] = -0.00433692;
  par2[3] = 0 ;

  par0[4] = 1.00682;
  par1[4] = -0.00551324;
  par2[4] = 0 ;

  par0[5] = 1.0073;
  par1[5] = -0.00799669;
  par2[5] = 0 ;

  par0[6] = 1.00462;
  par1[6] = -0.00870057;
  par2[6] = 0 ;

  par0[7] = 0.972798;
  par1[7] = -0.000771577;
  par2[7] = -0.00276696;

  par0[8] = 0.981672;
  par1[8] = -0.00202028;
  par2[8] = -0.00471028;

  par0[9] = 0.98251;
  par1[9] = 0.00441308;
  par2[9] = -0.00809139;

  par0[10] = 0.986123;
  par1[10] = 0.00832913;
  par2[10] = -0.00944584;

  par0[11] = 0.990124;
  par1[11] = 0.00742879;
  par2[11] = -0.00960462;

  par0[12] = 0.990187;
  par1[12] = 0.0094608;
  par2[12] = -0.010172;

  par0[13] = 0.99372;
  par1[13] = 0.00560406;
  par2[13] = -0.00943169;


  // extra protections																					   
  // fix sigmaPhiSigmaEta boundaries 
  if (sigmaPhiSigmaEta < 0.8)  sigmaPhiSigmaEta = 0.8; 
  if (sigmaPhiSigmaEta > 5  )  sigmaPhiSigmaEta = 5; 

  // eta = 0																						   
  if (TMath::Abs(eta)  <  leftEta[0]            ) { eta = 0.02 ; }																   
  // outside acceptance																					   
  if (TMath::Abs(eta)  >=  rightEta[nBinsEta-1] ) { eta = 2.49; if (DBG) std::cout << " WARNING [applyScCorrections]: TMath::Abs(eta)  >=  rightEta[nBinsEta-1] " << std::endl;}  
  																								   
  Int_t tmpEta = -1;                                                                                                                                                                         
  for (Int_t iEta = 0; iEta < nBinsEta; ++iEta){								              								      	   
    if ( leftEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <rightEta[iEta] ){				       									      	   
      tmpEta = iEta;											       										   
    }													       										   
  }													       										           

  // Interpolation																					         
  Double_t tmpInter = 1;																				         
  // In eta cracks/gaps 																				         
  if (tmpEta == -1 ) { // need to interpolate    
    for (Int_t iEta = 0; iEta < nBinsEta-1; ++iEta){								       								         
      if (rightEta[iEta] <= TMath::Abs(eta) && TMath::Abs(eta) <leftEta[iEta+1] ){													         
	if (sigmaPhiSigmaEta >= 1.2)  tmpInter = ( par0[iEta] + sigmaPhiSigmaEta*par1[iEta] + sigmaPhiSigmaEta*sigmaPhiSigmaEta*par2[iEta] +  
						   par0[iEta+1] + sigmaPhiSigmaEta*par1[iEta+1] + sigmaPhiSigmaEta*sigmaPhiSigmaEta*par2[iEta+1]) / 2. ; 
	else tmpInter = (xcorr[iEta] + xcorr[iEta+1])/2.; 
      }																						         
    }																						         
    return tmpInter;																					         
  }  																							         
  if (sigmaPhiSigmaEta >= 1.2) return par0[tmpEta] + sigmaPhiSigmaEta*par1[tmpEta] + sigmaPhiSigmaEta*sigmaPhiSigmaEta*par2[tmpEta]; 
  else return xcorr[tmpEta]; 
} 


Double_t F_applyScCorrectionsBrEta(Double_t *xx, Double_t *pp){  
 
  Double_t eta  = xx[0] ;                      
  Double_t brem = xx[1] ;                      
  return applyScCorrectionsBrEta(eta, brem);    		     
} 
