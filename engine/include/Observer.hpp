/**
 * @file Observer.hpp
 * @brief Defines the Observer interface for the Observer design pattern.
 *
 * The Observer interface provides methods for attaching, detaching, and notifying
 * observers in the context of a SmartHome system.
 *
 * @author Long Pham
 * @date 2025-10-09
 */

#ifndef OBSERVER_HPP
#define OBSERVER_HPP

/*
 * Observer interface for the Observer design pattern.
 * Defines the update method that concrete observers must implement.
 */
class Observer {
public:
    virtual ~Observer() = default;
    virtual void update() = 0;
};

#endif // OBSERVER_HPP