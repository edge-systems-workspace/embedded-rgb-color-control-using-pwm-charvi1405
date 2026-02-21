#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Charvi Mittal
 * @date 2026-02-15
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

int redPin = 9;

int greenPin = 10;

int bluePin = 11;

void setup() {
    pinMode(redPin, OUTPUT);

    pinMode(greenPin, OUTPUT);

    pinMode(bluePin, OUTPUT);
}

void loop() {
    analogWrite(redPin, 255); // Red color
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    delay(1000);
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
    delay(1000);
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    delay(1000);
}
