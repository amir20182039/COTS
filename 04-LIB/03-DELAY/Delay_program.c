/*******************************************************    */
/* Author  : Amir Elmallah                                  */
/* Version : v01                                            */
/* Date    : 8 Feb 2019                                     */
/*******************************************************    */
/*DESCRIPTION                                               */
/*-----------                                               */
/* This file defines the Program corresponding to DELAY     */
/*******************************************************    */
/*Component: Header file guard                              */
/*Description                                               */
/*This function hold the processor for number of mmSeconds  */
/*calculate the context time switching when the function    */
/* is called-->29 cycles                                    */
/*the loop time is calculated from the assembly and         */
/* the equation is equal to 10(constant time when we        */
/* Entered the for loop)                                    */
/*+(22(n+1) the time for the compare +20+the no.s of NOPS(n)*/
/* Therefore--> TLOOP=32+43n=8000(Delay_Time)               */
/*The time of the equation is equal to--> 45 cycles         */
/*The return time is equal to --> 15 cycles                 */
/*when we gather the 3 function we get                      */
/* ----> 29+45+15+32+43n=8000(Delay_Time)                   */
/*--->121+42n=8000(Delay_Time)                              */
/*to make the devision is sqrt f 2 we approximate 43        */
 /*to 64 so we add 22 additional NOPS                       */
void delay_ms(u32 u32Delay_Time)
{
   u32 Counter;
    u32 n=((8000*u32Delay_Time)-121)/64;   /*43 +21*/
   for(Counter=0;Counter<n;Counter++)
    {
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");


    }
}
/*Description                           */
/*This function hold the processor for number of UsSeconds  */
/*calculate the context time switching when the function    */
/* is called-->29 cycles                                    */
/*the loop time is calculated from the assembly and         */
/* the equation is equal to 10(constant time when we        */
/* Entered the for loop)                                    */
/*+(22(n+1) the time for the compare +20+the no.s of NOPS(n)*/
/* Therefore--> TLOOP=32+43n=8000(Delay_Time)               */
/*The time of the equation is equal to--> 45 cycles         */
/*The return time is equal to --> 15 cycles                 */
/*when we gather the 3 function we get                      */
/* ----> 29+45+15+32+43n=8(Delay_Time)                      */
/*--->121+42n=8(Delay_Time)                                 */
/*to make the devision is sqrt f 2 we approximate 43        */
/*to 64 so we add 22 additional NOPS                        */
void delay_us(u32 u32Delay_Time)
{
   u32 Counter;
    u32 n=((8*u32Delay_Time)-121)/64;   /*43 +21*/
   for(Counter=0;Counter<n;Counter++)
    {
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");
         asm("NOP");


    }
}
