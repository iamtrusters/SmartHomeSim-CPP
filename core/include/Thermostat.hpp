/**
 * @file Thermostat.h
 * @brief Defines the Thermostat device class for the SmartHome system.
 *
 * The Thermostat class inherits from Device and implements methods for
 * adjusting temperature settings.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#ifndef THERMOSTAT_HPP
#define THERMOSTAT_HPP

#include "Device.hpp"

class Thermostat : public Device {
private:
    bool isOn = false;
    double currentTemperature = 20.0; // Current temperature in Celsius
    double targetTemperature = 22.0;  // Target temperature in Celsius
public:
    Thermostat() = default;
    ~Thermostat() override = default;
    // Implement the Device interface
    std::string getStatus() const override;
    void turnOn() override;
    void turnOff() override;

    void setTargetTemperature(double temperature);
    double getCurrentTemperature() const;
    double getTargetTemperature() const;
};

#endif // THERMOSTAT_HPP
