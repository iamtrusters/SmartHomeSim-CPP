/**
 * @file Device.hpp
 * @brief Defines the abstract base class for all smart home devices.
 *
 * This file is part of the SmartHome project, which demonstrates
 * multiple software design patterns including Factory, Observer, Command,
 * and Facade in a modular C++ architecture.
 *
 * @details
 * The Device class declares common properties and virtual methods
 * for all smart devices (e.g., Light, Thermostat, DoorLock).
 * Derived classes implement specific behaviors.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <string>

class Device {
public:
    virtual ~Device() = default;

    // Common methods for all devices
    virtual std::string getStatus() const = 0;
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

#endif // DEVICE_HPP
