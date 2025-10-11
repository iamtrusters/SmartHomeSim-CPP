/**
 * @file ISubject.hpp
 * @brief Defines the Subject interface for the Observer design pattern.
 *
 * The Subject interface provides methods to manage observers and notify them of changes.
 * 
 *
 * @author Long Pham
 * @date 2025-10-09
 */

#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

#include "IObserver.hpp"

/*
 * Subject interface for the Observer design pattern.
 * Defines methods to manage observers and notify them of changes.
 */

class ISubject {
public:
    virtual ~ISubject() = default;

    virtual void attach(IObserver* observer) = 0;
    virtual void detach(IObserver* observer) = 0;
    virtual void notify() = 0;
};

#endif // ISUBJECT_HPP