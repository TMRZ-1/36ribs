#pragma once

// Dane identyfikacyjne USB
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001

// Konfiguracja matrycy
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

// Piny matrycy
#define MATRIX_ROW_PINS { GP2, GP3, GP9, GP21 }
#define MATRIX_COL_PINS { GP4, GP5, GP6, GP7, GP8, GP23, GP20, GP22, GP26, GP27 }

#define DIODE_DIRECTION COL2ROW

// Zezwól Vial na kontrolowanie jasności i efektów rgblight
#define VIAL_RGBLIGHT_ENABLE

// Identyfikator Vial
#define VIAL_KEYBOARD_ID "36ribs"

// Wymagane przez wewnętrzny sterownik ws2812_vendor dla RP2040
#ifndef WS2812_DI_PIN
#    define WS2812_DI_PIN GP28
#endif

// Zabezpieczenie dla ChibiOS system LED pin
#define RP2040_LED_PIN GP28