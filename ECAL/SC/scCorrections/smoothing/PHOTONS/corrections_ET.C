Double_t applyScCorrectionsET_EB(Double_t ET){      

  Double_t par0 =  1; 
  Double_t par1 =  1.00348; 
  Double_t par2 =  1.001;	   
  Double_t par3 =  -9.17302e-06;	   
  Double_t par4 =  0.999688;     

  if (             ET <   5 ) return         1.;  
  if (  5 <= ET && ET <  10 ) return         par0 ;  
  if ( 10 <= ET && ET <  20 ) return         par1 ;  
  if ( 20 <= ET && ET < 140 ) return         par2 + par3*ET ;  
  if (140 <= ET             ) return         par4;  
 						  
}                                           
                					        
Double_t F_applyScCorrectionsET_EB(Double_t *xx, Double_t *pp){  
  Double_t x = xx[0] ;                     
  return applyScCorrectionsET_EB(x);    		  
}		                          
Double_t applyScCorrectionsET_EE(Double_t ET){      
   					  
  Double_t par0 =  1; 
  Double_t par1 =  0.996931; 
  Double_t par2 =  0.999497;	   
  Double_t par3 =  0.992617;	   
  Double_t par4 =  7.52128e-05;     
  Double_t par5 =  -1.2845e-07;     
  Double_t par6 =  1.00231;     

  if (             ET <   5 ) return         1.;  
  if (  5 <= ET && ET <  10 ) return          par0 ;  
  if ( 10 <= ET && ET <  20 ) return          par1 ;  
  if ( 20 <= ET && ET <  30 ) return          par2 ;  
  if ( 30 <= ET && ET < 200 ) return          par3 + par4 *ET + par5 *ET*ET ;  
  if ( 200 <= ET            ) return          par6 ;
 						  
}                                           
                					        
Double_t F_applyScCorrectionsET_EE(Double_t *xx, Double_t *pp){  
  Double_t x = xx[0] ;                     
  return applyScCorrectionsET_EE(x);    		  
}		                          
