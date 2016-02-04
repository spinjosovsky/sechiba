  
/***************************************************************************
                    module  E_tempsol.h  -  description
                             -------------------
 ***************************************************************************/

  //===========================================================================
  //                           forward
  forward (YREAL tempsol, YREAL temp_sol_init)
  {
	if(Yt == 1)
	{
		YS1 = temp_sol_init; 
		
	}
	else
	{
		YS1 = tempsol;

		
	}

  }
	

  //===========================================================================
  //                           backward
  backward (YREAL tempsol, YREAL temp_sol_init)
  {
	if(Yt == 1)
	{
		YJ1I1 = 0;
		YJ1I2 = 1;

	}
	else
	{
		YJ1I1 = 1;
		YJ1I2 = 0;
	}
  }

  //===========================================================================

//************************** End of MODULE E_tempsol.h ********************************














