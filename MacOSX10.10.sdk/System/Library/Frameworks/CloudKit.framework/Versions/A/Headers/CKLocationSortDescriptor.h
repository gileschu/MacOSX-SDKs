//
//  CKLocationSortDescriptor.h
//  CloudKit
//
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

NS_CLASS_AVAILABLE(10_10, 8_0)
@interface CKLocationSortDescriptor : NSSortDescriptor <NSSecureCoding>

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithKey:(NSString *)key relativeLocation:(CLLocation *)relativeLocation NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithCoder:(NSCoder *)aDecoder NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly, copy) CLLocation *relativeLocation;

@end
