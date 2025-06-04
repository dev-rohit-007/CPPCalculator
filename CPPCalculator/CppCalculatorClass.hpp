//
//  CppCalculatorClass.hpp
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

#ifndef CppCalculatorClass_hpp
#define CppCalculatorClass_hpp

#include <stdio.h>

class CppCalculatorClass {
public:
    CppCalculatorClass();
    ~CppCalculatorClass();
    
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
private:
    double result;
};

#endif /* CppCalculatorClass_hpp */
