#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp;  // I2C

void setup() {
  Serial.begin(115200);
  delay(1000);

  Wire.begin(21, 22); // SDA, SCL

  Serial.println("Starting BMP280 init...");

  if (!bmp.begin(0x76)) {  
    Serial.println("Error: BMP280 not found at 0x76");
    while (1) delay(10);
  }

  Serial.println("OK: BMP280 found.");
}

void loop() {
  float t = bmp.readTemperature() * 9/5 + 32; //F
  float p = bmp.readPressure() / 100.0f; // hPa

  Serial.print("T=");
  Serial.print(t, 2);
  Serial.print("F  P=");
  Serial.print(p, 2);
  Serial.println("hPa");

  delay(2000);
}
