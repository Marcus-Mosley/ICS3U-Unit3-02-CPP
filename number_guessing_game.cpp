// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program is a Number Guessing Game

#include <iostream>

int main() {
    // This function checks if a guessed number is equal to 5
    const int CORRECT_NUMBER = 5;
    int guess;

    // Input
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> guess;
    std::cout << "" << std::endl;

    // Process
    if (guess == CORRECT_NUMBER) {
            // Output
            std::cout << "You got it right, the right number was 5!";
    }
}
