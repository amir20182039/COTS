/********************************************************/
/* Author  : Amir Elmallah                              */
/* Version : v01                                        */
/* Date    : 4 Feb 2019                                 */
/********************************************************/
/*DESCRIPTION                                           */
/*-----------                                           */
/* This file has the implementation of both private and */
/* public dunctions corresponding to DIO                */ 
/********************************************************/
#include "STD_TYPES.h"
#include "Bit_calc.h"
#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"


#define CONC_8BIT(b0,b1,b2,b3,b4,b5,b6,b7)     ConcHelper(b0,b1,b2,b3,b4,b5,b6,b7)
#define ConcHelper(b0,b1,b2,b3,b4,b5,b6,b7)   0b##b7##b6##b5##b4##b3##b2##b1##b0
/* Description: This function shall initialize the      */
/* direction    direction and initial value for DIO     */
/*              pins                                    */
void DIO_voidInitialize(void)
{
	DIO_u8_DDRA->ByteAccess=CONC_8BIT(DIO_u8_PIN0_DIR,
                                      DIO_u8_PIN1_DIR,
                                      DIO_u8_PIN2_DIR,
                                      DIO_u8_PIN3_DIR,
                                      DIO_u8_PIN4_DIR,
                                      DIO_u8_PIN5_DIR,
									  DIO_u8_PIN6_DIR,
									  DIO_u8_PIN7_DIR);									              

	DIO_u8_DDRB->ByteAccess=CONC_8BIT(DIO_u8_PIN8_DIR,
	                                  DIO_u8_PIN9_DIR,
	                                  DIO_u8_PIN10_DIR,
	                                  DIO_u8_PIN11_DIR,								  
                                      DIO_u8_PIN12_DIR,
	                                  DIO_u8_PIN13_DIR,								  
                                      DIO_u8_PIN14_DIR,
									  DIO_u8_PIN15_DIR);

	DIO_u8_DDRC->ByteAccess=CONC_8BIT(DIO_u8_PIN16_DIR,
	                                  DIO_u8_PIN17_DIR,
	                                  DIO_u8_PIN18_DIR,
	                                  DIO_u8_PIN19_DIR,								  
                                      DIO_u8_PIN20_DIR,
	                                  DIO_u8_PIN21_DIR,								  
                                      DIO_u8_PIN22_DIR,
									  DIO_u8_PIN23_DIR);

	DIO_u8_DDRD->ByteAccess=CONC_8BIT(DIO_u8_PIN24_DIR,
	                                  DIO_u8_PIN25_DIR,
	                                  DIO_u8_PIN26_DIR,
	                                  DIO_u8_PIN27_DIR,								  
                                      DIO_u8_PIN28_DIR,
	                                  DIO_u8_PIN29_DIR,								  
                                      DIO_u8_PIN30_DIR,
									  DIO_u8_PIN31_DIR);
									  
									  
}


/*Descripition:set PIN direction
Input: u8PinNB-> pin number
     : u8Direction->
	 pin Direction Output:function Error State         */
u8 DIO_u8SetPinDir(u8 Copy_u8PinNB,u8 Copy_u8Direction)
{
	u8 Local_u8PortID =0;
	u8 Local_u8PinID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Copy_u8PinNB>=DIO_MAXPINNB)
	{
		Local_u8ErrorState =1;
	}else if ((Copy_u8Direction!=DIO_u8_INPUT)&&( Copy_u8Direction!=DIO_u8_OUTPUT))
	{
		Local_u8ErrorState= 1;
	}else
	{
		Local_u8ErrorState= 0;
		Local_u8PortID = Copy_u8PinNB/PINS_PER_PORT;
		Local_u8PinID = Copy_u8PinNB%PINS_PER_PORT;
		switch(Local_u8PortID)
		{
		case 0 :
			assignbit(DIO_u8_DDRA ->ByteAccess,Local_u8PinID ,Copy_u8Direction);
		  break;
		case 1:
			assignbit(DIO_u8_DDRB ->ByteAccess,Local_u8PinID,Copy_u8Direction);
		  break;
		case 2:
			assignbit(DIO_u8_DDRB ->ByteAccess,Local_u8PinID,Copy_u8Direction);
		  break;
		case 3:
			assignbit(DIO_u8_DDRB ->ByteAccess,Local_u8PinID,Copy_u8Direction);
		  break;
		default:
		 break;
	 }

	}

	/*Function Return*/
	return Local_u8ErrorState;
}


