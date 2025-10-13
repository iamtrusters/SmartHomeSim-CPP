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
    if(!device) {
        std::cerr << "Error: Attempted to add a null device with name " << name << std::endl;
    }else{
        std::cout << "Adding device: " << name << std::endl;
        devices_[name] = device;
    }
   
}

void DeviceManager::removeDevice(const std::string& name) {
    if(devices_.find(name) == devices_.end()) {
        std::cerr << "Warning: Attempted to remove non-existent device " << name << std::endl;
    } else{
        std::cout << "Removing device: " << name << std::endl;
        devices_.erase(name);
    }
    
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