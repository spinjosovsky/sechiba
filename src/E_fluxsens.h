  
/***************************************************************************
                 module E_fluxsens.h  -  description

 output                            -------------------
	YS1 = fluxsens

 ***************************************************************************/

  //===========================================================================
  //                           forward
  forward (YREAL fluxsens_init, YREAL fluxsens)
  {
	if(Yt == 1)
	{
		YS1 = fluxsens_init * fsens;
		
	}
	else
	{
		YS1 = fluxsens;
	}
	
	

  }
	

  //===========================================================================
  //                           backward
  backward (YREAL fluxsens_init, YREAL fluxsens)
  {
	if(Yt == 1)
	{
		YJ1I1 = fsens;
		YJ1I2 = 0;
	}
	else
	{
		YJ1I1 = 0;
		YJ1I2 = 1;
	}
	
  }

  //===========================================================================

//************************** End of MODULE E_fluxsens.h ********************************














