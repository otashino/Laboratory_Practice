#include "init.h"

int main(void) {
    // Вызов функции инициализации портов
    GPIO_Ini();

    while(1) {
        
        if (READ_BIT(GPIOC->IDR,GPIO_IDR_IDR_13)!=0) {
            // Установка единицы в 7-й бит ODR (включить синий светодиод)
            SET_BIT(GPIOB->BSRR, GPIO_BSRR_BS7);
        } else {
            // Сброс 7-го бита ODR (выключить синий светодиод)
            SET_BIT(GPIOB->BSRR, GPIO_BSRR_BR7);
        }
    }
}