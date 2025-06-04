//
//  ModelClass.h
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

//#ifndef ModelClass_h
//#define ModelClass_h
//
//
//#endif /* ModelClass_h */


#import <Foundation/Foundation.h>

@interface ModelClass : NSObject
@property (nonatomic, strong) NSString *modelName;
@property (nonatomic, strong) NSString *modelVersion;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)init:(NSString *)modelName withVersion:(NSString *)modelVersion NS_DESIGNATED_INITIALIZER;
- (NSString *)getModelVersion;
- (NSString *)getModelName;
@end
