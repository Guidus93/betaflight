/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "ZEEZF7"
#define USBD_PRODUCT_STRING  "ZeeZ F7"
#define TARGET_MANUFACTURER_IDENTIFIER  "ZEEZ"

#define USE_TARGET_CONFIG
#define USE_PINIO
#define PINIO1_PIN              PB11 // VTX switch
#define USE_PINIOBOX

//#define CAMERA_CONTROL_PIN              PA8

//#define ENABLE_DSHOT_DMAR       true
#define LED0_PIN                PC14
#define LED1_PIN                PC15

#define USE_BEEPER
#define BEEPER_PIN              PB2
#define BEEPER_INVERTED


#define USE_EXTI
#define USE_GYRO_EXTI
#define USE_MPU_DATA_READY_SIGNAL
                 

#define USE_ACC
#define USE_GYRO
#define USE_GYRO_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_MPU6000
#define USE_ACC_SPI_MPU6000


#define GYRO_1_CS_PIN           PB12
#define GYRO_1_SPI_INSTANCE     SPI2
#define GYRO_1_EXTI_PIN PC9
#define GYRO_1_ALIGN      CW0_DEG_FLIP

#define USE_VCP
#define USE_UART1
#define USE_UART2
#define USE_UART3
#define USE_UART4
#define USE_UART5
#define USE_UART6

#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define UART3_TX_PIN            PB10
#define UART3_RX_PIN            PB11

#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2

#define UART6_TX_PIN            PC6
#define UART6_RX_PIN            PC7

#define SERIAL_PORT_COUNT       7 


#define USE_SPI
#define USE_SPI_DEVICE_1 //FLASH
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6 
#define SPI1_MOSI_PIN           PA7

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_W25N01G
#define FLASH_CS_PIN            PA4
#define FLASH_SPI_INSTANCE      SPI1

#define USE_SPI_DEVICE_2 // MPU6000
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_3 // OSD  
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PB5

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI3
#define MAX7456_SPI_CS_PIN      PA15



#define USE_ADC
#define ADC_INSTANCE         ADC3 
#define ADC3_DMA_OPT            0
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define VBAT_ADC_PIN                        PC2
#define CURRENT_METER_ADC_PIN               PC3

#define VBAT_SCALE_DEFAULT          109
#define CURRENT_METER_SCALE_DEFAULT         350                


#define USE_OSD
#define USE_LED_STRIP
#define USE_ESCSERIAL

#define DEFAULT_RX_FEATURE                  FEATURE_RX_SERIAL
#define DEFAULT_FEATURES                    FEATURE_OSD
#define SERIALRX_UART                       SERIAL_PORT_UART4
#define SERIALRX_PROVIDER                   SERIALRX_CRSF

#define TARGET_IO_PORTA                 0xffff
#define TARGET_IO_PORTB                 0xffff
#define TARGET_IO_PORTC                 0xffff
#define TARGET_IO_PORTD                 0xffff

#define USABLE_TIMER_CHANNEL_COUNT 9
#define USED_TIMERS  (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4) )
