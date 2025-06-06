//
//  CppCalculatorClass.cpp
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

#include "CppCalculatorClass.hpp"

CppCalculatorClass::CppCalculatorClass() {}
CppCalculatorClass::~CppCalculatorClass() {}

double CppCalculatorClass::add(double a, double b) {
    if (privateCallback) {
        privateCallback(true, "Addition successful: " + std::to_string(result));
    }
    return a + b;
}

double CppCalculatorClass::subtract(double a, double b) {
    if (privateCallback) {
        privateCallback(true, "Subtraction successful: " + std::to_string(result));
    }
    
    return a - b;
}

double CppCalculatorClass::multiply(double a, double b) {
    if (privateCallback) {
        privateCallback(true, "Multiplication successful: " + std::to_string(result));
    }
    return a * b;
}

double CppCalculatorClass::divide(double a, double b) {
    if (b == 0) {
        if (privateCallback) {
            privateCallback(false, "Error: Division by zero");
        }
        return 0;
    }
    double result = a / b;
    if (privateCallback) {
        privateCallback(true, "Division successful: " + std::to_string(result));
    }
    return result;
}


void CppCalculatorClass::setCallback(std::function<void(bool, std::string)> callback) {
    privateCallback = callback;
}

