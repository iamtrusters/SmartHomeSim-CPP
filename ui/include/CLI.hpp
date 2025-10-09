/**
 * @file CLI.hpp
 * @brief Defines the Command Line Interface (CLI) for the Smart Home project.
 *
 * This file is part of the SmartHome project, which demonstrates
 * multiple software design patterns including Factory, Observer, Command,
 * and Facade in a modular C++ architecture.
 *
 * @details
 * The CLI class provides methods for user interaction and controlling
 * smart home devices through a command line interface.
 *
 * @author Long Pham
 * @date 2025-10-09
 */

#ifndef CLI_HPP
#define CLI_HPP

#include <string>

class CLI {
public:
    void start();
    void displayMenu();
    void handleUserInput(const std::string& input);
};

#endif // CLI_HPP

