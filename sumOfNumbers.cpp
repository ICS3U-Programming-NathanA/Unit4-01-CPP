// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 26 2022
// This program asks the user for a number it then
// adds up every nubmer until it reaches the users number

#include <iostream>

// declare userNum as a integer
int userNum;

int main() {
    // declare counter and sum and set it them to 0
    int counter = 0;
    int sum = 0;

    // declare userNumString as a string
    std::string userNumString;

    // get the users number
    std::cout << "Enter a integer: ";
    std::cin >> userNumString;

    // A try catch statement to catch
    // if the user enters a string or a decimal
    try {
        userNum = std::stoi(userNumString);
        // If statement to see if userNum is a negative
        if (userNum >= 0) {
            // While loop to calculate the sum
            while (counter <= userNum) {
                std::cout << counter << " + ";
                sum = sum + counter;
                counter++;
            }
            std::cout << "= " << sum << "\n";
        } else {
            std::cout << "Please enter a positive integer \n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a integer\n";
    }
}
