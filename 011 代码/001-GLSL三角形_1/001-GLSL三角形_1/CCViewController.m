//
//  CCViewController.m
//  001-GLSL三角形_1
//
//  Created by CC老师 on 2017/12/28.
//  Copyright © 2017年 CC老师. All rights reserved.
//

#import "CCViewController.h"
#import "CCView.h"
@interface CCViewController ()

@property(nonatomic,strong)CCView *cView;

@end

@implementation CCViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.cView = (CCView *)self.view;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
