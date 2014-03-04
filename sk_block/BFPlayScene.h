//
//  BFPlayScene.h
//  sk_block
//
//  Created by Kohji Itoh on 2014/03/04.
//  Copyright (c) 2014年 Itoh Kohji. All rights reserved.
//

#import <Foundation/Foundation.h>
@import SpriteKit;

@interface BFPlayScene : SKScene;

@property (nonatomic) int life;
@property (nonatomic) int stage;
- (id)initWithSize:(CGSize)size life:(int)life stage:(int)stage;

@end