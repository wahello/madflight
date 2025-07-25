/*==============================================================================
Generated on: 2025-06-11 20:35:54.137756
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: SPRACINGF4EVO
Manufacturer ID: SPRO

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/SPRO-SPRACINGF4EVO.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-SPRO-SPRACINGF4EVO"
#define MF_MCU_NAME "STM32F405"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6500 // #define USE_GYRO_SPI_MPU6500
// resource BEEPER 1 C15
pin_out0 PC6 // resource MOTOR 1 C06
pin_out1 PC7 // resource MOTOR 2 C07
pin_out2 PC9 // resource MOTOR 3 C09
pin_out3 PC8 // resource MOTOR 4 C08
pin_out4 PB6 // resource MOTOR 5 B06
pin_out5 PB7 // resource MOTOR 6 B07
pin_out6 PB1 // resource MOTOR 7 B01
pin_out7 PB0 // resource MOTOR 8 B00
// resource SERVO 1 A09
// resource SERVO 2 A10
pin_rcl_ppm PA3 // resource PPM 1 A03
// resource PWM 1 A03
// resource PWM 2 A02
// resource PWM 3 A09
// resource PWM 4 A10
// resource LED_STRIP 1 A01
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser1_tx PA2 // resource SERIAL_TX 2 A02
pin_ser2_tx PB10 // resource SERIAL_TX 3 B10
pin_ser3_tx PC10 // resource SERIAL_TX 4 C10
pin_ser4_tx PC12 // resource SERIAL_TX 5 C12
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser1_rx PA3 // resource SERIAL_RX 2 A03
pin_ser2_rx PB11 // resource SERIAL_RX 3 B11
pin_ser3_rx PC11 // resource SERIAL_RX 4 C11
pin_ser4_rx PD2 // resource SERIAL_RX 5 D02
pin_ser1_inv PB2 // resource INVERTER 2 B02
pin_i2c0_scl PB8 // resource I2C_SCL 1 B08
pin_i2c0_sda PB9 // resource I2C_SDA 1 B09
pin_led PA0 // resource LED 1 A00
// resource TRANSPONDER 1 A08
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi1_sclk PB13 // resource SPI_SCK 2 B13
pin_spi2_sclk PB3 // resource SPI_SCK 3 B03
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi1_miso PB14 // resource SPI_MISO 2 B14
pin_spi2_miso PB4 // resource SPI_MISO 3 B04
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_spi1_mosi PB15 // resource SPI_MOSI 2 B15
pin_spi2_mosi PB5 // resource SPI_MOSI 3 B05
// resource ESCSERIAL 1 A03
pin_bat_v PC1 // resource ADC_BATT 1 C01
bat_gizmo ADC
// resource ADC_RSSI 1 C00
pin_bat_i PC2 // resource ADC_CURR 1 C02
bat_gizmo ADC
pin_bbx_cs PB12 // resource SDCARD_CS 1 B12
bbx_gizmo SDSPI
// resource SDCARD_DETECT 1 C14
pin_imu_int PC13 // resource GYRO_EXTI 1 C13
pin_imu_cs PA4 // resource GYRO_CS 1 A04
// resource VTX_CS 1 A15
// set mag_bustype = I2C
mag_i2c_bus 0 // set mag_i2c_device = 1
// set baro_bustype = I2C
bar_i2c_bus 0 // set baro_i2c_device = 1
// set adc_device = 3
// set blackbox_device = SDCARD
// set battery_meter = ADC
// set beeper_inversion = ON
// set beeper_od = OFF
// set sdcard_detect_inverted = ON
// set sdcard_mode = SPI
bbx_spi_bus 1 // set sdcard_spi_bus = 2
// set system_hse_mhz = 8
// set vtx_spi_bus = 3
// set dashboard_i2c_bus = 1
// set gyro_1_bustype = SPI
imu_spi_bus 0 // set gyro_1_spibus = 1
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F405 (S405) 4.2.0 Feb  2 2020 / 14:39:25 (30bf9e809f) MSP API: 1.43

#define USE_ACC
#define USE_ACC_SPI_MPU6500
#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
#define USE_SDCARD

board_name SPRACINGF4EVO
manufacturer_id SPRO

# resources
resource BEEPER 1 C15
resource MOTOR 1 C06
resource MOTOR 2 C07
resource MOTOR 3 C09
resource MOTOR 4 C08
resource MOTOR 5 B06
resource MOTOR 6 B07
resource MOTOR 7 B01
resource MOTOR 8 B00
resource SERVO 1 A09
resource SERVO 2 A10
resource PPM 1 A03
resource PWM 1 A03
resource PWM 2 A02
resource PWM 3 A09
resource PWM 4 A10
resource LED_STRIP 1 A01
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_TX 3 B10
resource SERIAL_TX 4 C10
resource SERIAL_TX 5 C12
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource SERIAL_RX 3 B11
resource SERIAL_RX 4 C11
resource SERIAL_RX 5 D02
resource INVERTER 2 B02
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 A00
resource TRANSPONDER 1 A08
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B05
resource ESCSERIAL 1 A03
resource ADC_BATT 1 C01
resource ADC_RSSI 1 C00
resource ADC_CURR 1 C02
resource SDCARD_CS 1 B12
resource SDCARD_DETECT 1 C14
resource GYRO_EXTI 1 C13
resource GYRO_CS 1 A04
resource VTX_CS 1 A15

# timer
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer A02 AF3
# pin A02: TIM9 CH1 (AF3)
timer C06 AF3
# pin C06: TIM8 CH1 (AF3)
timer C07 AF3
# pin C07: TIM8 CH2 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer A01 AF1
# pin A01: TIM2 CH2 (AF1)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer B11 AF1
# pin B11: TIM2 CH4 (AF1)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer A09 AF1
# pin A09: TIM1 CH2 (AF1)
timer A10 AF1
# pin A10: TIM1 CH3 (AF1)

# dma
dma SPI_TX 2 0
# SPI_TX 2: DMA1 Stream 4 Channel 0
dma ADC 3 1
# ADC 3: DMA2 Stream 1 Channel 2
dma pin C06 1
# pin C06: DMA2 Stream 2 Channel 7
dma pin C07 1
# pin C07: DMA2 Stream 3 Channel 7
dma pin C09 0
# pin C09: DMA2 Stream 7 Channel 7
dma pin C08 1
# pin C08: DMA2 Stream 4 Channel 7
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin B01 0
# pin B01: DMA1 Stream 2 Channel 5
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin A01 0
# pin A01: DMA1 Stream 6 Channel 3
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin B11 1
# pin B11: DMA1 Stream 6 Channel 3
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0
dma pin A09 1
# pin A09: DMA2 Stream 2 Channel 6
dma pin A10 1
# pin A10: DMA2 Stream 6 Channel 6

# feature
feature OSD

# master
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 1
set adc_device = 3
set blackbox_device = SDCARD
set battery_meter = ADC
set beeper_inversion = ON
set beeper_od = OFF
set sdcard_detect_inverted = ON
set sdcard_mode = SPI
set sdcard_spi_bus = 2
set system_hse_mhz = 8
set vtx_spi_bus = 3
set dashboard_i2c_bus = 1
set gyro_1_bustype = SPI
set gyro_1_spibus = 1

*/
