/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                            */
/* This file defines theprivate data and functions      */
/* corresponding to DIO                                   */ 
/********************************************************/
/*Component: Header file guard                          */
#ifndef _DIO_PRIVATE_H
#define _DIO_PRIVATE_H

#define DIO_u8_DDRA                        ((Register_8Bit*)0x3A)
#define DIO_u8_DDRB                        ((Register_8Bit*)0x37)
#define DIO_u8_DDRC                        ((Register_8Bit*)0x34)
#define DIO_u8_DDRD                        ((Register_8Bit*)0x31)


#define DIO_u8_PORTA                       ((Register_8Bit*)0x3B)
#define DIO_u8_PORTB                       ((Register_8Bit*)0x38)
#define DIO_u8_PORTC                       ((Register_8Bit*)0x35)
#define DIO_u8_PORTD                       ((Register_8Bit*)0x32)


#define DIO_u8_PINA                        ((Register_8Bit*)0x39)
#define DIO_u8_PINB                        ((Register_8Bit*)0x36)
#define DIO_u8_PINC                        ((Register_8Bit*)0x33)
#define DIO_u8_PIND                        ((Register_8Bit*)0x30)


#endif
