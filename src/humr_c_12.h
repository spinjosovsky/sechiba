  
/***************************************************************************
                 module classe humr_c_1.h  -  description


                             -------------------
 ***************************************************************************/

  //===========================================================================
  //                          methodes forward
  forward (YREAL hum12)
  {
	YS1 = hum12 * hum_c12;
  }
	

  //===========================================================================
  //                         methodes  backward
 
backward (YREAL hum12)
  {
	YJ1I1 =  hum_c12;
	
  }



  //===========================================================================

//************************** FIN DU MODULE humr_c_1.h ********************************








