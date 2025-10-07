/**
 * @file Thermostat.cpp
 * @brief Implementation of the Thermostat device class for the SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#include "Thermostat.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

std::string Thermostat::getStatus() const {
    std::ostringstream status;
    status << std::fixed << std::setprecision(1);
    status << (isOn ? "Thermostat is ON, " : "Thermostat is OFF, ");
    status << "Current Temp: " << currentTemperature << "C, ";
    status << "Target Temp: " << targetTemperature << "C";
    return status.str();
}

void Thermostat::turnOn() {
    isOn = true;
    std::cout << "Thermostat turned ON" << std::endl;
}

void Thermostat::turnOff() {
    isOn = false;
    std::cout << "Thermostat turned OFF" << std::endl;
}

void Thermostat::setTargetTemperature(double temperature) {
    targetTemperature = temperature;
    std::cout << "Target temperature set to " << targetTemperature << "C" << std::endl;
}

double Thermostat::getCurrentTemperature() const {
    return currentTemperature;
}

double Thermostat::getTargetTemperature() const {
    return targetTemperature;
}
