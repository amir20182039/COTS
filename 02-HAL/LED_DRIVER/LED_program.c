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
#include"LED_config.h"
#include "LED_interface.h"
#include"LED_Private.h"

/* Discribtion                                          */
/*this function enable the spacefic pin that is         */
/*connected                                             */
/*to the led                                            */
u8 LEDDRIVER_u8Enable(void)
{
	u8 Local_u8ErrorState=0;
	#if( LEDDRIVER_u8LEDTYPE  == LEDDRIVER_u8FORWARD)
		Local_u8ErrorState=DIO_u8SetPinValue( LEDDRIVER_u8CONNECTEDPIN ,DIO_u8_HIGH);
	#else
	  Local_u8ErrorState=DIO_u8SetPinValue( LEDDRIVER_u8CONNECTEDPIN ,DIO_u8_LOW);
    #endif
	return Local_u8ErrorState;
}

/* Discribtion                                          */
/*this function disable the spacefic pin that is         */
/*connected                                             */
/*to the led                                            */
u8 LEDDRIVER_u8Disable(void)
{
	u8 Local_u8ErrorState=0;
	#if( LEDDRIVER_u8LEDTYPE  == LEDDRIVER_u8FORWARD)
		Local_u8ErrorState=DIO_u8SetPinValue( LEDDRIVER_u8CONNECTEDPIN ,DIO_u8_LOW);
	#else
	   Local_u8ErrorState=DIO_u8SetPinValue( LEDDRIVER_u8CONNECTEDPIN ,DIO_u8_HIGH);
#endif
	return Local_u8ErrorState;
}
