// Copyright (c) Mother Teresa HS All rights reserved
//
// Created by: Dahrio Francois
// Created on: November 2020
// this program calculates two numbers and adds them together
//     with user input

#include <iostream>

int main() {
    // this function calculates two numbers and adds them together
    int number1;
    int number2;
    int addition;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    // process
    addition = number1 + number2;

    // output
    std::cout << "" << std::endl;
    std::cout << "Added numbers is " << addition << std::endl;
}
