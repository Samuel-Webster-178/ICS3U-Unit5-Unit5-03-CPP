// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates middle grade percentage


#include <iostream>
#include <string>


int CalculatePercentage(std::string grade) {
    // I calculate grade percentage
    int percentage;

    // process
    if (grade == "4+") {
        percentage = 97;
    } else if (grade == "4") {
        percentage = 90;
    } else if (grade == "4-") {
        percentage = 83;
    } else if (grade == "3+") {
        percentage = 78;
    } else if (grade == "3") {
        percentage = 75;
    } else if (grade == "3-") {
        percentage = 71;
    } else if (grade == "2+") {
        percentage = 68;
    } else if (grade == "2") {
        percentage = 64;
    } else if (grade == "2-") {
        percentage = 61;
    } else if (grade == "1+") {
        percentage = 58;
    } else if (grade == "1") {
        percentage = 54;
    } else if (grade == "1-") {
        percentage = 51;
    } else if (grade == "R") {
        percentage = 30;
    } else if (grade == "NE") {
        percentage = 0;
    } else {
        percentage = -1;
    }

    // output
    return percentage;
}

main() {
    // I am main, I receive input
    std::string grade;
    int midPercentage;

    // input
    std::cout << "Enter grade: ";
    std::cin >> grade;
    std::cout << std::endl;
    midPercentage = CalculatePercentage(grade);

    // output
    if (midPercentage != -1) {
        std::cout << "Level " << grade << " has a middle percentage of ";
        std::cout << midPercentage << "%." << std::endl;
    } else {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
