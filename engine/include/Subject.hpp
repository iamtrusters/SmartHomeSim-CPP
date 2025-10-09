/**
 * @file Subject.hpp
 * @brief Defines the Subject interface for the Observer design pattern.
 *
 * The Subject interface provides methods to manage observers and notify them of changes.
 * 
 *
 * @author Long Pham
 * @date 2025-10-09
 */

#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include "Observer.hpp"

/*
 * Subject interface for the Observer design pattern.
 * Defines methods to manage observers and notify them of changes.
 */

class Subject {
public:
    virtual ~Subject() = default;

    virtual void attach(Observer* observer) = 0;
    virtual void detach(Observer* observer) = 0;
    virtual void notify() = 0;
};

#endif // SUBJECT_HPP