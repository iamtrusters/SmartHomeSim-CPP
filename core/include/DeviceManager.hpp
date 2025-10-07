/**
 * @file DeviceManager.hpp
 * @brief Defines the DeviceManager class for the SmartHome system.
 *
 * The DeviceManager class is responsible for managing and controlling
 * various smart home devices, including thermostats, lights, and security
 * cameras.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#ifndef DEVICEMANAGER_HPP
#define DEVICEMANAGER_HPP

#include "Device.hpp"
#include "Thermostat.hpp"
#include "Light.hpp"
#include "DoorLock.hpp"
#include <unordered_map>
#include <memory>
#include <string>

class DeviceManager {
private:
    std::unordered_map<std::string, std::shared_ptr<Device>> devices_;
public:
    DeviceManager() = default;
    ~DeviceManager() = default;

    void addDevice(const std::string& name, std::shared_ptr<Device> device);
    void removeDevice(const std::string& name);
    std::shared_ptr<Device> getDevice(const std::string& name) const;
    void turnOnDevice(const std::string& name);
    void turnOffDevice(const std::string& name);
    std::string getDeviceStatus(const std::string& name) const;
    void listAllDevices() const;
};

#endif // DEVICEMANAGER_HPP