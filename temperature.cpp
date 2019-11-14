// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: November 2019
// This program uses user defined functions

#include <iostream>
#include <string>
#include <iomanip>   // for std::setprecision()

void fahrenheit() {
    // calculates temperature from Celsius to Fahrenheit

    std::string tempInCelsiusString;
    float tempInCelsius;
    float tempInFahrenheit;

    // input
    std::cout << "Let's convert temperatures from Celsius to Fahrenheit!"
              << std::endl;
    std::cout << "What is the temperature? (°C): ";
    std::cin >> tempInCelsiusString;
    std::cout << " " << std::endl;

    // process
    try {
        tempInCelsius = std::stoi(tempInCelsiusString);
        tempInFahrenheit = (9.0/5.0 * tempInCelsius) + 32;
        // output
        std::cout << "The temperature is " << tempInFahrenheit
                  << "°F in Fahrenheit." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl; }
}

main() {
    // call function
    fahrenheit();
}
