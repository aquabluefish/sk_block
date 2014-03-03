//
//  BFAppDelegate.h
//  sk_block
//
//  Created by Kohji Itoh on 2014/03/04.
//  Copyright (c) 2014年 Itoh Kohji. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BFViewController.h"                                    // ViewControllerクラスをインポート

@interface BFAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong,nonatomic) BFViewController *viewController;  // viewControllerのインスタンスを保持するためのプロパティ追加
@end
