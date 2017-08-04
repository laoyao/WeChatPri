//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAppMessageBaseCellView.h"

@class MMWebImageView, UIImageView, UILabel, WAAppMessageViewModel;

@interface WAAppMessageCellView : WAAppMessageBaseCellView
{
    UILabel *_cardTitleLabel;
    MMWebImageView *_iconView;
    UILabel *_nameLabel;
    UILabel *_newsTitleLabel;
    UIImageView *_thumbImageView;
}

@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UILabel *newsTitleLabel; // @synthesize newsTitleLabel=_newsTitleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
- (void).cxx_destruct;
- (void)initWAAppDefaultNewsView;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WAAppMessageViewModel *viewModel; // @dynamic viewModel;

@end
