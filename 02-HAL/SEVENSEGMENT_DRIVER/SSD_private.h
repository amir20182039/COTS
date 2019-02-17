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
#ifndef _SSD_PRIVATE_H
#define _SSD_PRIVATE_H
#define SSD_U8_PINNBS       10
#define ERROR_OUT_OF_RANGE  1

u8 SSD_au8SSDPattern[SSD_U8_PINNBS]=
{
	  0b00111111,
	  0b00000110,
	  0b01011011,
	  0b01001111,
	  0b01100110,
	  0b01101101,
	  0b01111101,
	  0b00000111,
	  0b01111111,
	  0b01101111
 
};
#endif
