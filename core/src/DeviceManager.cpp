/**
 * @file DeviceManager.cpp
 * @brief Implementation of the DeviceManager class for the SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-07
 */


#include "DeviceManager.hpp"
#include <iostream>

void DeviceManager::addDevice(const std::string& name, std::shared_ptr<Device> device) {
    devices_[name] = device;
}

void DeviceManager::removeDevice(const std::string& name) {
    devices_.erase(name);
}

std::shared_ptr<Device> DeviceManager::getDevice(const std::string& name) const {
    auto it = devices_.find(name);
    if (it != devices_.end()) {
        return it->second;
    }
    return nullptr;
}

void DeviceManager::turnOnDevice(const std::string& name) {
    auto device = getDevice(name);
    if (device) {
        device->turnOn();
    }
}

void DeviceManager::turnOffDevice(const std::string& name) {
    auto device = getDevice(name);
    if (device) {
        device->turnOff();
    }
}

std::string DeviceManager::getDeviceStatus(const std::string& name) const {
    auto device = getDevice(name);
    if (device) {
        return device->getStatus();
    }
    return "Device not found";
}

void DeviceManager::listAllDevices() const {
    for (const auto& pair : devices_) {
        std::cout << pair.first << ": " << pair.second->getStatus() << std::endl;
    }
}