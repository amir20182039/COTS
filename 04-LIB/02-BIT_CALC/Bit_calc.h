#ifndef Bit_calc_h
#define Bit_calc_h
#define setbit(x,bitno)          x|=(1<<bitno)
#define clearbit(x,bitno)        x&=~(1<<bitno)
#define togglebit(x,bitno)       x^=(1<<bitno) 
#define getbit(x,bitno)          (x&(1<<bitno))>>bitno
#define assignbit(x,bitno,value) do { if(value==1)   \
                                 setbit(x,bitno); \
                            else if(value==0)\
                                  clearbit(x,bitno) ;\
                                    }\
				  while(0)
#define assignbyte(x,value)     x|=value



#endif 
