#pragma once

// Sensor pins on esp32
constexpr int SENSOR_A_PIN = 34;
constexpr int SENSOR_B_PIN = 35;

// Serial baud rate
constexpr int SERIAL_BAUD = 115200;

// Sensor sampling
constexpr unsigned long SAMPLE_INTERVAL_MS = 100;
constexpr int ADC_SAMPLES = 10;

// Stability detection
constexpr unsigned long STEADY_TIME_MS = 1000;