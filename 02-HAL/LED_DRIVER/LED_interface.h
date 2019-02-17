/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                           */
/* This file defines the APIs corresponding to LED      */
/********************************************************/
/*Component: Header file guard                          */
#ifndef _LED_INTERFACE_H
#define _LED_INTERFACE_H


#define LEDDRIVER_u8FORWARD      0        
#define LEDDRIVER_u8REVERSE      1    


/* Discribtion                                          */
/*this function enable the spacefic pin that is         */
/*connected                                             */
/*to the led                                            */
u8 LEDDRIVER_u8Enable(void);

/* Discribtion                                          */
/*this function disable the spacefic pin that is         */
/*connected                                             */
/*to the led                                            */
u8 LEDDRIVER_u8Disable(void);




#endif
