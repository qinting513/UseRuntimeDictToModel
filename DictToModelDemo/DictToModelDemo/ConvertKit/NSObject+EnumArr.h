//
//  NSObject+EnumArr.h
//  DictToModelDemo
//
//  Created by ChenMan on 2018/5/8.
//  Copyright © 2018年 cimain. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ModelDelegate <NSObject>

@optional
// 提供一个协议，只要准备这个协议的类，都能把数组中的字典转模型
// 用在三级数组转换
/*
 类似于：某个model有这样的属性
 @property (nonatomic, strong) NSArray <CellModel *> *cellMdlArr;
 要实现这个协议(使之对应起来)：
 + (NSDictionary *)arrayContainModelClass {
 return @{@"cellMdlArr" : @"CellModel"};
 }
 */
+ (NSDictionary *)arrayContainModelClass;

/*
 类似于：某个model有这样的属性 @property (nonatomic, strong) PersonModel *person;
 要实现重写:
 + (NSDictionary *)dictWithModelClass {
 return @{@"person" : @"PersonModel"};
 }
 */
+ (NSDictionary *)dictWithModelClass;
@end


@interface NSObject (EnumArr)

// 字典转模型
+ (instancetype)modelWithDict:(NSDictionary *)dict;

@end
