// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This is while loop program

#include <iostream>
#include <string>

main() {
    std::string positiveString;
    int loopCounter = 0;
    int sum = 0;
    int positiveNumber;
    std::cout << "Enter the positive number : ";
    std::cin >> positiveString;
    std::cout << "" << std::endl;

    try {
        positiveNumber = std::stoi(positiveString);


        if (positiveNumber > 0) {
            while (loopCounter <= positiveNumber) {
                sum = sum + loopCounter;
                loopCounter = loopCounter + 1;
            }
            std::cout << sum;
        } else {
            std::cout << "This year is negative number";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not an integer";
    }
}
