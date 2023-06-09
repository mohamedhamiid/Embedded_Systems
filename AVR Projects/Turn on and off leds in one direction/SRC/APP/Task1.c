#include "util/delay.h"
#include "../../INCLUDE/MCAL/DIO/DIO.h"
#include "../../INCLUDE/MCAL/DIO/DIO_priv.h"
#include "../../SERVICES/bit_utilies.h"
#include "../../INCLUDE/HAL/Led/Led.h"
/********************* Task 1 **************************/
/* - Turn on Led then Turn it off                      */
/* - Doing this for 8 Leds                             */
/*******************************************************/
int main(){
Led_tCfg task1[8];
//Initialize all Leds
for(u8 Led_InitCount=0;Led_InitCount<8;Led_InitCount++){
		 task1[Led_InitCount].Led_NestStruct.Port = DIO_u8_PORTA ;
		 task1[Led_InitCount].Pin  = Led_InitCount ;
		 task1[Led_InitCount].Led_NestStruct.Active_Status = Led_Active_High ;
		 task1[Led_InitCount].Led_NestStruct.Current_Status= Led_Active_High_Low;
		 Led_vidLedInit(&task1[Led_InitCount]);
}
while(1){
for(u8 Led_Count=0;Led_Count<8;Led_Count++){
	Led_vidOn(&task1[Led_Count]);
	_delay_ms(200);
	Led_vidOff(&task1[Led_Count]);
	_delay_ms(200);
}

}
return 0;
}



