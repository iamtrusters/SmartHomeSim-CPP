/**
 * @file DoorLock.cpp
 * @brief Implementation of the DoorLock device class for the SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#include "DoorLock.hpp"
#include <iostream>

std::string DoorLock::getStatus() const {
    return isLocked ? "Door is LOCKED" : "Door is UNLOCKED";
}

void DoorLock::turnOn() {
    lock();
    std::cout << "Door locked." << std::endl;
}   

void DoorLock::turnOff() {
    unlock();
    std::cout << "Door unlocked." << std::endl;
}

void DoorLock::lock() {
    isLocked = true;
}

void DoorLock::unlock() {
    isLocked = false;
}

bool DoorLock::getLockState() const {
    return isLocked;
}

