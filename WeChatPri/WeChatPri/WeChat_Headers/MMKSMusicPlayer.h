//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IRemoteControlMusicPlayerExt-Protocol.h"
#import "KSAudioLogProtocol-Protocol.h"
#import "KSAudioPlayerDelegate-Protocol.h"
#import "KSAudioPlayerUserDefineProtocol-Protocol.h"
#import "MMMusicPlayerNotifyExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class KSAudioPlayer, KSSongInfo, MMTimer, NSObject, NSString;

@interface MMKSMusicPlayer : MMService <MMMusicPlayerNotifyExt, WCAudioSessionExt, IRemoteControlMusicPlayerExt, KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol, KSAudioLogProtocol, MMService>
{
    KSAudioPlayer *m_audioPlayer;
    _Bool m_isQQMusicWifiPlay;
    _Bool m_isCyclePlay;
    _Bool m_isNeedRestartByOthers;
    MMTimer *m_playPercentTimer;
    NSObject *m_clientInfo;
    _Bool m_isQQMusicPlay;
    _Bool m_isPlayerResuming;
    _Bool m_isPlayerSeeking;
    _Bool m_shouldRecevingRemoteControl;
    unsigned long long m_skippingMusicCount;
    KSSongInfo *m_curSongInfo;
}

- (void).cxx_destruct;
- (id)bcdStringFromUrl_WechatMusicUrl:(id)arg1;
- (id)bcdStringFromUrl_QQMusic:(id)arg1;
- (id)bcdStringHanding:(id)arg1;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (id)limitNetParam;
- (unsigned int)downloadRetryCnt;
- (id)createAudioDownloader;
- (_Bool)isNetOk;
- (void)delayEndRecevingRemoteControl;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (double)getBufferProgress;
- (double)getDuration;
- (double)getCurTime;
- (_Bool)isQQMusicWifiPlay;
- (_Bool)isNeedRestartByOthers;
- (void)setNeedRestartByOthers:(_Bool)arg1;
- (_Bool)isMusicCached:(id)arg1;
- (long long)status;
- (_Bool)isResuming;
- (_Bool)isIdle;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isWaiting;
- (void)resume;
- (_Bool)pausePlayAndDownloadData;
- (_Bool)pause;
- (void)seekToTime:(double)arg1;
- (void)forceStopMusic;
- (void)stop;
- (void)internalPlayLocalMusic:(id)arg1;
- (void)internalPlayStreamMuisc:(id)arg1;
- (void)playWithMusicTask:(id)arg1;
- (void)ignoreCurrentMusicItem;
- (void)addMusicItem:(id)arg1;
- (void)destroyStreamer;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (id)cachePathForMusicFromUrl:(id)arg1;
- (id)getUrlPathExt:(id)arg1;
- (id)hashForUrl:(id)arg1;
- (id)cacheRootPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
