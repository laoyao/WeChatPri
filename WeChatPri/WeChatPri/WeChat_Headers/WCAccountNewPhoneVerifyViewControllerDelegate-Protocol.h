//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCAccountNewPhoneVerifyViewControllerDelegate <NSObject>

@optional
- (void)onNewPhoneVerifyProblem;
- (void)onNewPhoneVerifyGotoSecurityCenter;
- (void)onNewPhoneVerifyNextWithPwd:(NSString *)arg1;
- (void)onNewPhoneVerifyNextWithVerifyCode:(NSString *)arg1;
- (void)onNewPhoneVerifyFirstTime:(_Bool)arg1;
- (void)onNewPhoneVerifyBack;
@end
