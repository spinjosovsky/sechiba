  
/***************************************************************************
                 module classe albedonir.h  -  description


                             -------------------
 ***************************************************************************/

  //===========================================================================
  //                          methodes forward
  forward (YREAL albedonir11)
  {
	YS1 = albedonir1 * albedonir11;

	//printf("dpu_cte %e     dpu  %e \n",albedo1, albedo11);
  }
	

  //===========================================================================
  //                         methodes  backward
 
backward (YREAL albedonir11)
  {
	YJ1I1 = albedonir1;
	
  }



  //===========================================================================

//************************** FIN DU MODULE albedonir.h ********************************






