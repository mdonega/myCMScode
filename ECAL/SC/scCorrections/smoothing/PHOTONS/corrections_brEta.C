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
  xcorr[0]=1.00506;
  xcorr[1]=1.00697;
  xcorr[2]=1.00595;
  xcorr[3]=1.00595;
  xcorr[4]=1.00595;
  xcorr[5]=1.00595;
  xcorr[6]=1.00595;
  xcorr[7]=0.966651;
  xcorr[8]=0.97381;
  xcorr[9]=0.976516;
  xcorr[10]=0.983254;
  xcorr[11]=0.98502;
  xcorr[12]=0.98502;
  xcorr[13]=0.978472;

  Double_t par0[nBinsEta];
  Double_t par1[nBinsEta];
  Double_t par2[nBinsEta];
  Double_t par3[nBinsEta];
  Double_t par4[nBinsEta];

  par0[0] = 0.00132382 ;
  par1[0] = 2.17664 ;
  par2[0] = -0.00467206 ;
  par3[0] = 0.988994 ;
  par4[0] = 17.5858 ;

  par0[1] = -0.00590257 ;
  par1[1] = 1.90733 ;
  par2[1] = 0.000684327 ;
  par3[1] = 0.986431 ;
  par4[1] = 16.6698 ;

  par0[2] = 0.00265109 ;
  par1[2] = 1.73272 ;
  par2[2] = -0.00107022 ;
  par3[2] = 0.989322 ;
  par4[2] = 15.4911 ;

  par0[3] = 0.00231631 ;
  par1[3] = 1.3463 ;
  par2[3] = -0.00369555 ;
  par3[3] = 0.987133 ;
  par4[3] = 10.9233 ;

  par0[4] = 0.00984253 ;
  par1[4] = 1.33889 ;
  par2[4] = -0.00392593 ;
  par3[4] = 0.979191 ;
  par4[4] = 9.35276 ;

  par0[5] = 0.023683 ;
  par1[5] = 1.31198 ;
  par2[5] = -0.00947317 ;
  par3[5] = 0.963352 ;
  par4[5] = 7.5597 ;

  par0[6] = 0.0851133 ;
  par1[6] = 1.38097 ;
  par2[6] = -0.0340201 ;
  par3[6] = 0.969502 ;
  par4[6] = 4.17983 ;

  par0[7] = 6.71705 ;
  par1[7] = 5034.26 ;
  par2[7] = -2.68669 ;
  par3[7] = 0.970174 ;
  par4[7] = 1.00288 ;

  par0[8] = 1306.82 ;
  par1[8] = 472004 ;
  par2[8] = -1.86145 ;
  par3[8] = 0.981714 ;
  par4[8] = -0.25644 ;

  par0[9] = 0.317121 ;
  par1[9] = 3.22717 ;
  par2[9] = -0.126848 ;
  par3[9] = 0.957792 ;
  par4[9] = 2.01028 ;

  par0[10] = 0.275225 ;
  par1[10] = 2.20686 ;
  par2[10] = -0.11009 ;
  par3[10] = 0.93922 ;
  par4[10] = 2.69958 ;

  par0[11] = 0.0639875 ;
  par1[11] = 1.40045 ;
  par2[11] = -0.0255853 ;
  par3[11] = 0.821566 ;
  par4[11] = 7.3297 ;

  par0[12] = 0.030488 ;
  par1[12] = 1.37842 ;
  par2[12] = -0.0121879 ;
  par3[12] = 0.8173 ;
  par4[12] = 9.29944 ;

  par0[13] = 0.213906 ;
  par1[13] = 1.67471 ;
  par2[13] = -0.0860589 ;
  par3[13] = 0.893636 ;
  par4[13] = 3.78218 ;

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
	if (sigmaPhiSigmaEta >= 1)  tmpInter =   (par0[iEta  ]*(1.-exp(-(sigmaPhiSigmaEta-par4[iEta  ])/par1[iEta  ]))*par2[iEta  ]*sigmaPhiSigmaEta + par3[iEta  ]+
						  par0[iEta+1]*(1.-exp(-(sigmaPhiSigmaEta-par4[iEta+1])/par1[iEta+1]))*par2[iEta+1]*sigmaPhiSigmaEta + par3[iEta+1] ) /2.;
				      // ( fcorr[iEta].Eval(sigmaPhiSigmaEta) +fcorr[iEta+1].Eval(sigmaPhiSigmaEta) ) / 2. ;
	  else tmpInter = (xcorr[iEta] + xcorr[iEta+1])/2.; 
      }															         
    }															         
    return tmpInter;													         
  }  															         
  if (sigmaPhiSigmaEta >= 1) return par0[tmpEta  ]*(1.-exp(-(sigmaPhiSigmaEta-par4[tmpEta  ])/par1[tmpEta  ]))*par2[tmpEta  ]*sigmaPhiSigmaEta + par3[tmpEta  ]; // fcorr[tmpEta].Eval(sigmaPhiSigmaEta);  
  else return xcorr[tmpEta]; 
} 


Double_t F_applyScCorrectionsBrEta(Double_t *xx, Double_t *pp){  
 
  Double_t eta  = xx[0] ;                      
  Double_t brem = xx[1] ;                      
  return applyScCorrectionsBrEta(eta, brem);    		     
} 
