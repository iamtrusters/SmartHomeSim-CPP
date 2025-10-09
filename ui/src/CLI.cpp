/**
 * @file CLI.cpp
 * @brief Implements the Command Line Interface (CLI) for the Smart Home project.
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

#include "CLI.hpp"
#include <iostream>

void CLI::start(){
    std::string input;
    while(true){
        displayMenu();
        std::getline(std::cin, input);
        if(input == "exit") break;
        handleUserInput(input);
    }
}

void CLI::displayMenu(){
    std::cout << "Smart Home CLI Menu:" << std::endl;
    std::cout << "1. List Devices" << std::endl;
    std::cout << "2. Control Device" << std::endl;
    std::cout << "Type 'exit' to quit." << std::endl;
    std::cout << "Enter your choice: ";
}

void CLI::handleUserInput(const std::string& input){
    if(input == "1"){
        std::cout << "Listing all devices..." << std::endl;
        // Logic to list devices
    } else if(input == "2"){
        std::cout << "Controlling a device..." << std::endl;
        // Logic to control a device
    } else {
        std::cout << "Invalid input. Please try again." << std::endl;
    }
}