//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AudioPlayerUserData;

@protocol AMRAudioPlayerDelegate

@optional
- (_Bool)OnAMREndDontNotifyOtherApp;
- (void)OnAMREarTip;
- (void)OnAMREndPlaying:(AudioPlayerUserData *)arg1 isForceStop:(_Bool)arg2;
- (void)OnAMRBeginPlaying:(AudioPlayerUserData *)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(AudioPlayerUserData *)arg1 Peak:(float)arg2;
@end
