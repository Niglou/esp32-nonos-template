#include "init.h"
#include "rom/ets_sys.h"

extern "C" {

  void main_cpu0();

}

void main_cpu0() {

  /*
    Disable Watchdog
    Set PLL clock at 80Mhz
    Move exceptions vectors to IRAM
    Set UART div to 115200 bauds
  */
  init_esp32();
  ets_install_uart_printf();
  ets_update_cpu_frequency_rom(80);

  /* ***** SETUP ***** */

  /* Code */

  /* ***** LOOP ***** */
  while(1) {

    ets_printf("Hello, World !\n");

    ets_delay_us(1000000);

  }


}
