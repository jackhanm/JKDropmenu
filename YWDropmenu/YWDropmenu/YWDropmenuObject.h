//
//  YWDropmenuObject.h
//  YWDropmenu
//
//  Created by yuhao on 2017/8/4.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YWDropmenuObject : NSObject
@property(nonatomic, assign)NSInteger column;
@property (nonatomic, assign)NSInteger row;
@property (nonatomic, assign)NSInteger item;
-(instancetype)initWithColumn:(NSInteger)column row:(NSInteger)row;
// default item = -1
+ (instancetype)indexPathWithCol:(NSInteger)col row:(NSInteger)row;
+ (instancetype)indexPathWithCol:(NSInteger)col row:(NSInteger)row item:(NSInteger)item;


@end
