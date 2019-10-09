
#include "init.h"

#include "our_service.h"

#include "nrf_delay.h"

#include "nrf_log.h"

//ble_ma_s  m_our_service;

  uint8_t temperature[5];

  uint8_t s_data[20] ;

  uint8_t length_1;


int main(){

init();

//char b;

while(1)
{

//printf("This is a hamid: %0x\n",*data);
//get_data()
//loop();
 //nrf_delay_ms(10);

 idle_state_handle();

 


//printf("This is a hamid: %0x\n",*s_data);

  /* for(int i =0 ;i<length_1; i++)
   {
 
     NRF_LOG_INFO("uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu %0x",*(s_data+i));

   }*/


for(uint8_t i = 0; i<sizeof(temperature); i++)
{
  temperature[i] =  sizeof(temperature)-i;
}
 uint16_t len = sizeof(temperature);

 get_data( &len ,temperature); 

// length_1 = store_data(s_data);
 

 //nrf_gpio_pin_toggle(LED_4);

 //nrf_delay_ms(1000);

}
 
}