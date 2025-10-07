/**
 * @file Light.cpp
 * @brief Implementation of the Light device class for the SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#include "Light.hpp"
#include <string>
#include <iostream>

std::string Light::getStatus() const {
    return isOn ? "Light is ON, Brightness: " + std::to_string(brightness) :
                  "Light is OFF";
}

void Light::turnOn() {
    isOn = true;
    brightness = 100; // Default brightness when turned on
    std::cout << "Light turned ON with brightness " << brightness << std::endl;
}

void Light::turnOff() {
    isOn = false;
    brightness = 0;
    std::cout << "Light turned OFF" << std::endl;
}

