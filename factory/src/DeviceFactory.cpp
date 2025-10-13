/**
 * @file DeviceFactory.cpp
 * @brief Implements the DeviceFactory class for creating SmartHome devices.
 *
 * The DeviceFactory class provides methods for creating instances of
 * various SmartHome devices, including lights, thermostats, and security
 * cameras.
 *
 * @author Long Pham
 * @date 2025-10-08
 */

#include "DeviceFactory.hpp"

std::unique_ptr<Device> DeviceFactory::createDevice(const std::string& type) {
    if (type == "light") {
        return std::make_unique<Light>();
    } else if (type == "thermostat") {
        return std::make_unique<Thermostat>();
    } else if (type == "doorlock") {
        return std::make_unique<DoorLock>();
    }
    return nullptr;
}

