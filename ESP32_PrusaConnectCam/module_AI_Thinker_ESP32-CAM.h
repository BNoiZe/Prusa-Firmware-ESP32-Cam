/**
   @file module_AI_Thinker_ESP32-CAM.h

   @brief Definition of the AI Thinker ESP32-CAM module

   @author Miroslav Pivovarsky
   Contact: miroslav.pivovarsky@gmail.com

   https://docs.ai-thinker.com/en/esp32-cam


   Board configuration in the arduino IDE 2.3.2
   Tools -> Board -> ESP32 Arduino -> AI Thinker ESP32
   Tools -> CPU Frequency -> 240MHz (WiFi/BT)
   Tools -> Core debug level -> None
   Tools -> Flash frequency -> 80MHz
   Tools -> Flash Mode -> DIO
   Tools -> Partition scheme -> Minimal SPIFFS (1.9MB APP with OTA/190KB SPIFFS)

   @bug: no know bug

*/

#pragma once

#include "mcu_cfg.h"

#ifdef AI_THINKER_ESP32_CAM

/* --------------- CAMERA CFG -------------------*/
#define PWDN_GPIO_NUM               32      ///< Power down control pin
#define RESET_GPIO_NUM              -1      ///< Reset control pin
#define XCLK_GPIO_NUM                0      ///< External clock pin
#define SIOD_GPIO_NUM               26      ///< SCCB: SI/O data pin
#define SIOC_GPIO_NUM               27      ///< SCCB: SI/O control pin
#define Y9_GPIO_NUM                 35      ///< SCCB: Y9 pin
#define Y8_GPIO_NUM                 34      ///< SCCB: Y8 pin
#define Y7_GPIO_NUM                 39      ///< SCCB: Y7 pin
#define Y6_GPIO_NUM                 36      ///< SCCB: Y6 pin
#define Y5_GPIO_NUM                 21      ///< SCCB: Y5 pin
#define Y4_GPIO_NUM                 19      ///< SCCB: Y4 pin
#define Y3_GPIO_NUM                 18      ///< SCCB: Y3 pin
#define Y2_GPIO_NUM                  5      ///< SCCB: Y2 pin
#define VSYNC_GPIO_NUM              25      ///< Vertical sync pin
#define HREF_GPIO_NUM               23      ///< Line sync pin
#define PCLK_GPIO_NUM               22      ///< Pixel clock pin

/* ------------------ MCU CFG  ------------------*/
#define ENABLE_BROWN_OUT_DETECTION  true   ///< Enable brown out detection
#define ENABLE_PSRAM               true     ///< Enable PSRAM   

/* --------------- OTA UPDATE CFG  --------------*/
#define OTA_UPDATE_FW_FILE          PSTR("ESP32_PrusaConnectCam.ino.bin") ///< OTA update firmware file name
#define FW_STATUS_LED_PIN           4      ///< GPIO pin for status FW update LED
#define FW_STATUS_LED_LEVEL_ON      HIGH   ///< GPIO pin level for status LED ON

/* --------------- FLASH LED CFG  ---------------*/
#define ENABLE_CAMERA_FLASH         true    ///< Enable camera flash function
#define CAMERA_FLASH_DIGITAL_CTRL   false   ///< Enable camera flash digital control
#define CAMERA_FLASH_PWM_CTRL       true    ///< Enable camera flash PWM control
#define FLASH_GPIO_NUM              4       ///< Flash control pin
#define FLASH_OFF_STATUS            0       ///< PWM intensity LED for OFF. 0-2^FLASH_PWM_RESOLUTION = 0-255
#define FLASH_ON_STATUS             205     ///< PWM intensity LED for ON. limitation to 80%. 2^FLASH_PWM_RESOLUTION * 0.8% = 204
#define FLASH_PWM_FREQ              2000    ///< frequency of pwm [240MHz / (100 prescale * pwm cycles)] = frequency
#define FLASH_PWM_CHANNEL           0       ///< channel 0
#define FLASH_PWM_RESOLUTION        8       ///< range 1-20bit. 8bit = 0-255 range

/* --------------- SD CARD CFG  ---------------*/
#define ENABLE_SD_CARD              true    ///< Enable SD card function
#define SD_PIN_CLK                  14      ///< GPIO pin for SD card clock
#define SD_PIN_CMD                  15      ///< GPIO pin for SD card command
#define SD_PIN_DATA0                2       ///< GPIO pin for SD card data 0

/* ---------- RESET CFG CONFIGURATION  ----------*/
#define CFG_RESET_PIN               12      ///< GPIO 16 is for reset CFG to default
#define CFG_RESET_LED_PIN           4       ///< GPIO for indication of reset CFG
#define CFG_RESET_LED_LEVEL_ON      HIGH    ///< GPIO pin level for status LED ON

/* -------------- STATUS LED CFG ----------------*/
#define STATUS_LED_ENABLE           true    ///< enable/disable status LED
#define STATUS_LED_GPIO_NUM         33      ///< GPIO pin for status LED
#define STATUS_LED_OFF_PIN_LEVEL     LOW     ///< GPIO pin level for status LED ON

#endif  // AI_THINKER_ESP32_CAM
/* EOF */