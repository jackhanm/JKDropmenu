//
//  YWDropDownMenuProtocol.h
//  YWDropmenu
//
//  Created by yuhao on 2017/8/8.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#import <Foundation/Foundation.h>
@class YWDropmenuObject;
@class YWDropDownMenu;
@protocol YWDropDownMenuProtocol <NSObject>

@required
/**
 *  返回 menu 第column列有多少行
 */
- (NSInteger)menu:(YWDropDownMenu *)menu numberOfRowsInColumn:(NSInteger)column;

/**
 *  返回 menu 第column列 每行title
 */
- (NSString *)menu:(YWDropDownMenu *)menu titleForRowAtIndexPath:(YWDropmenuObject *)indexPath;
/**
 *  返回 menu 有多少列 ，默认1列
 */
- (NSInteger)numberOfColumnsInMenu:(YWDropDownMenu *)menu;
@optional


// 新增 返回 menu 第column列 每行image
- (NSString *)menu:(YWDropDownMenu *)menu imageNameForRowAtIndexPath:(YWDropmenuObject *)indexPath;

// 新增 detailText ,right text
- (NSString *)menu:(YWDropDownMenu *)menu detailTextForRowAtIndexPath:(YWDropmenuObject *)indexPath;

/** 新增
 *  当有column列 row 行 返回有多少个item ，如果>0，说明有二级列表 ，=0 没有二级列表
 *  如果都没有可以不实现该协议
 */
- (NSInteger)menu:(YWDropDownMenu *)menu numberOfItemsInRow:(NSInteger)row column:(NSInteger)column;

/** 新增
 *  当有column列 row 行 item项 title
 *  如果都没有可以不实现该协议
 */
- (NSString *)menu:(YWDropDownMenu *)menu titleForItemsInRowAtIndexPath:(YWDropmenuObject *)indexPath;

// 新增 当有column列 row 行 item项 image
- (NSString *)menu:(YWDropDownMenu *)menu imageNameForItemsInRowAtIndexPath:(YWDropmenuObject *)indexPath;
// 新增
- (NSString *)menu:(YWDropDownMenu *)menu detailTextForItemsInRowAtIndexPath:(YWDropmenuObject *)indexPath;



@end

@interface YWDropDownMenuProtocol : NSObject

@end
