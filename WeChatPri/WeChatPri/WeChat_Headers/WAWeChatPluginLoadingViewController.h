//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WALoadingViewController.h"

@class MMTimer, UIColor, UIView;

@interface WAWeChatPluginLoadingViewController : WALoadingViewController
{
    UIView *_fakeNavView;
    UIColor *_titleColor;
    MMTimer *_delayLoadingTimer;
}

- (void).cxx_destruct;
- (void)startEnterAppAnimation;
- (void)onTimerShowTitleLoading;
- (void)scheduleTitleLoadingTimer;
- (void)initNavigationWithTextStyle:(id)arg1 backgroundColor:(id)arg2;
- (void)initView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end
