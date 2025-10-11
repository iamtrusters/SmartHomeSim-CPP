/**
 * @file iObserver.hpp
 * @brief Defines the Observer interface for the Observer design pattern.
 *
 * The Observer interface provides methods for attaching, detaching, and notifying
 * observers in the context of a SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-09
 */

#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

/*
 * Observer interface for the Observer design pattern.
 * Defines the update method that concrete observers must implement.
 */
class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void update() = 0;
};

#endif // IOBSERVER_HPP