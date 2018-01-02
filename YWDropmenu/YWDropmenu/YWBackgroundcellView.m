//
//  YWBackgroundcellView.m
//  YWDropmenu
//
//  Created by yuhao on 2017/8/8.
//  Copyright © 2017年 uhqsh. All rights reserved.
//

#import "YWBackgroundcellView.h"

@implementation YWBackgroundcellView

- (void)drawRect:(CGRect)rect
{
    // Drawing code
    CGContextRef context = UIGraphicsGetCurrentContext();
    //底部画一条底部线
    
    CGContextSetRGBStrokeColor(context, 219.0/255, 224.0/255, 228.0/255, 1);//线条颜色
    CGContextMoveToPoint(context, 0, 0);
    CGContextAddLineToPoint(context, rect.size.width,0);
    CGContextMoveToPoint(context, 0, rect.size.height);
    CGContextAddLineToPoint(context, rect.size.width,rect.size.height);
    CGContextStrokePath(context);
    
    //上部也可以画线
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
