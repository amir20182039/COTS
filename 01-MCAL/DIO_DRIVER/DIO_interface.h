/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                            */
/* This file defines the APIs corresponding to DIO      */
/********************************************************/
/*Component: Header file guard                          */
#ifndef _DIO_INTERFACE_H
#define _DIO_INTERFACE_H

/* Description: DIO pin index assignation               */
#define DIO_u8_PIN_0                         0 
#define DIO_u8_PIN_1                         1 
#define DIO_u8_PIN_2                         2 
#define DIO_u8_PIN_3                         3 
#define DIO_u8_PIN_4                         4 
#define DIO_u8_PIN_5                         5 
#define DIO_u8_PIN_6                         6 
#define DIO_u8_PIN_7                         7 
#define DIO_u8_PIN_8                         8 
#define DIO_u8_PIN_9                         9 
#define DIO_u8_PIN_10                        10
#define DIO_u8_PIN_11                        11
#define DIO_u8_PIN_12                        12
#define DIO_u8_PIN_13                        13
#define DIO_u8_PIN_14                        14
#define DIO_u8_PIN_15                        15
#define DIO_u8_PIN_16                        16
#define DIO_u8_PIN_17                        17
#define DIO_u8_PIN_18                        18
#define DIO_u8_PIN_19                        19
#define DIO_u8_PIN_20                        20
#define DIO_u8_PIN_21                        21
#define DIO_u8_PIN_22                        22
#define DIO_u8_PIN_23                        23
#define DIO_u8_PIN_24                        24
#define DIO_u8_PIN_25                        25
#define DIO_u8_PIN_26                        26
#define DIO_u8_PIN_26                        26
#define DIO_u8_PIN_27                        27
#define DIO_u8_PIN_28                        28
#define DIO_u8_PIN_29                        29
#define DIO_u8_PIN_30                        30
#define DIO_u8_PIN_31                        31

/* Description: DIO Port index assignation               */
#define DIO_u8_PORT_0                        0
#define DIO_u8_PORT_1                        1
#define DIO_u8_PORT_2                        2
#define DIO_u8_PORT_3                        3
/* Description: DIO pin Value                           */
#define DIO_u8_HIGH                         1
#define DIO_u8_LOW                          0

/* Description: DIO pin Direction                       */
#define DIO_u8_INPUT                       0
#define DIO_u8_OUTPUT                       1
#define PINS_PER_PORT                        8
#define DIO_MAXPORTNB                       3
/* Description:Maximum DIO pins & Ports                       */
#define DIO_MAXPINNB                       32
#define DIO_MAXPORTNB                       3

/* Description: This function shall initialize the      */
/* direction    direction and initial value for DIO     */
/*              pins                                    */
void DIO_voidInitialize(void);

/* Description: this function shall set certain value    */
/*              to certain DIO channel                  */
u8 DIO_u8SetPinValue(u8 Copy_u8PinId, u8 Copy_u8PinValue);

/* Description: this function shall set Pin Direction   */
/*              to certain DIO channel                  */
u8 DIO_u8SetPinDir(u8 Copy_u8PinNB,u8 Copy_u8Direction);

/* Description: this function shall get Pin Value    */
/*              to certain DIO channel                  */
u8 DIO_u8GetPinVal(u8 Copy_u8PinNB,u8 *Copy_Pu8Value);

/* Description: this function shall set The Direction   */
/*              to The DIO channel                      */
u8 DIO_u8SetPortDir(u8 Copy_u8PortNB,u8 Copy_u8Direction);

/* Description: this function shall set The Value       */
/*              to The DIO channel                      */
u8 DIO_u8SetPortValue(u8 Copy_u8PortNB,u8 Copy_u8Value);

/* Description: this function shall get the Value       */
/*              of PIN Register in the DIO channel                  */
u8 DIO_u8GetPortValue(u8 Copy_u8PortNB,u8 *Copy_Pu8Value);


#endif
