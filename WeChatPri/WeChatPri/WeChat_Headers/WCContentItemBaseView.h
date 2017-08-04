//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCForceTouchTriggerLongPressProtocol-Protocol.h"

@class NSString, ShareDataToOpenSDKController, UINavigationController, WCDataItem;

@interface WCContentItemBaseView : MMUIView <WCForceTouchTriggerLongPressProtocol>
{
    UINavigationController *_navigationController;
    WCDataItem *_oDataItem;
    long long _touchCount;
    _Bool _bShowDetail;
    _Bool _bIsLongPressHandled;
    _Bool _bTouchEnds;
    _Bool _bFromDetail;
    _Bool _bSnsScene;
    struct CGSize _fixMediaSize;
    unsigned long long _contentItemScene;
    ShareDataToOpenSDKController *_shareDataToOpenSDKController;
}

+ (struct CGSize)getImageSize:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(_Bool)arg2;
+ (double)heightForMedia:(id)arg1;
@property(retain, nonatomic) ShareDataToOpenSDKController *shareDataToOpenSDKController; // @synthesize shareDataToOpenSDKController=_shareDataToOpenSDKController;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(nonatomic) _Bool bSnsScene; // @synthesize bSnsScene=_bSnsScene;
@property(nonatomic) _Bool bShowDetail; // @synthesize bShowDetail=_bShowDetail;
@property(retain, nonatomic) WCDataItem *oDataItem; // @synthesize oDataItem=_oDataItem;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)onMenuControllerWillHide:(id)arg1;
- (_Bool)isMenuItemsVisiable;
- (_Bool)isMyShareEmotionFeed;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canShareToOpenSDK;
- (void)shareToOpenSDK;
- (void)addFavorite;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)LongPressEvents;
- (void)onMore:(id)arg1;
- (void)onLongTouch;
- (void)throwUrlMessage;
- (void)setFromDetail;
- (void)setNonInteractive;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (_Bool)canBecomeFirstResponder;
- (id)getTopViewController;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 snsScene:(_Bool)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3 fixMediaSize:(struct CGSize)arg4;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2 withScene:(unsigned long long)arg3;
- (id)initWithWCDataItem:(id)arg1 showDetail:(_Bool)arg2;
- (id)initWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
