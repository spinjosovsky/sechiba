  
/***************************************************************************
                 module SE_tempsol.h  -  description

                             -------------------
 ***************************************************************************/

  //===========================================================================
  //                           forward
  forward (YREAL tempsolnew)
  {
	double temp_sol;
	

		temp_sol = tempsolnew;

	YS1 = temp_sol;

 

  }
	

  //===========================================================================
  //                           backward
  backward (YREAL tempsolnew)
  {
	
	
  }

  //===========================================================================

//**************************  MODULE SE_tempsol.h  ********************************














