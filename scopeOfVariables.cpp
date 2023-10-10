// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Created on: Oct. 6, 2023
// This program shows how local and global variables work.

#include <iostream>

// global variable
int variableX = 17;

void localVariable() {
    // define local variables
    int variableX = 23;
    int variableY = 5;
    int variableZ;

    // Calculate local variables
    variableX = variableX + 1;
    variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: "
    << variableX << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // define global variables
    int variableY = 13;
    int variableZ;

    // Calculate global variables
    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Global variableX, variableY, variableZ: "
    << variableX << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // call local and global variables
    localVariable();
    globalVariable();

    std::cout << "\nDone." << std::endl;
}
