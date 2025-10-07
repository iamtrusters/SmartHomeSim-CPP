/**
 * @file DoorLock.h
 * @brief Defines the DoorLock device class for the SmartHome system.
 *
 * The DoorLock class inherits from Device and implements methods for locking
 * and unlocking the door.
 *
 * @author Long Pham
 * @date 2025-10-07
 */

#ifndef DOORLOCK_HPP
#define DOORLOCK_HPP

#include "Device.hpp"
#include <string>

class DoorLock : public Device {
private:
    bool isLocked = true;
public:
    DoorLock() = default;
    ~DoorLock() override = default;
    // Implement the Device interface
    std::string getStatus() const override;
    void turnOn() override;  // Lock the door
    void turnOff() override; // Unlock the door
    void lock();
    void unlock();
    bool getLockState() const;
};

#endif // DOORLOCK_HPP