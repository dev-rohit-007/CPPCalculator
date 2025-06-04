//
//  ModelClass.m
//  CPPCalculator
//
//  Created by Rohit Mishra on 04/06/25.
//

#import <Foundation/Foundation.h>
#import "ModelClass.h"

@implementation ModelClass
- (instancetype)init:(NSString *)modelName withVersion:(NSString *)modelVersion {
    self = [super init];
    self.modelName = modelName;
    self.modelVersion = modelVersion;
    return self;
}

- (NSString *)getModelName {
    return self.modelName;
}

- (NSString *)getModelVersion {
    return self.modelVersion;
}

@end
