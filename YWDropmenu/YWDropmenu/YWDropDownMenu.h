//
//  YWDropDownMenu.h
//  YWDropmenu
//
//  Created by yuhao on 2017/8/4.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YWDropDownMenuProtocol.h"
#import "YWDropDownMenudelegate.h"
#import "YWDropmenuObject.h"
@interface YWDropDownMenu : UIView<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic, weak) id<YWDropDownMenuProtocol>dataSource;
@property (nonatomic, weak) id<YWDropDownMenudelegate>delegate;

@property (nonatomic, assign) UITableViewCellStyle cellStyle; // default value1
@property (nonatomic, strong) UIColor *indicatorColor;      // 三角指示器颜色
@property (nonatomic, strong) UIColor *textColor;           // 文字title颜色
@property (nonatomic, strong) UIColor *textSelectedColor;   // 文字title选中颜色
@property (nonatomic, strong) UIColor *detailTextColor;     // detailText文字颜色
@property (nonatomic, strong) UIFont *detailTextFont;       // font
@property (nonatomic, strong) UIColor *separatorColor;      // 分割线颜色
@property (nonatomic, assign) NSInteger fontSize;           // 字体大小
// 当有二级列表item时，点击row 是否调用点击代理方法
@property (nonatomic, assign) BOOL isClickHaveItemValid;

@property (nonatomic, getter=isRemainMenuTitle) BOOL remainMenuTitle; // 切换条件时是否更改menu title
@property (nonatomic, strong) NSMutableArray  *currentSelectRowArray; // 恢复默认选项用

- (instancetype)initWithOrigin:(CGPoint)origin andHeight:(CGFloat)height;

// 获取title
- (NSString *)titleForRowAtIndexPath:(YWDropmenuObject *)indexPath;

// 重新加载数据
- (void)reloadData;

// 创建menu 第一次显示 不会调用点击代理，这个手动调用
- (void)selectDefalutIndexPath;

- (void)selectIndexPath:(YWDropmenuObject *)indexPath; // 默认trigger delegate

- (void)selectIndexPath:(YWDropmenuObject *)indexPath triggerDelegate:(BOOL)trigger; // 调用代理

@end
