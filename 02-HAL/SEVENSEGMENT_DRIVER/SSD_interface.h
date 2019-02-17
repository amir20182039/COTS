/*******************************************************/
/* Author  : Amir Elmallah                             */
/* Version : v01                                       */
/* Date    : 13 Feb 2019                               */
/*******************************************************/
/*DESCRIPTION                                          */
/*-----------                                          */
/* This file defines the configuration parameters      */
/* corresponding to SSD                                */ 
/*******************************************************/
/*Comment: Header file guard                           */
#ifndef _SSD_INTERFACE_H                              
#define _SSD_INTERFACE_H                              

#define SSD_U8_COMMON_ANNODE        1
#define SSD_U8_COMMON_CATHODE       2
#define COMMONPIN_SUCCESS 1
#define SSD_U8_SEGMENT_A                   0
#define SSD_U8_SEGMENT_B                   1
#define SSD_U8_SEGMENT_C                   2
#define SSD_U8_SEGMENT_D                   3
#define SSD_U8_SEGMENT_E                   4
#define SSD_U8_SEGMENT_F                   5
#define SSD_U8_SEGMENT_G                   6
#define SSD_U8_SEGMENT_H                   7
/* Description: This function shall Display on the     */
/* SSD   direction                                     */
u8 SSD_u8DisplayON(u8 Copy_u8SSDIndex);
                                                      
/* Description: This function shall Display off the    */
/* SSD   direction                                     */ 
u8 SSD_u8DisplayOFF(u8 Copy_u8SSDIndex);

/* Description: This function shall write number on    */
/* the SSD                                             */ 
u8 SSD_u8WriteNumber(u8 Copy_u8SSDIndex,u8 Copy_u8Number);
u8 SSD_u8enableSegment(u8 Copy_u8SSDIndex,u8 Copy_u8Segment);


#endif
