//
//  ObjCalculatorWrapper.m
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

#import "ObjCalculatorWrapper.h"
#include "CppCalculatorClass.hpp"

@implementation ObjCalculatorWrapper {
    CppCalculatorClass *_calculator;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _calculator = new CppCalculatorClass();
    }
    return self;
}

- (void)dealloc {
    delete _calculator;
}

- (double)add:(double)a with:(double)b {
    return _calculator->add(a, b);
}

- (double)subtract:(double)a with:(double)b {
    return _calculator->subtract(a, b);
}

- (double)multiply:(double)a with:(double)b {
    return _calculator->multiply(a, b);
}

- (double)divide:(double)a with:(double)b {
    if (b == 0) {
        NSLog(@"Error: Division by zero");
        return NAN; // Return Not-a-Number for division by zero
    }
    return _calculator->divide(a, b);
}

- (void)setCallbackHandler:(void (^)(BOOL success, NSString *message))handler {
    _calculator->setCallback([handler](bool success, std::string message) {
        NSLog(@"Callback received: %@", [NSString stringWithUTF8String:message.c_str()]);
        NSString *nsMessage = [NSString stringWithUTF8String:message.c_str()];
        handler(success, nsMessage);
    });
}
@end
