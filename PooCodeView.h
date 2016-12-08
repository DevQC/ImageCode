//
//  PooCodeView.h
//  Code
//
//  Created by crazypoo on 14-4-14.
//  Copyright (c) 2014年 crazypoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PooCodeView : UIView
@property (nonatomic, retain) NSArray *changeArray;
@property (nonatomic, retain) NSMutableString *changeString;
@property (nonatomic, retain) UILabel *codeLabel;


/**
 * 本地随机图形验证码
 */
-(void)changeCode;


/**
 * 显示输入code的图形验证码

 @param aCode 输入的验证码数字
 */
-(void)changeToCode:(NSString *)aCode;

@end
