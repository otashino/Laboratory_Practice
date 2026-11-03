#include <stdint.h>

/* --- Макросы адресов регистров --- */
#define RCC_GPIO_EN     (*(uint32_t*)(0x40023800UL + 0x30UL))

#define GPIOB_MODER     (*(uint32_t*)(0x40020400UL + 0x00UL))
#define GPIOB_OTYPER    (*(uint32_t*)(0x40020400UL + 0x04UL))
#define GPIOB_OSPEEDR   (*(uint32_t*)(0x40020400UL + 0x08UL))
#define GPIOB_PUPDR     (*(uint32_t*)(0x40020400UL + 0x0CUL))
#define GPIOB_BSRR      (*(uint32_t*)(0x40020400UL + 0x18UL))

#define GPIOC_IDR       (*(uint32_t*)(0x40020800UL + 0x10UL))

/* --- Макросы значений (масок) для настройки пинов --- */
#define RCC_GPIOB_EN            0x02UL
#define RCC_GPIOC_EN            0x04UL

#define GPIOB_MODE_PIN7_OUT     0x4000UL
#define GPIOB_OTYPE_PIN7_PP     0x0000UL
#define GPIOB_OSPEED_PIN7_MID   0x4000UL
#define GPIOB_PUPDR_PIN7_NOPUPD 0x0000UL

#define GPIOB_BSRR_PIN7_SET     0x000080UL
#define GPIOB_BSRR_PIN7_RESET   0x800000UL

#define GPIOC_IDR_PIN13         0x2000UL

/* --- Макросы операций с битами --- */
#define READ_BIT(REG, BIT)      ((REG) & (BIT))
#define SET_BIT(REG, BIT)       ((REG) |= (BIT))

/* --- Объявление функции инициализации --- */
void GPIO_Ini(void);