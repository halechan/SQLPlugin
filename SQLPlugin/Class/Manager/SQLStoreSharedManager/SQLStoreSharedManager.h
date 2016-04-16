//
//  SQLStoreSharedManager.h
//  SQLPlugin
//
//  Created by viktyz on 16/4/4.
//  Copyright © 2016年 Alfred Jiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SQLTableDescription.h"

@interface SQLStoreSharedManager : NSObject

+(instancetype)sharedManager;

-(BOOL)openDatabaseAtPath:(NSString*)path;
-(void)close;

-(void)getAllTablesinPath:(NSString *)path completion:(void (^)(NSArray *))completion;
-(void)getRowsWithCommand:(NSString *)command withTableDescription:(SQLTableDescription*)table completion:(void(^)(NSArray*))completion;
-(void)getRowsWithOffset:(NSNumber*)offset withTableDescription:(SQLTableDescription*)table completion:(void(^)(NSArray*))completion;
-(void)getTableRowsWithCommand:(NSString *)command inDBPath:(NSString *)path completion:(void(^)(SQLTableDescription *table))completion;

@end
