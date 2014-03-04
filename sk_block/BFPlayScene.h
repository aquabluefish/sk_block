//
//  BFPlayScene.h
//  sk_block
//
//  Created by Kohji Itoh on 2014/03/04.
//  Copyright (c) 2014年 Itoh Kohji. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
@import SpriteKit;

@interface BFPlayScene : SKScene;

@property (nonatomic) int life;
@property (nonatomic) int stage;
@property (nonatomic, strong) SKAction *projectileSoundEffectAction_pi;
@property (nonatomic, strong) SKAction *projectileSoundEffectAction_pu;
@property (nonatomic, strong) SKAction *projectileSoundEffectAction_po;
@property (nonatomic, strong) SKAction *projectileSoundEffectAction_ban;
@property (nonatomic, strong) SKAction *projectileSoundEffectAction_out;
@property (nonatomic, strong) AVAudioPlayer *bgmPlayer;

- (id)initWithSize:(CGSize)size life:(int)life stage:(int)stage;

@end