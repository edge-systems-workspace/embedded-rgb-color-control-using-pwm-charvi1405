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

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
