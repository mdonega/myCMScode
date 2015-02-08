 Double_t applyScCorrectionsE_EE(Double_t E){      
   				 	  
 Double_t par0 = 400;               
 Double_t par1 = 0.982475; 
 Double_t par2 = 4.95413e-05; 
 Double_t par3 = 0.16886; 
 Double_t par4 = -30.1517; 
   				 	  
   if (E > par0) E =par0;   		  
   if (             E <   0 ) return         1.;  
   if (  0 <= E && E <= par0 ) return         (par1 + E*par2 )*(1- par3*exp(E/par4 ));
 						  
 }                                          
                					        
 Double_t F_applyScCorrectionsE_EE(Double_t *xx, Double_t *pp){  
   Double_t x = xx[0] ;                     
   return applyScCorrectionsE_EE(x);    		  
 }		                          
