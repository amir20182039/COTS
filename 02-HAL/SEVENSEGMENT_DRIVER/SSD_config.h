/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 13 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                            */
/* This file defines the configuration parameters        */
/* corresponding to SSD                                 */ 
/********************************************************/
/*Comment: Header file guard                            */
#ifndef _SSD_CONFIG_H
#define _SSD_CONFIG_H

#define SSD_U8_NB                   2
        
u8 SSD_au8SSDtype[SSD_U8_NB]=
{
   SSD_U8_COMMON_CATHODE,
   SSD_U8_COMMON_CATHODE,
   //SSD_U8_COMMON_CATHODE,
   //SSD_U8_COMMON_CATHODE
};
u8 SSD_au8SSDPort[SSD_U8_NB]=
{
	 DIO_u8_PORT_3,
	 DIO_u8_PORT_3,
	 //DIO_u8_PORT_3,
	 //DIO_u8_PORT_3
	 //DIO_u8_PORT_2
};
u8 SSD_au8SSDCommonPin[SSD_U8_NB]=
{
	  DIO_u8_PIN_16,
	  DIO_u8_PIN_17,
	  //DIO_u8_PIN_21,
	  //DIO_u8_PIN_20
	  //DIO_u8_PIN_30
 
};
u8 SSD_au8SegmantPinMap[8] =
{
		DIO_u8_PIN_24,
	    DIO_u8_PIN_25,
	    DIO_u8_PIN_26,
	    DIO_u8_PIN_27,
		DIO_u8_PIN_28,
		DIO_u8_PIN_29,
		DIO_u8_PIN_30,
		DIO_u8_PIN_31

};
#endif