/* Description: this function shall set certain value    */
/*              to certain DIO channel                  */
u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 Copy_u8Value)
{
	u8 Local_u8PortID =0;
	u8 Local_u8PinID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Copy_u8PinNB>=DIO_MAXPINNB)
	{
		Local_u8ErrorState =1;
	}else if ((Copy_u8Value!=DIO_u8_HIGH)&&(Copy_u8Value!=DIO_u8_LOW))
	{
		Local_u8ErrorState= 1;
	}else
	{
		Local_u8ErrorState= 0;
		Local_u8PortID = Copy_u8PinNB/PINS_PER_PORT;
		Local_u8PinID = Copy_u8PinNB%PINS_PER_PORT;
		switch(Local_u8PortID)
		{
		case 0:
			assignbit( DIO_u8_PORTA ->ByteAccess,Local_u8PinID,Copy_u8Value);
		  break;
		case 1:
			assignbit( DIO_u8_PORTB->ByteAccess,Local_u8PinID,Copy_u8Value);
		  break;
		case 2:
			assignbit( DIO_u8_PORTC->ByteAccess,Local_u8PinID,Copy_u8Value);
		  break;
		case 3:
			assignbit( DIO_u8_PORTD->ByteAccess,Local_u8PinID,Copy_u8Value);
		  break;
		default:
		 break;
	 }
	}
	/*Function Return*/
	return Local_u8ErrorState;
}


/* Description: this function shall set The Value     */
/*              to The DIO channel                      */
u8 DIO_u8SetPortValue(u8 Copy_u8PortNB,u8 Copy_u8Value)
{
	u8 Local_u8PortID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Local_u8PortID>=DIO_MAXPORTNB)
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState= 0;
		switch(Copy_u8PortNB)
		{
		case 0:
		    assignbyte(DIO_u8_PORTA->ByteAccess,Copy_u8Value);
		  break;
		case 1:
			 assignbyte(DIO_u8_PORTB->ByteAccess,Copy_u8Value);
		  break;
		case 2:
			 assignbyte(DIO_u8_PORTC->ByteAccess,Copy_u8Value);
		  break;
		case 3:
			 assignbyte(DIO_u8_PORTD->ByteAccess,Copy_u8Value);
		  break;
		default:
		 break;
	 }
	}
	/*Function Return*/
	return Local_u8ErrorState;
}


/* Description: this function shall set The Direction    */
/*              to The DIO channel                      */
u8 DIO_u8SetPortDir(u8 Copy_u8PortNB,u8 Copy_u8Value)
{
	u8 Local_u8PortID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Copy_u8PortNB>=DIO_MAXPORTNB)
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState= 0;
		switch(Local_u8PortID)
		{
		case 0:
		    assignbyte(DIO_u8_DDRA->ByteAccess,Copy_u8Value);
		  break;
		case 1:
			 assignbyte(DIO_u8_DDRB->ByteAccess,Copy_u8Value);
		  break;
		case 2:
			 assignbyte(DIO_u8_DDRC->ByteAccess,Copy_u8Value);
		  break;
		case 3:
			 assignbyte(DIO_u8_DDRD->ByteAccess,Copy_u8Value);
		  break;
		default:
		 break;
	 }
	}
	/*Function Return*/
	return Local_u8ErrorState;
}
/* Description: this function shall get the Value      */
/*              of certain PIN in PIN Register          */
u8 DIO_u8GetPinVal(u8 Copy_u8PinNB,u8* Copy_Pu8Value)
{
		u8 Local_u8PortID =0;
	u8 Local_u8PinID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Copy_u8PinNB>=DIO_MAXPINNB)
	{
		Local_u8ErrorState =1;
	}else
	{
		Local_u8ErrorState= 0;
		Local_u8PortID = Copy_u8PinNB/PINS_PER_PORT;
		Local_u8PinID = Copy_u8PinNB%PINS_PER_PORT;
		switch(Local_u8PortID)
		{
		case 0:
			*Copy_Pu8Value=getbit(DIO_u8_PINA ->ByteAccess,Local_u8PinID);
		  break;
		case 1:
			*Copy_Pu8Value=getbit(DIO_u8_PINB->ByteAccess,Local_u8PinID);
		  break;
		case 2:
			*Copy_Pu8Value=getbit(DIO_u8_PINC->ByteAccess,Local_u8PinID);
		  break;
		case 3:
			*Copy_Pu8Value=getbit(DIO_u8_PIND->ByteAccess,Local_u8PinID);
		  break;
		default:
		 break;
	 }
	}
	/*Function Return*/
	return Local_u8ErrorState;
	
}


/* Description: this function shall get the Value             */
/*              of PIN Register in the DIO channel                  */
u8 DIO_u8GetPORTVal(u8 Copy_u8PortNB,u8* Copy_Pu8Value)
{
		u8 Local_u8PortID =0;
	u8 Local_u8PinID =0;
/*	Local Variable to hold the error state*/
	u8 Local_u8ErrorState =0;
	/*Validate inputs*/
	if(Copy_u8PortNB>=DIO_MAXPORTNB)
	{
		Local_u8ErrorState =1;
	}
		switch(Local_u8PortID)
		{
		case 0:
			*Copy_Pu8Value=DIO_u8_PINA->ByteAccess;
		  break;
		case 1:
			*Copy_Pu8Value=DIO_u8_PINB->ByteAccess;
		  break;
		case 2:
			*Copy_Pu8Value=DIO_u8_PINC->ByteAccess;
		  break;
		case 3:
			*Copy_Pu8Value=DIO_u8_PIND->ByteAccess;
		  break;
		default:
		 break;
	 }

	/*Function Return*/
	return Local_u8ErrorState;
	
}

