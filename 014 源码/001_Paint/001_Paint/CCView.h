//
//  CCView.h
//  001_Paint
//
//  Created by CC老师 on 2017/12/30.
//  Copyright © 2017年 CC老师. All rights reserved.
//
/*
 导入OpenGL ES 相关类库
 */
#import <UIKit/UIKit.h>
#import <OpenGLES/EAGL.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface CCPoint : NSObject

//屏幕上的点（x,y）
@property (nonatomic , strong) NSNumber* mY;
@property (nonatomic , strong) NSNumber* mX;

@end

@interface CCView : UIView

//location 最新的点
@property(nonatomic, readwrite) CGPoint location;
//previousLocation 前一个点
@property(nonatomic, readwrite) CGPoint previousLocation;

//清屏
- (void)erase;

//设置画笔颜色
- (void)setBrushColorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

//绘制
- (void)paint;


@end
