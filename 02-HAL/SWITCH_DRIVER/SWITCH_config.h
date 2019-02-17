/********************************************************/
 /* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                            */
/* This file defines the config data and functions      */                                   
/********************************************************/

/*Component: Header file guard                          */
#ifndef _SWITCH_CONFIG_H
#define _SWITCH_CONFIG_H



#define SWI_u8NB     2
u8 SWI_au8Pin[SWI_u8NB]=
{
   DIO_u8_PIN_18,
   DIO_u8_PIN_19
};
u8 SWI_au8Type[SWI_u8NB]=
{
   SWI_u8PULL_UP,
   SWI_u8PULL_UP
};
#endif
