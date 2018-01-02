//
//  ViewController.m
//  YWDropmenu
//
//  Created by yuhao on 2017/8/4.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#pragma mark 下一部优化 数据缓存处理


#import "ViewController.h"
#import "YWDropDownMenu.h"
@interface ViewController ()<YWDropDownMenuProtocol, YWDropDownMenudelegate>
@property (nonatomic, strong) YWDropDownMenu *menu;
@property (nonatomic, strong) NSArray *classifys;
@property (nonatomic, strong) NSArray *cates;
@property (nonatomic, strong) NSArray *movices;
@property (nonatomic, strong) NSArray *hostels;
@property (nonatomic, strong) NSArray *areas;
@property (nonatomic, strong) NSArray *areasDetail;
@property (nonatomic, strong) NSArray *sorts;
@property (nonatomic, strong) NSArray *areasinfo;
@property (nonatomic, strong) NSArray *coupon;
@property (nonatomic, strong) NSArray *couponinfo;
@property (nonatomic, strong) NSArray *couponinfoCondition;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.classifys = @[@"智能排序",@"离我最近",@"好评优先",@"关注最多",@"领取最多"];
    self.cates=@[@"智能排序",@"离我最近",@"好评优先",@"关注最多",@"领取最多"];
    self.sorts = @[@"智能排序",@"离我最近",@"好评优先",@"关注最多",@"领取最多"];
    self.coupon=@[@"筛选",@"代金券",@"折扣券",@"体验券",@"提货券",@"满减券",@"满赠券"];//(1-2-3-4-5-6)券类型
    self.couponinfo=@[@"50以下",@"50-100",@"100-200",@"200-300",@"300以上"];
    self.couponinfoCondition=@[@"代金券",@"折扣券",@"体验券",@"提货券",@"满减券",@"满赠券",@"50以下",@"50-100",@"100-200",@"200-300",@"300以上"];
    self.menu = [[YWDropDownMenu alloc]initWithOrigin:CGPointMake(0, 64) andHeight:44];
    self.menu.dataSource = self;
    self.menu.delegate = self;
    [self.view addSubview:self.menu];

    
   
}

- (NSInteger)numberOfColumnsInMenu:(YWDropDownMenu *)menu
{
    return 4;
}

/**
 *  返回 menu 第column列有多少行
 */
- (NSInteger)menu:(YWDropDownMenu *)menu numberOfRowsInColumn:(NSInteger)column
{
    @try {
        if (column == 0) {
            return self.sorts.count;
        }else if (column == 1){
            return self.sorts.count;
        }else if (column == 2){
            return self.sorts.count;
        }
        else{
            return self.coupon.count;
        }
    } @catch (NSException *exception) {
        
    } @finally {
        
    }

}

/**
 *  返回 menu 第column列 每行title
 */
- (NSString *)menu:(YWDropDownMenu *)menu titleForRowAtIndexPath:(YWDropmenuObject *)indexPath
{
    @try {
        if (indexPath.column == 0) {
           
            return self.sorts[indexPath.row];
        } else if (indexPath.column == 1){
         
            return self.sorts[indexPath.row];
        } else if (indexPath.column == 2){
            return self.sorts[indexPath.row];
        }else{
            return self.coupon[indexPath.row];
        }
        
    } @catch (NSException *exception) {
        
    } @finally {
        
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
