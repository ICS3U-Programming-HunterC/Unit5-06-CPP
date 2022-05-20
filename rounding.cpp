// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 15, 2022
// This program asks what number you want rounded and then asks how many
// decimal places you want it rounded to and then displays it back to the user

#include <iostream>
#include <string>
#include <cmath>

void RoundDecimal(float &number, float &decimal) {
    number = number * pow(10, decimal);
    number += 0.5;
    number = int(number);
    number = number / pow(10, decimal);
}


main() {
    // declare variables
    std::string userNumberString;
    std::string userDecimalString;
    float userNumber;
    float userDecimal;

    // get user input
    std::cout << "Enter a decimal number: ";
    std::cin >> userNumberString;
    std::cout << "Enter the number of decimal places: ";
    std::cin >> userDecimalString;

    try {
            // cast the numbers to a float
        userNumber = std::stof(userNumberString);
        userDecimal = std::stof(userDecimalString);

        float uNum = userNumber;
        // call the function
        RoundDecimal(userNumber, userDecimal);

        std::cout << uNum << " rounded to " << userDecimal << " decimals is: "
<< userNumber;
    } catch  (std::invalid_argument) {
        std::cout << "Must be a valid number!";
}
}
