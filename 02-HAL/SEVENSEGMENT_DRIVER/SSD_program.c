/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 13 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                           */
/* This file has the implementation of both private and */
/* public dunctions corresponding to SSD                */ 
/********************************************************/
#include "STD_TYPES.h"
#include "Bit_calc.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include "SSD_private.h"
#include "SSD_config.h"

/* Description: This function shall Display on the     */
/* SSD   direction                                     */
u8 SSD_u8DisplayON(u8 Copy_u8SSDIndex)
{
	if (Copy_u8SSDIndex>=SSD_U8_NB)
	{
		return ERROR_OUT_OF_RANGE;
	}
	else 
	{
	if (SSD_au8SSDtype[Copy_u8SSDIndex] == SSD_U8_COMMON_CATHODE)
     DIO_u8SetPinValue(SSD_au8SSDCommonPin[Copy_u8SSDIndex],DIO_u8_LOW);
	else
	{
	 DIO_u8SetPinValue(SSD_au8SSDCommonPin[Copy_u8SSDIndex],DIO_u8_HIGH);
	}
	return COMMONPIN_SUCCESS;
	}
}
	
                                                      
/* Description: This function shall Display off the    */
/* SSD   direction                                     */ 
u8 SSD_u8DisplayOFF(u8 Copy_u8SSDIndex)
{
	if (Copy_u8SSDIndex>=SSD_U8_NB)
	{
		return ERROR_OUT_OF_RANGE;
	}
	else 
	{
	if (SSD_au8SSDtype[Copy_u8SSDIndex] == SSD_U8_COMMON_CATHODE)
     DIO_u8SetPinValue(SSD_au8SSDCommonPin[Copy_u8SSDIndex],DIO_u8_HIGH);
	else
	 DIO_u8SetPinValue(SSD_au8SSDCommonPin[Copy_u8SSDIndex],DIO_u8_LOW);
	}
	
}

/* Description: This function shall write number on    */
/* the SSD                                             */ 
u8 SSD_u8WriteNumber(u8 Copy_u8SSDIndex,u8 Copy_u8Number)
{
	if ((Copy_u8SSDIndex>=SSD_U8_NB) || (Copy_u8Number>=SSD_U8_PINNBS))
	{
		return ERROR_OUT_OF_RANGE;
	}
	else
	{
	DIO_u8SetPortValue(SSD_au8SSDPort[Copy_u8SSDIndex],SSD_au8SSDPattern[Copy_u8Number]);
	}
}
u8 SSD_u8enableSegment(u8 Copy_u8SSDIndex,u8 Copy_u8Segment)
{
	if ((Copy_u8SSDIndex>=SSD_U8_NB) || (Copy_u8Segment>=SSD_U8_PINNBS))
	{
		return ERROR_OUT_OF_RANGE;
	}
	else
	{
	DIO_u8SetPortValue(SSD_au8SSDPort[Copy_u8SSDIndex],DIO_u8_LOW);
	DIO_u8SetPinValue(SSD_au8SegmantPinMap[Copy_u8Segment],DIO_u8_HIGH);
	}
}
