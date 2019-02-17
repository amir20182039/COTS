/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                           */
/* This file defines the APIs corresponding to SWITCH      */
/********************************************************/
/*Component: Header file guard                          */
#ifndef _SWITCH_INTERFACE_H
#define _SWITC_INTERFACE_H

#define SWI_u8PULL_UP       1
#define SWI_u8PULL_DOWN     0
#define SWI_u8PRESSED       2
#define SWI_u8NOTPRESSED    3

/* Discribtion                                          */
/*Function reads the state from the switch              */                                         
u8 SWI_u8GetSwitchState(u8 Copy_SwitchIdx , u8* Copy_Switchstate);


#endif
