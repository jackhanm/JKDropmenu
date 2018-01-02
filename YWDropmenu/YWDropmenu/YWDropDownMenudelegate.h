//
//  YWDropDownMenudelegate.h
//  YWDropmenu
//
//  Created by yuhao on 2017/8/8.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#import <Foundation/Foundation.h>
@class YWDropmenuObject;
@class YWDropDownMenu;
@protocol  YWDropDownMenudelegate<NSObject>

@optional
/**
 *  点击代理，点击了第column 第row 或者item项，如果 item >=0
 */
- (void)menu:(YWDropDownMenu *)menu didSelectRowAtIndexPath:(YWDropmenuObject *)indexPath;

/** 新增
 * 
 */
- (NSIndexPath *)menu:(YWDropDownMenu *)menu willSelectRowAtIndexPath:(YWDropmenuObject *)indexPath;

@end

@interface YWDropDownMenudelegate : NSObject

@end
