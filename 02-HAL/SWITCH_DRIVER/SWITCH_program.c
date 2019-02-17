/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                            */
/* This file defines the LED program                    */ 
/********************************************************/
#include"STD_TYPES.h"
#include "DIO_interface.h"
#include "SWITCH_interface.h"
#include"SWITCH_config.h"
#include"SWITCH_Private.h"

/* Discribtion                                          */
/*Function reads the state from the switch              */                                         
u8 SWI_u8GetSwitchState(u8 Copy_SwitchIdx , u8* Copy_Switchstate)
{
	if (Copy_SwitchIdx>=SWI_u8NB)
		return ERROR_OUT_OF_RANGE;
	else
	{
		if (SWI_au8Type[Copy_SwitchIdx]==SWI_u8PULL_UP)
		{
			u8 Local_State;
			DIO_u8GetPinVal(SWI_au8Pin[Copy_SwitchIdx],&Local_State);
			if(Local_State==0)
			{
				*Copy_Switchstate=SWI_u8PRESSED;
			}
			else
				*Copy_Switchstate=SWI_u8NOTPRESSED;
		}
		else if (SWI_au8Type[Copy_SwitchIdx]==SWI_u8PULL_DOWN)
		{
			u8 Local_State;
			DIO_u8GetPinVal(SWI_au8Pin[Copy_SwitchIdx],&Local_State);
			if(Local_State==1)
			{
				*Copy_Switchstate=SWI_u8PRESSED;
			}
			else
				*Copy_Switchstate=SWI_u8NOTPRESSED;
		}
	}
}
