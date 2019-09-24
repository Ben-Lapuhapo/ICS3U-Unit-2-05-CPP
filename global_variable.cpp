// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created on: Sep 23 2019
// Created by: Ben Lapuhapo
// This program calculates the cost of pizza

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
    // this shows what happens with local variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout << "GLobal variableX, variableY, variableZ: " << variableX
              << "+" << variableY << "=" << variableZ << std::endl;
}

int main() {
    // this function call global and local

    localVariable();
    globalVariable();
}
