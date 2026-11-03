#include "init.h"


int main(void) {
    // Вызов функции инициализации портов
    GPIO_Ini();
    
    while(1) {
        // Читаем состояние кнопки на PC13. 
        // Если кнопка НЕ нажата (там 1 из-за подтяжки), включаем светодиод.
        // Если кнопка НАЖАТА (там 0), выключаем светодиод.
        if (READ_BIT(GPIOC_IDR, GPIOC_IDR_PIN13) != 0) {
            SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_SET);   // Установка 1 в 7-й бит ODR (вкл)
        } else {
            SET_BIT(GPIOB_BSRR, GPIOB_BSRR_PIN7_RESET); // Установка 0 в 7-й бит ODR (выкл)
        }
    }
}