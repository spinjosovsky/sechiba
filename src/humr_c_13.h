  
/***************************************************************************
                 module classe humr_c_1.h  -  description


                             -------------------
 ***************************************************************************/

  //===========================================================================
  //                          methodes forward
  forward (YREAL hum13)
  {
	YS1 = hum13 * hum_c13;
  }
	

  //===========================================================================
  //                         methodes  backward
 
backward (YREAL hum13)
  {
	YJ1I1 =  hum_c13;
	
  }



  //===========================================================================

//************************** FIN DU MODULE humr_c_1.h ********************************







