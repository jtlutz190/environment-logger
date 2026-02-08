# environment-logger
This project implements an ESP-32 based environmental data logger using a BMP280 for temperature and pressure sensors over I²C. The system uses real-time data acquisition and streams measurements over serial for later time-series and data visualization in Python.

## Goal
Implement an end-to-end environmental data logging system that collects temperature and pressure data using a BMP280 + ESP32, streams it to a machine, and executes Python-based time-series analysis to visualize trends, compute statistics, and detect anomalies.
## Hardware Used:
* ESP32 Dev Board
* BMP280 Sensor breakout
* Breadboard + jumper wires

 ## Pin mapping table
==============================================================
Signal                ESP32 Pin                 BMP280 Pin
--------------------------------------------------------------
 3.3V                   3.3V                        VCC
 GND                    GND                         GND
 SDA                    D21                         SDA
 SCL                    D22                         SCL
 CSB                    3.3V                        CSB
 SDO                    GND                         SDO(address = 0x76)

 ## Hardware Bring-Up and Verification

The BMP280 was successfully brought up over the I²C bus.

-I²C scan detected BMP280 sensor (I²C_scanner.ino) at address = '0x76'.
-Raw temperature and pressure data were recorded and streamed over serial.


 ## Concepts Learned and Used
 * Learned to verify I²C communication using bus scanning before using sensors.
