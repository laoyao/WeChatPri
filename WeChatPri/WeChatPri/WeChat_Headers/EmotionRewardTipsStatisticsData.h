//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface EmotionRewardTipsStatisticsData : MMObject <PBCoding>
{
    unsigned int lastPidContiousSendTimes;
    NSString *lastSendPid;
    NSMutableDictionary *sendedPidCountWrapDic;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *sendedPidCountWrapDic; // @synthesize sendedPidCountWrapDic;
@property(nonatomic) unsigned int lastPidContiousSendTimes; // @synthesize lastPidContiousSendTimes;
@property(retain, nonatomic) NSString *lastSendPid; // @synthesize lastSendPid;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
