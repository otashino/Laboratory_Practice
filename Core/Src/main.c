#include <stdint.h>

int main(void){
    *(uint32_t*)(0x40023800UL + 0x30UL) |= 0x02;   // RCC_AHB1ENR: включить тактирование GPIOB (бит GPIOBEN)
    *(uint32_t*)(0x40020400UL + 0x00UL) |= 0x4000; // GPIOB_MODER:  пин 7 в режим выхода (Output mode)
    *(uint32_t*)(0x40020400UL + 0x04UL) |= 0x00;   // GPIOB_OTYPER: тип выхода Push-Pull (строка необязательна)
    *(uint32_t*)(0x40020400UL + 0x08UL) |= 0x4000; // GPIOB_OSPEEDR: средняя скорость работы пина 7
    *(uint32_t*)(0x40020400UL + 0x0CUL) |= 0x00;   // GPIOB_PUPDR:  отключить подтяжки PU/PD
    while(1){
        *(uint32_t*)(0x40020400UL + 0x18UL) |= 0x80; // GPIOB_BSRR: установить бит 7 → на PB7 единица
    }
}