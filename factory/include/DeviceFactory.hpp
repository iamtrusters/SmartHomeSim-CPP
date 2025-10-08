/**
 * @file DeviceFactory.hpp
 * @brief Defines the DeviceFactory class for creating SmartHome devices.
 *
 * The DeviceFactory class provides methods for creating instances of
 * various SmartHome devices, including lights, thermostats, and security
 * cameras.
 *
 * @author Long Pham
 * @date 2025-10-08
 */

#ifndef DEVICE_FACTORY_HPP
#define DEVICE_FACTORY_HPP

#include "Light.hpp"
#include "Thermostat.hpp"
#include "DoorLock.hpp"
#include <memory>
/*
-Create different types of devices based on input parameters
-Hide the instantiation logic from the client code (decoupling)
-OCP (Open/Closed Principle): The factory can be extended to create new device types without modifying existing code
-Reference: https://refactoring.guru/design-patterns/factory-method/cpp/example
*/
class DeviceFactory {
public:
    static std::unique_ptr<Device> createDevice(const std::string& type);
};

#endif // DEVICE_FACTORY_HPP