#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Sneha Singh
 * @date 2026-02-27
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

// TODO 1:
// Define FSR analog pin (Use A0)
const int fsrPin = A0;

// TODO 2:
// Create variable to store sensor reading
int fsrValue = 0;


void setup() {

    Serial.begin(9600);
    Serial.println("FSR Sensor System Initialized...");
}

void loop() {

    fsrValue = analogRead(fsrPin);
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrValue);

    if (fsrValue > 100) {   // Threshold value
        Serial.println("Pressure Detected!");
    } else {
        Serial.println("No Pressure");
    }
    delay(500);
}
