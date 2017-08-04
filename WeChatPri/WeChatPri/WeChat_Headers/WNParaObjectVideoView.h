//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNParaObjectBaseView.h"

#import "WNParaImageViewDelegate-Protocol.h"

@class MMUIWindow, NSString, SightIconView, WNParaImageView, WNSightViewController;

@interface WNParaObjectVideoView : WNParaObjectBaseView <WNParaImageViewDelegate>
{
    WNParaImageView *_imageView;
    SightIconView *_playIconView;
    MMUIWindow *_fullScreenWindow;
    WNSightViewController *_videoPlayerVC;
}

+ (double)getHightOfParaInfo:(id)arg1;
- (void).cxx_destruct;
- (void)onLoadComplete:(id)arg1;
- (void)playInFullScreen;
- (void)onClickObject;
- (void)layoutView;
- (void)clearImage;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
