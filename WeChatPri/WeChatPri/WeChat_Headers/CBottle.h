//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CBottle : NSObject
{
    int m_uiStatus;
    unsigned int m_uiCreateTime;
    unsigned int m_uiSvrID;
    unsigned int m_uiLocalID;
    unsigned int m_uiSex;
    unsigned int m_uiDistance;
    unsigned int m_bottleType;
    unsigned int m_uiMsgType;
    unsigned int m_uiParentID;
    NSString *m_nsImgStatus;
    NSString *m_nsEnryptUsrName;
    NSString *m_nsBottleID;
    NSString *m_nsBottleName;
    NSString *m_nsNickName;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    _Bool m_isBrandUser;
    NSString *m_brandUsername;
    NSString *m_brandNickname;
    NSString *m_brandIconUrl;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

+ (unsigned int)genBottleIDByLocalUsrName:(id)arg1;
+ (id)genLocalUsrNameByBottleID:(unsigned int)arg1;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_brandIconUrl; // @synthesize m_brandIconUrl;
@property(retain, nonatomic) NSString *m_brandNickname; // @synthesize m_brandNickname;
@property(retain, nonatomic) NSString *m_brandUsername; // @synthesize m_brandUsername;
@property(nonatomic) _Bool m_isBrandUser; // @synthesize m_isBrandUser;
@property(nonatomic) unsigned int m_uiDistance; // @synthesize m_uiDistance;
@property(nonatomic) unsigned int m_uiParentID; // @synthesize m_uiParentID;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(nonatomic) int m_uiStatus; // @synthesize m_uiStatus;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsBottleName; // @synthesize m_nsBottleName;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned int m_uiSvrID; // @synthesize m_uiSvrID;
@property(retain, nonatomic) NSString *m_nsEnryptUsrName; // @synthesize m_nsEnryptUsrName;
@property(retain, nonatomic) NSString *m_nsBottleID; // @synthesize m_nsBottleID;
@property(nonatomic) unsigned int m_uiMsgType; // @synthesize m_uiMsgType;
@property(nonatomic) unsigned int m_bottleType; // @synthesize m_bottleType;
@property(nonatomic) unsigned int m_uiLocalID; // @synthesize m_uiLocalID;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)init;

@end
