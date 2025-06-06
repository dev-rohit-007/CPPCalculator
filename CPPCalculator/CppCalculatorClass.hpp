//
//  CppCalculatorClass.hpp
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

#ifndef CppCalculatorClass_hpp
#define CppCalculatorClass_hpp

#include <stdio.h>
#include <functional>

class CppCalculatorClass {
public:
    CppCalculatorClass();
    ~CppCalculatorClass();
    
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // Closure
    void setCallback(std::function<void(bool, std::string)> callback);
    
private:
    double result;
    std::function<void(bool, std::string)> privateCallback;
};

#endif /* CppCalculatorClass_hpp */
