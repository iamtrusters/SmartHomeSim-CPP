#include <iostream>
#include "DeviceFactory.hpp"
#include "Subject.hpp"
#include "Observer.hpp"
#include "CLI.hpp"

int main() {
    std::cout << "Smart Home Simulation Started" << std::endl;
    CLI cli;
    cli.start();
    std::cout << "Smart Home Simulation Ended" << std::endl;
    return 0;
}