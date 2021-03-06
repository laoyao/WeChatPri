//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FavDataSaveLogicDelegate-Protocol.h"
#import "FavForwardLogicDelegate-Protocol.h"
#import "FavFullScreenImageViewDelegate-Protocol.h"
#import "FavSearchControllerDelegate-Protocol.h"
#import "FavTagViewDelegate-Protocol.h"
#import "FavoritesFilterDataControllerDelegate-Protocol.h"
#import "MsgFastBrowseViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCNetworkMediaPlayerDelegate-Protocol.h"

@class FavDataSaveLogic, FavForwardLogicController, MMFavoritesSearchController, MMTableView, MMUIWindow, MsgFastBrowseView, MyFavoritesFilterDataController, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UIView;
@protocol FavFilterViewControllerDelegate;

@interface MyFavoritesFilterViewController : MMSearchBarDisplayController <FavFullScreenImageViewDelegate, FavDataSaveLogicDelegate, FavSearchControllerDelegate, MsgFastBrowseViewDelegate, FavForwardLogicDelegate, FavoritesFilterDataControllerDelegate, WCActionSheetDelegate, FavTagViewDelegate, WCNetworkMediaPlayerDelegate>
{
    MMFavoritesSearchController *m_searchController;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_headView;
    UIImageView *m_tipsView;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    int m_dataType;
    NSMutableArray *m_arrFilterItems;
    UIView *m_multiSelectActionView;
    NSMutableArray *m_multiSelectButtons;
    FavForwardLogicController *m_favForwardController;
    MyFavoritesFilterDataController *m_dataController;
    MsgFastBrowseView *m_msgFastBrowseView;
    NSMutableArray *m_arrImgInfo;
    UIButton *m_forwardBtn;
    UIButton *m_saveBtn;
    UIView *m_searchBarDimmingView;
    UIView *m_filterFooterView;
    _Bool m_bEditing;
    FavDataSaveLogic *m_dataSaveLogic;
    id <FavFilterViewControllerDelegate> m_delegate;
}

@property(nonatomic) __weak id <FavFilterViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onFavDataSaveLogicEnd:(_Bool)arg1;
- (void)resetHeaderView:(id)arg1;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (id)getCurrentViewController;
- (void)onFavFullScreenImageViewHide;
- (void)msgFastBrowseView:(id)arg1 didChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (_Bool)msgFastBrowseView:(id)arg1 willChangeCheckMarkTo:(_Bool)arg2 withMsgInfo:(id)arg3;
- (void)onSquareImgClicked:(id)arg1 withInfo:(id)arg2 withOffset:(unsigned int)arg3;
- (id)messageWrapsForMsgFastBrowseView:(id)arg1;
- (void)OnForwardDone;
- (id)getFavForawrdViewController;
- (void)onForward;
- (void)updateEditView;
- (void)onEdit;
- (id)getSelectArray;
- (void)onSave;
- (void)onCancel;
- (void)updateFilterFooterView;
- (void)initFilterFooterView;
- (void)addFilterFooterView:(id)arg1;
- (id)createBtnWithImg:(id)arg1 HLImg:(id)arg2 sel:(SEL)arg3;
- (void)initFastBrowserView;
- (void)updateFastBrowserData;
- (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
- (void)jumpToViewStreamVideo:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayer;
- (_Bool)stopAtLastVideoFrameWhenPlayEnd;
- (void)onSelectFilterFavItem:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadTableAtIndexPath:(id)arg1;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)forwardItem:(id)arg1;
- (void)showEmptyView;
- (void)onGetSearchResult:(id)arg1;
- (void)onFavTagEditCancel;
- (void)onFavTagEditOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTagForItems;
- (void)onForwardItems;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)onMultiSelectDone;
- (void)initMultiSelectActionView;
- (void)enableBtns;
- (void)disableBtns;
- (void)hideSearchBar;
- (void)onBtnEdit;
- (id)getCancelBarButton;
- (void)initEmptyView;
- (void)initHeaderView;
- (id)getTableView;
- (void)initTableView;
- (void)setViewTitle;
- (void)onReturn;
- (void)initNavigationBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)HideLoadingView;
- (void)reloadTableView;
- (id)initWithFavDataType:(int)arg1 filterViewDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

