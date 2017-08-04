//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ISearchConfigDataExt-Protocol.h"
#import "SGTopEntryViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMScrollView, NSString, SGBarButton, SGTopEntryView, SearchCgiGuideConfig, SearchCgiGuideHotwordConfig, UIView;
@protocol SearchGuideViewDelegate;

@interface SearchGuideView : MMUIView <ISearchConfigDataExt, SGTopEntryViewDelegate, UIScrollViewDelegate>
{
    UIView *_whiteLayerView;
    MMScrollView *_scrollView;
    UIView *_ftsEntryView;
    SGTopEntryView *_topEntryView;
    SGBarButton *_ftsEntryBarBtn;
    _Bool _bIsBarButtonShown;
    SearchCgiGuideConfig *_vertInfo;
    SearchCgiGuideHotwordConfig *_hotwordInfo;
    id <SearchGuideViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickWithData:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)onSearchConfigDataUpdated;
- (void)onSearchConfigDataFailToUpdate;
- (void)tryDoEntryDisplayKVReport;
- (void)updateDynamicView;
- (void)updateDynamicData;
- (void)layoutEntryView;
- (void)layoutSubviews;
- (void)hideKeyboard;
- (void)scrollViewDidScroll:(id)arg1;
- (void)ontap;
- (void)onTapBarButton:(id)arg1;
- (void)layoutBarBtton;
- (void)updateViewsAnimated:(_Bool)arg1;
- (void)initView;
- (void)hideContentViewAnimated:(_Bool)arg1;
- (void)showContentViewAnimated:(_Bool)arg1;
- (void)addBlurEffectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
