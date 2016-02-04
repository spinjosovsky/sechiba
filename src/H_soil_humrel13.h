  
/***************************************************************************
                 module 
 ***************************************************************************/


  //===========================================================================
  //                           forward
forward(YREAL humrel, YREAL hum_c)
  {
	if(Yt == 1)
	{
		YS1 = hum_c;
	}
	else
	{
		YS1 = humrel;	
	}

  }
	

  //===========================================================================
  //                           backward
backward(YREAL humrel, YREAL hum_c)
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

//************************** End of MODULE H_soil_humrel1.h ********************************














