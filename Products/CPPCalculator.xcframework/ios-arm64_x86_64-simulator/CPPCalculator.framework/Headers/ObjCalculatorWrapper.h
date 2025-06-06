//
//  ObjCalculatorWrapper.h
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

//#ifndef ObjCalculatorWrapper_h
//#define ObjCalculatorWrapper_h
#import <Foundation/Foundation.h>

@interface ObjCalculatorWrapper : NSObject {}
-(double)add:(double)a with:(double)b;
-(double)subtract:(double)a with:(double)b;
-(double)multiply:(double)a with:(double)b;
-(double)divide:(double)a with:(double)b;
- (void)setCallbackHandler:(void (^)(BOOL success, NSString *message))handler;
@end

//#endif /* ObjCalculatorWrapper_h */
