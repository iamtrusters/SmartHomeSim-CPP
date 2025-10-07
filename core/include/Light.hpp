/**
 * @file Light.h
 * @brief Defines the Light device class for the SmartHome system.
 *
 * The Light class inherits from Device and implements methods for turning
 * the light on/off and adjusting brightness levels.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Device.hpp"


class Light : public Device {
private:
    bool isOn = false;
    int brightness = 0; // Brightness level from 0 to 100

public:
    Light() = default;
    ~Light() override = default;
    // Implement the Device interface
    std::string getStatus() const override;
    void turnOn() override;
    void turnOff() override;

};

#endif // LIGHT_HPP