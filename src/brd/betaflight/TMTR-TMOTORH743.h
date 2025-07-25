/*==============================================================================
Generated on: 2025-06-11 20:35:54.161701
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: TMOTORH743
Manufacturer ID: TMTR

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/TMTR-TMOTORH743.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-TMTR-TMOTORH743"
#define MF_MCU_NAME "STM32H743"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6000 // #define USE_GYRO_SPI_MPU6000
imu_gizmo ICM42688P // #define USE_GYRO_SPI_ICM42688P
bar_gizmo BMP280 // #define USE_BARO_BMP280
// resource BEEPER 1 E03
pin_out0 PA0 // resource MOTOR 1 A00
pin_out1 PA1 // resource MOTOR 2 A01
pin_out2 PA2 // resource MOTOR 3 A02
pin_out3 PA3 // resource MOTOR 4 A03
pin_out4 PB0 // resource MOTOR 5 B00
pin_out5 PB1 // resource MOTOR 6 B01
pin_out6 PC8 // resource MOTOR 7 C08
pin_out7 PC9 // resource MOTOR 8 C09
// resource LED_STRIP 1 A08
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser1_tx PD5 // resource SERIAL_TX 2 D05
pin_ser2_tx PD8 // resource SERIAL_TX 3 D08
pin_ser3_tx PD1 // resource SERIAL_TX 4 D01
pin_ser4_tx PC12 // resource SERIAL_TX 5 C12
pin_ser5_tx PC6 // resource SERIAL_TX 6 C06
pin_ser6_tx PE8 // resource SERIAL_TX 7 E08
pin_ser7_tx PE1 // resource SERIAL_TX 8 E01
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser1_rx PD6 // resource SERIAL_RX 2 D06
pin_ser2_rx PD9 // resource SERIAL_RX 3 D09
pin_ser3_rx PD0 // resource SERIAL_RX 4 D00
pin_ser4_rx PD2 // resource SERIAL_RX 5 D02
pin_ser5_rx PC7 // resource SERIAL_RX 6 C07
pin_ser6_rx PE7 // resource SERIAL_RX 7 E07
pin_ser7_rx PE0 // resource SERIAL_RX 8 E00
pin_i2c0_scl PB6 // resource I2C_SCL 1 B06
pin_i2c1_scl PB10 // resource I2C_SCL 2 B10
pin_i2c0_sda PB7 // resource I2C_SDA 1 B07
pin_i2c1_sda PB11 // resource I2C_SDA 2 B11
pin_led PE5 // resource LED 1 E05
// resource LED 2 E04
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi1_sclk PB13 // resource SPI_SCK 2 B13
pin_spi2_sclk PC10 // resource SPI_SCK 3 C10
pin_spi3_sclk PE12 // resource SPI_SCK 4 E12
pin_spi5_sclk PB3 // resource SPI_SCK 6 B03
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi1_miso PB14 // resource SPI_MISO 2 B14
pin_spi2_miso PC11 // resource SPI_MISO 3 C11
pin_spi3_miso PE13 // resource SPI_MISO 4 E13
pin_spi5_miso PB4 // resource SPI_MISO 6 B04
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_spi1_mosi PB15 // resource SPI_MOSI 2 B15
pin_spi2_mosi PB2 // resource SPI_MOSI 3 B02
pin_spi3_mosi PE14 // resource SPI_MOSI 4 E14
pin_spi5_mosi PB5 // resource SPI_MOSI 6 B05
pin_bat_v PC1 // resource ADC_BATT 1 C01
bat_gizmo ADC
// resource ADC_RSSI 1 C05
pin_bat_i PC3 // resource ADC_CURR 1 C03
bat_gizmo ADC
// resource ADC_EXT 1 C00
// resource PINIO 1 C14
// resource PINIO 2 D11
// resource PINIO 3 E02
// resource FLASH_CS 1 A15
// resource OSD_CS 1 B12
pin_imu_int PC4 // resource GYRO_EXTI 1 C04
// resource GYRO_EXTI 2 E15
pin_imu_cs PA4 // resource GYRO_CS 1 A04
// resource GYRO_CS 2 E11
// resource USB_DETECT 1 E06
// set gyro_to_use = FIRST
// set mag_bustype = I2C
mag_i2c_bus 0 // set mag_i2c_device = 1
// set baro_bustype = I2C
bar_i2c_bus 1 // set baro_i2c_device = 2
// set blackbox_device = SPIFLASH
// set max7456_spi_bus = 3
// set beeper_inversion = ON
// set beeper_od = OFF
// set current_meter = ADC
// set battery_meter = ADC
// set vbat_scale = 110
// set ibata_scale = 200
// set pinio_config = 1,1,1,1
// set pinio_box = 40,41,42,255
// set flash_spi_bus = 3
// set gyro_1_bustype = SPI
imu_spi_bus 1 // set gyro_1_spibus = 2
imu_align CW90FLIP // set gyro_1_sensor_align = CW90FLIP
// set gyro_2_bustype = SPI
// set gyro_2_spibus = 1
// set gyro_2_sensor_align = CW0FLIP
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32H743 (SH74) 4.3.2 Nov 28 2022 / 07:31:53 (60c9521) MSP API: 1.44

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42688P
#define USE_FLASH
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define USE_BARO
#define USE_BARO_BMP280
#define USE_MAX7456

board_name TMOTORH743
manufacturer_id TMTR

# resources
resource BEEPER 1 E03
resource MOTOR 1 A00
resource MOTOR 2 A01
resource MOTOR 3 A02
resource MOTOR 4 A03
resource MOTOR 5 B00
resource MOTOR 6 B01
resource MOTOR 7 C08
resource MOTOR 8 C09
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 D05
resource SERIAL_TX 3 D08
resource SERIAL_TX 4 D01
resource SERIAL_TX 5 C12
resource SERIAL_TX 6 C06
resource SERIAL_TX 7 E08
resource SERIAL_TX 8 E01
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 D06
resource SERIAL_RX 3 D09
resource SERIAL_RX 4 D00
resource SERIAL_RX 5 D02
resource SERIAL_RX 6 C07
resource SERIAL_RX 7 E07
resource SERIAL_RX 8 E00
resource I2C_SCL 1 B06
resource I2C_SCL 2 B10
resource I2C_SDA 1 B07
resource I2C_SDA 2 B11
resource LED 1 E05
resource LED 2 E04
resource SPI_SCK 1 A05
resource SPI_SCK 2 B13
resource SPI_SCK 3 C10
resource SPI_SCK 4 E12
resource SPI_SCK 6 B03
resource SPI_MISO 1 A06
resource SPI_MISO 2 B14
resource SPI_MISO 3 C11
resource SPI_MISO 4 E13
resource SPI_MISO 6 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 2 B15
resource SPI_MOSI 3 B02
resource SPI_MOSI 4 E14
resource SPI_MOSI 6 B05
resource ADC_BATT 1 C01
resource ADC_RSSI 1 C05
resource ADC_CURR 1 C03
resource ADC_EXT 1 C00
resource PINIO 1 C14
resource PINIO 2 D11
resource PINIO 3 E02
resource FLASH_CS 1 A15
resource OSD_CS 1 B12
resource GYRO_EXTI 1 C04
resource GYRO_EXTI 2 E15
resource GYRO_CS 1 A04
resource GYRO_CS 2 E11
resource USB_DETECT 1 E06

# timer
timer A03 AF1
# pin A03: TIM2 CH4 (AF1)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B01 AF2
# pin B01: TIM3 CH4 (AF2)
timer B04 AF2
# pin B04: TIM3 CH1 (AF2)
timer B05 AF2
# pin B05: TIM3 CH2 (AF2)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer C08 AF3
# pin C08: TIM8 CH3 (AF3)
timer C09 AF3
# pin C09: TIM8 CH4 (AF3)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)
timer B03 AF1
# pin B03: TIM2 CH2 (AF1)
timer A00 AF1
# pin A00: TIM2 CH1 (AF1)
timer A01 AF1
# pin A01: TIM2 CH2 (AF1)
timer A02 AF1
# pin A02: TIM2 CH3 (AF1)

# dma
dma ADC 1 8
# ADC 1: DMA2 Stream 0 Request 9
dma ADC 3 9
# ADC 3: DMA2 Stream 1 Request 115
dma TIMUP 1 0
# TIMUP 1: DMA1 Stream 0 Request 15
dma TIMUP 2 0
# TIMUP 2: DMA1 Stream 0 Request 22
dma TIMUP 3 0
# TIMUP 3: DMA1 Stream 0 Request 27
dma TIMUP 8 0
# TIMUP 8: DMA1 Stream 0 Request 51
dma pin A03 3
# pin A03: DMA1 Stream 3 Request 21
dma pin B00 4
# pin B00: DMA1 Stream 4 Request 25
dma pin B01 5
# pin B01: DMA1 Stream 5 Request 26
dma pin B04 0
# pin B04: DMA1 Stream 0 Request 23
dma pin B05 0
# pin B05: DMA1 Stream 0 Request 24
dma pin B06 0
# pin B06: DMA1 Stream 0 Request 29
dma pin B07 0
# pin B07: DMA1 Stream 0 Request 30
dma pin C08 6
# pin C08: DMA1 Stream 6 Request 49
dma pin C09 7
# pin C09: DMA1 Stream 7 Request 50
dma pin A08 14
# pin A08: DMA2 Stream 6 Request 11
dma pin B03 0
# pin B03: DMA1 Stream 0 Request 19
dma pin A00 0
# pin A00: DMA1 Stream 0 Request 18
dma pin A01 1
# pin A01: DMA1 Stream 1 Request 19
dma pin A02 2
# pin A02: DMA1 Stream 2 Request 20

# feature
feature RX_SERIAL
feature TELEMETRY
feature OSD


# master
set gyro_to_use = FIRST
set mag_bustype = I2C
set mag_i2c_device = 1
set baro_bustype = I2C
set baro_i2c_device = 2
set blackbox_device = SPIFLASH
set max7456_spi_bus = 3
set beeper_inversion = ON
set beeper_od = OFF
set current_meter = ADC
set battery_meter = ADC
set vbat_scale = 110
set ibata_scale = 200
set pinio_config = 1,1,1,1
set pinio_box = 40,41,42,255
set flash_spi_bus = 3
set gyro_1_bustype = SPI
set gyro_1_spibus = 2
set gyro_1_sensor_align = CW90FLIP
set gyro_2_bustype = SPI
set gyro_2_spibus = 1
set gyro_2_sensor_align = CW0FLIP

*/
