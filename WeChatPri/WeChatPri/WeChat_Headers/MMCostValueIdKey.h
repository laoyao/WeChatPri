//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCostValueIdKey : NSObject
{
    unsigned long long m_uID;
    unsigned long long m_uTotalValueTimeKey;
    unsigned long long m_uTotalCountKey;
    NSString *m_nsDes;
    unsigned long long m_uTotalCostValueKey;
}

+ (id)constructOneItemWithId:(unsigned long long)arg1 withTotalCostValueKey:(unsigned long long)arg2 withTotalCountKey:(unsigned long long)arg3 withDes:(id)arg4;
@property(retain, nonatomic) NSString *m_nsDes; // @synthesize m_nsDes;
@property(nonatomic) unsigned long long m_uTotalCountKey; // @synthesize m_uTotalCountKey;
@property(nonatomic) unsigned long long m_uTotalCostValueKey; // @synthesize m_uTotalCostValueKey;
@property(nonatomic) unsigned long long m_uID; // @synthesize m_uID;
- (void).cxx_destruct;
- (id)init;

@end
