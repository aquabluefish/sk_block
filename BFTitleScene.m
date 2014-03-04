//
//  BFTitleScene.m
//  sk_block
//
//  Created by Kohji Itoh on 2014/03/04.
//  Copyright (c) 2014年 Itoh Kohji. All rights reserved.
//

#import "BFTitleScene.h"

@implementation BFTitleScene

- (id)initWithSize:(CGSize)size {
    self = [super initWithSize:size];
    if (self) {
        SKLabelNode *titleLabel = [SKLabelNode labelNodeWithFontNamed:@"HelveticaNeue"];
        titleLabel.text = @"BREAKOUT!";
        titleLabel.position = CGPointMake(CGRectGetMidX(self.frame), CGRectGetMidY(self.frame));
        titleLabel.fontSize = 50.0f;
        [self addChild:titleLabel];
    }
    return self;
}

@end