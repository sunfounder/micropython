#define MICROPY_HW_BOARD_NAME       "Leaf V0.1"
#define MICROPY_HW_MCU_NAME         "Unknown"

#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_CAN       (1)

// HSE is 12MHz
#define MICROPY_HW_CLK_PLLM (12)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// The leafoard has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// UART config
#define MICROPY_HW_UART1_TX     (pin_B6)
#define MICROPY_HW_UART1_RX     (pin_B7)
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)
#define MICROPY_HW_UART2_RTS    (pin_A1)
#define MICROPY_HW_UART2_CTS    (pin_A0)
#define MICROPY_HW_UART3_TX     (pin_B10)
#define MICROPY_HW_UART3_RX     (pin_B11)
#define MICROPY_HW_UART3_RTS    (pin_B14)
#define MICROPY_HW_UART3_CTS    (pin_B13)
#define MICROPY_HW_UART4_TX     (pin_A0)
#define MICROPY_HW_UART4_RX     (pin_A1)
#define MICROPY_HW_UART6_TX     (pin_C6)
#define MICROPY_HW_UART6_RX     (pin_C7)

// I2C busses
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)
#define MICROPY_HW_I2C2_SCL (pin_B10)
#define MICROPY_HW_I2C2_SDA (pin_B11)

// SPI busses
#define MICROPY_HW_SPI1_NSS  (pin_A4) // X5
#define MICROPY_HW_SPI1_SCK  (pin_A5) // X6
#define MICROPY_HW_SPI1_MISO (pin_A6) // X7
#define MICROPY_HW_SPI1_MOSI (pin_A7) // X8
#define MICROPY_HW_SPI2_NSS  (pin_B12) // Y5
#define MICROPY_HW_SPI2_SCK  (pin_B13) // Y6
#define MICROPY_HW_SPI2_MISO (pin_B14) // Y7
#define MICROPY_HW_SPI2_MOSI (pin_B15) // Y8

// The leafoard has 4 LEDs
#define MICROPY_HW_LED1             (pin_B3) // red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
