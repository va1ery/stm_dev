/* #include <libopencm3/stm32/rcc.h>
#include "ex1_gpio_blink.h"

static void clock_setup(void)
{
rcc_clock_setup_pll(&rcc_hse_configs[RCC_CLOCK_HSE8_72MHZ]);
rcc_periph_clock_enable(RCC_GPIOA);
}

int main(void)
{
clock_setup();
} */

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include "ex1_gpio_blink.h"
 
static void clock_setup(void)
{
        rcc_clock_setup_pll(&rcc_hse_configs[RCC_CLOCK_HSE8_72MHZ]);
        rcc_periph_clock_enable(RCC_GPIOC);
}
 
int main(void)
{
        clock_setup();
        gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_50_MHZ,  GPIO_CNF_OUTPUT_PUSHPULL, GPIO13);
        while(1){
                for (int i = 0; i < 1000000; i++) {
                        __asm__("nop");
                }
                gpio_toggle(GPIOC, GPIO13);
        }
}

