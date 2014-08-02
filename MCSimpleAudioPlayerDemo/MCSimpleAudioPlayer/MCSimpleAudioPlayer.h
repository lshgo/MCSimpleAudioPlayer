//
//  MCSimpleAudioPlayer.h
//  MCSimpleAudioPlayer
//
//  Created by Chengyin on 14-7-27.
//  Copyright (c) 2014年 Chengyin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioFile.h>

typedef NS_ENUM(NSUInteger, MCSAPStatus)
{
    MCSAPStatusStopped = 0,
    MCSAPStatusPlaying = 1,
    MCSAPStatusWaiting = 2,
    MCSAPStatusPaused = 3,
};

@interface MCSimpleAudioPlayer : NSObject

@property (nonatomic,readonly) MCSAPStatus status;
@property (nonatomic,retain,readonly) NSString *filePath;
@property (nonatomic,assign,readonly) AudioFileTypeID fileType;
@property (nonatomic,assign,readonly) BOOL failed;
@property (nonatomic,readonly) BOOL isPlayingOrWaiting;

@property (nonatomic,assign) NSTimeInterval progress;
@property (nonatomic,readonly) NSTimeInterval duration;

- (instancetype)initWithFilePath:(NSString *)filePath fileType:(AudioFileTypeID)fileType;

- (void)play;
- (void)pause;
- (void)stop;
@end