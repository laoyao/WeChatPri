//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WAMsgNodeActionBaseInfo : MMObject
{
    int _actionType;
    unsigned long long _timestamp;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (id)logString;

@end

