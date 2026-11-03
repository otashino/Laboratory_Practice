#include "init.h"

void GPIO_Ini(void) {
    // Включение тактирования портов GPIOB и GPIOC
    RCC_GPIO_EN |= (RCC_GPIOB_EN | RCC_GPIOC_EN);
    
    // Настройка работы 7-го пина GPIOB в режиме вывода сигнала (Output mode)
    GPIOB_MODER |= GPIOB_MODE_PIN7_OUT;
    
    // Настройка на Push-Pull работу 7-го пина GPIOB (Output Push-Pull)
    GPIOB_OTYPER |= GPIOB_OTYPE_PIN7_PP;
    
    // Настройка скорости работы 7-го пина GPIOB на среднюю
    GPIOB_OSPEEDR |= GPIOB_OSPEED_PIN7_MID;
    
    // Отключение PU/PD резисторов для 7-го пина GPIOB
    GPIOB_PUPDR |= GPIOB_PUPDR_PIN7_NOPUPD;
}