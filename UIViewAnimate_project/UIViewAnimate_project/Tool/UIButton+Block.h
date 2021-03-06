//
//  UIButton+Block.h
//  UIViewAnimate_project
//
//  Created by xiaoli on 2018/8/2.
//  Copyright © 2018年 雷晓利. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

typedef void (^ActionBlock)(id sender);

@interface UIButton (Block)

/**
 UIControlEvents 触发block执行方法,代替指定@select()方法
 @param  controlEvent 触发条件,例如按下按钮,双击按钮
 @param  action 触发执行的block
 */
- (void)handleControlEvent:(UIControlEvents)controlEvent withBlock:(ActionBlock)action;

/**
 按下按钮手抬起的时候触发block,代替指定@select()方法
 param   触发执行的
 */
- (void)block:(ActionBlock)block;

@end
