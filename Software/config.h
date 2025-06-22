#pragma once

#define ENCODER_A_PINS { GP2 }
#define ENCODER_B_PINS { GP3 }
#define ENCODER_DIRECTION_FLIP
#define DIODE_DIRECTION COL2ROW
#define DEVICE_VER 0x0100

#define MANUFACTURER "syed"
#define PRODUCT "macrouzazv2"
#define PRODUCT_ID 0x0000
#define VENDOR_ID 0xFEED
#define MATRIX_COLS 3
#define MATRIX_ROWS 3
#define MATRIX_COL_PINS { 11, 12, 13 }
#define MATRIX_ROW_PINS { 8, 9, 10 }
#define DIP_SWITCH_PINS { GP4 }
#define OLED_DC_PIN GP5
#define OLED_CS_PIN GP6
#define OLED_RST_PIN GP7
#define OLED_SPI_MODE 3
#define OLED_SPI_DIVISOR 2
#define OLED_DISPLAY_128X64

#define SPI_MISO_PIN NO_PIN

#define SPI_SCK_PIN GP27   // Serial Clock (SCL)
#define SPI_MOSI_PIN GP28   //