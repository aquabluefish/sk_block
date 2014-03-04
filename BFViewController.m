//
//  BFViewController.m
//  sk_block
//
//  Created by Kohji Itoh on 2014/03/04.
//  Copyright (c) 2014年 Itoh Kohji. All rights reserved.
//

#import "BFViewController.h"
#import "BFTitleScene.h"
@import SpriteKit;

@implementation BFViewController

- (void)loadView {
    SKView *skView = [[SKView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.view = skView;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    SKView *skView = (SKView *)self.view;
    skView.showsDrawCount = YES;
    skView.showsNodeCount = YES;
    skView.showsFPS = YES;
    
    //   SKScene *scene = [SKScene sceneWithSize:self.view.bounds.size];
    SKScene *scene = [BFTitleScene sceneWithSize:self.view.bounds.size];
    [skView presentScene:scene];
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

@end