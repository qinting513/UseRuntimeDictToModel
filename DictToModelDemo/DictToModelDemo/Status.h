//
//  Status.h
//  DictToModelDemo
//
//  Created by ChenMan on 2018/5/8.
//  Copyright © 2018年 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+EnumArr.h"
#import "NSObject+EnumDict.h"

@class PersonModel;
@class CellModel;

@interface Status : NSObject

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) PersonModel *person;

@property (nonatomic, strong) NSArray <CellModel *> *cellMdlArr;
@property (nonatomic, strong) NSString *name;

@end
