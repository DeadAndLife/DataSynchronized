//
//  DataSynchronized.h
//  AhaIt
//
//  Created by 呼哈哈 on 2019/7/29.
//  Copyright © 2019 zlee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataSyncAdd.h"

NS_ASSUME_NONNULL_BEGIN

@interface DataSynchronized : NSObject

+ (instancetype)sharedInstance;

- (void)addDataSynchronizedWith:(id)object
                        keyPath:(NSString *)keyPath
                         IDPath:(NSString *)IDPath
                       onChange:(OnChange)onChange;

- (void)bindingDataSynchronizedObject:(id)object toClass:(Class)cls keyPath:(NSString *)keyPath IDPath:(NSString *)IDPath onChange:(OnChange)onChange;

- (void)cleanZombieObjectWithCacheKey:(NSString *)cacheKey IDKey:(NSString *)IDKey;

@end

NS_ASSUME_NONNULL_END