/******************************************************/
/* Author  : Amir Elmallah                            */
/* Version : v01                                      */
/* Date    : 12 Dec 2017                              */
/******************************************************/
/*DESCRIPTION                                         */
/*-----------                                         */
/* This compnent is used too define the basic standard */
/*types used in the systems developed in the course   */
/******************************************************/
/*Component: Header file guard                        */
#ifndef STD_TYPES_H
#define STD_TYPES_H
/* Decimal type unsigned value with size 8 bits       */
typedef unsigned char          u8; 

 /* Decimal type unsigned value with size 16 bits      */
typedef unsigned short int     u16;

/* Decimal type unsigned value with size 32 bits      */  
typedef unsigned long int      u32;

/* Decimal type signed value with size 8 bits         */  
typedef signed char            s8;

/* Decimal type signed value with size 16 bits        */  
typedef signed short int       s16;

/* Decimal type signed value with size 32 bits        */  
typedef signed long int        s32;

/* Decimal type float value with size 32 bits         */  
typedef float                  f32;

/* Decimal type double value with size 64 bits        */  
typedef double                 f64;

/* 8 bit Register                                     */
typedef union{
  struct
  {
	  u8 BIT0:1;
	  u8 BIT1:1;
	  u8 BIT2:1;
	  u8 BIT3:1;
	  u8 BIT4:1;
	  u8 BIT5:1;
	  u8 BIT6:1;
	  u8 BIT7:1;
  }BitAccess;
  u8 ByteAccess;
}Register_8Bit;

#endif
