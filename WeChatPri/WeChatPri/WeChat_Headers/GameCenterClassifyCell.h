//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMHorizontalTableViewCell.h"

@class GameLibraryClassifyItem, MMWebImageView, UILabel;
@protocol GameCenterClassifyCellDelegate;

@interface GameCenterClassifyCell : MMHorizontalTableViewCell
{
    GameLibraryClassifyItem *_classifyItem;
    MMWebImageView *_imageView;
    UILabel *_nameLabel;
    id <GameCenterClassifyCellDelegate> _delegate;
}

+ (double)heightForCell;
+ (double)widthForCell;
@property(nonatomic) __weak id <GameCenterClassifyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onSelectInstalledApp;
- (void)updateClassifyItem:(id)arg1;
- (void)initSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

