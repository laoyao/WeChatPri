//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;

@protocol WXCNetWorkDelegate <NSObject>
- (void)onRespData:(NSString *)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(NSData *)arg4 backfillData:(NSObject *)arg5;
@end
