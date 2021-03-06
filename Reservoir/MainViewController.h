//
//  MainViewController.h
//  Reservoir
//
//  Created by AKI on 2015/3/31.
//  Copyright (c) 2015年 AKI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ReservoirViewController.h"
#import "FavoriteViewController.h"



@interface MainViewController : UIViewController<UIPageViewControllerDataSource,UIPageViewControllerDelegate,UIScrollViewDelegate>
{
    IBOutlet UIView *ContainerView;
    IBOutlet UIButton *btnWater;
    IBOutlet UIButton *btnSetting;
    IBOutlet UIView *selectedBar;
    
    NSArray *viewControllers;
    int ErrorCount;
    
    ReservoirViewController *view1;
    FavoriteViewController *view2;
}


@property (nonatomic,retain) UIPageViewController *pageController;
@property (nonatomic,retain) NSArray *dataArray;


@end
