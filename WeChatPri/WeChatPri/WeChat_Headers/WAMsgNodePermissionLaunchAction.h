//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAMsgNodePermissionLaunchAction : NSObject <PBCoding>
{
    unsigned int actionCode;
    NSString *alertMsg;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

