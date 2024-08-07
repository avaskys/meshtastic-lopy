#undef GPS_RX_PIN
#undef GPS_TX_PIN

#undef PIN_NEOPIXEL // no support
#define LED_PIN 12

#define BUTTON_NEED_PULLUP
#define BUTTON_PIN 13 // pycom expansion board v2

// Pin definition in LoPy4 Manual is incorrect. See link to errata:
// https://forum.pycom.io/topic/3403/wiring-of-dio-pins-of-lora-sx127x-chip-to-esp32/4?_=1655162492722
// https://forum.pycom.io/topic/3483/erratum-in-lopy4-specification-document
// LoPy (original, not 4) pin definition:
// https://forum.pycom.io/post/20460

#define USE_RF95
#define LORA_DIO0 23 // Note: All DIO are wired through a diode bridge to a single pin
#define LORA_RESET 18
#define LORA_DIO1 23 // Not really used
#define LORA_DIO2 23 // Not really used

#undef RF95_SCK
#define RF95_SCK 5
#undef RF95_MISO
#define RF95_MISO 19
#undef RF95_MOSI
#define RF95_MOSI 27
#undef RF95_NSS
#define RF95_NSS 17

#define HAS_SCREEN 0
#define HAS_TELEMETRY 0
#define HAS_SENSOR 0