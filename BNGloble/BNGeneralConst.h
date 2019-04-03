//
//  BNGeneralConst.h
//  HuiZhuBang
//
//  Created by hsf on 2018/5/14.
//  Copyright © 2018年 WeiHouKeJi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef UITableViewCell *(^BlockCellForRow)(UITableView *tableView, NSIndexPath *indexPath);
typedef void(^BlockDidSelectRow)(UITableView *tableView, NSIndexPath *indexPath);

#pragma mark - - kLanguage

FOUNDATION_EXPORT NSString * const kLanguageCN ;
FOUNDATION_EXPORT NSString * const kLanguageEN ;

#pragma mark - - kArr
FOUNDATION_EXPORT NSString * const kArr_avg_float ;
FOUNDATION_EXPORT NSString * const kArr_sum_inter ;
FOUNDATION_EXPORT NSString * const kArr_max_inter ;
FOUNDATION_EXPORT NSString * const kArr_min_inter ;
FOUNDATION_EXPORT NSString * const kArr_sum_float ;
FOUNDATION_EXPORT NSString * const kArr_max_float ;
FOUNDATION_EXPORT NSString * const kArr_min_float ;
FOUNDATION_EXPORT NSString * const kArr_upper_list ;//大小写转换
FOUNDATION_EXPORT NSString * const kArr_lower_list ;//大小写转换
FOUNDATION_EXPORT NSString * const kArrs_unionDist_list ;//数组内部去重
FOUNDATION_EXPORT NSString * const kArrs_union_list ;

#pragma mark - - kSet

FOUNDATION_EXPORT NSString * const kSet_number ;
FOUNDATION_EXPORT NSString * const kSet_alpha ;
FOUNDATION_EXPORT NSString * const kSet_alpha_num ;

#pragma mark - - File

FOUNDATION_EXPORT const NSInteger kPageSize ;
FOUNDATION_EXPORT const NSInteger kFileSize_image ;

//plist文件路径
FOUNDATION_EXPORT NSString * const kPlistFilePath ;
//plist文件名
FOUNDATION_EXPORT NSString * const kPlistName_common ;

#pragma mark - - kTag

FOUNDATION_EXPORT const NSInteger kTAG_LABEL ;
FOUNDATION_EXPORT const NSInteger kTAG_BTN ;
FOUNDATION_EXPORT const NSInteger kTAG_BTN_RightItem ;
FOUNDATION_EXPORT const NSInteger kTAG_BTN_BackItem ;

FOUNDATION_EXPORT const NSInteger kTAG_IMGVIEW ;
FOUNDATION_EXPORT const NSInteger kTAG_TEXTFIELD ;
FOUNDATION_EXPORT const NSInteger kTAG_TEXTVIEW ;
FOUNDATION_EXPORT const NSInteger kTAG_ALERT_VIEW ;
FOUNDATION_EXPORT const NSInteger kTAG_ACTION_SHEET ;
FOUNDATION_EXPORT const NSInteger kTAG_PICKER_VIEW ;
FOUNDATION_EXPORT const NSInteger kTAG_DATE_PICKER ;

FOUNDATION_EXPORT const NSInteger kTAG_VIEW ;
FOUNDATION_EXPORT const NSInteger kTAG_VIEW_Segment ;
FOUNDATION_EXPORT const NSInteger kTAG_VIEW_RADIO ;
FOUNDATION_EXPORT const NSInteger kTAG_VIEW_Picture ;

FOUNDATION_EXPORT const NSInteger kTAG_UItableViewCell ;

FOUNDATION_EXPORT const NSInteger kTAG_ICAROUSEL ;
FOUNDATION_EXPORT const NSInteger kTAG_PAGE_CONTROL ;

FOUNDATION_EXPORT const NSInteger kComponent_0 ;
FOUNDATION_EXPORT const NSInteger kComponent_1 ;
FOUNDATION_EXPORT const NSInteger kComponent_2 ;


#pragma mark - -MacroGeometry与计算有关的尺寸属性

FOUNDATION_EXPORT const CGFloat kH_StatusBar ;
FOUNDATION_EXPORT const CGFloat kH_NaviagtionBar ;
FOUNDATION_EXPORT const CGFloat kH_TabBar ;
FOUNDATION_EXPORT const CGFloat kH_PickerView;
FOUNDATION_EXPORT const CGFloat kH_SegmentOfCustom ;
FOUNDATION_EXPORT const CGFloat kH_SegmentControl;

FOUNDATION_EXPORT const CGFloat kH_searchBar;
FOUNDATION_EXPORT const CGFloat kH_searchBarBackgroud;

FOUNDATION_EXPORT const CGFloat kH_topView;
FOUNDATION_EXPORT const CGFloat kH_slideView;
FOUNDATION_EXPORT const CGFloat kH_CellHeight ;

FOUNDATION_EXPORT const CGFloat kX_GAP ;
FOUNDATION_EXPORT const CGFloat kY_GAP ;
FOUNDATION_EXPORT const CGFloat kPadding ;
FOUNDATION_EXPORT const CGFloat kW_LayerBorder ;
FOUNDATION_EXPORT const CGFloat kWH_ArrowRight ;
FOUNDATION_EXPORT const CGFloat kTimerValue ;
FOUNDATION_EXPORT const CGFloat kRatio_IDCard ;
FOUNDATION_EXPORT const CGFloat kRatio_LeftMenu ;

FOUNDATION_EXPORT const CGFloat kDurationShow;
FOUNDATION_EXPORT const CGFloat kDurationToast ;
FOUNDATION_EXPORT const CGFloat kDurationDrop ;

FOUNDATION_EXPORT const CGFloat kW_item ;
FOUNDATION_EXPORT const CGFloat kW_progressView ;

FOUNDATION_EXPORT const CGFloat kH_LABEL ;
FOUNDATION_EXPORT const CGFloat kH_LABEL_TITLE ;
FOUNDATION_EXPORT const CGFloat kH_LABEL_SMALL ;

FOUNDATION_EXPORT const CGFloat kH_TEXTFIELD ;
FOUNDATION_EXPORT const CGFloat kH_LINE_VIEW ;
FOUNDATION_EXPORT const CGFloat kW_LINE_Vert ;

#pragma mark - -font

FOUNDATION_EXPORT const CGFloat kFZ_First ;
FOUNDATION_EXPORT const CGFloat kFZ_Second ;
FOUNDATION_EXPORT const CGFloat kFZ_Third ;
FOUNDATION_EXPORT const CGFloat kFZ_Fouth ;
FOUNDATION_EXPORT const CGFloat kFZ_Fifth ;

#pragma mark - -视图

FOUNDATION_EXPORT NSString * const kIMG_arrowRight ;
FOUNDATION_EXPORT NSString * const kIMG_arrowDown ;
FOUNDATION_EXPORT NSString * const kIMG_arrowBack ;
FOUNDATION_EXPORT NSString * const kIMG_arrowUp ;

FOUNDATION_EXPORT NSString * const kIMG_portrait ;
FOUNDATION_EXPORT NSString * const kIMG_portrait_N ;
FOUNDATION_EXPORT NSString * const kIMG_portrait_H ;
FOUNDATION_EXPORT NSString * const kIMG_pictureAdd ;
FOUNDATION_EXPORT NSString * const kIMG_pictureDelete ;

FOUNDATION_EXPORT NSString * const kIMG_defaultFailed ;
FOUNDATION_EXPORT NSString * const kIMG_defaultFailed_S ;

FOUNDATION_EXPORT NSString * const kIMG_sexBoy ;
FOUNDATION_EXPORT NSString * const kIMG_sexGril ;

FOUNDATION_EXPORT NSString * const kIMG_elemetDec ;
FOUNDATION_EXPORT NSString * const kIMG_elemetInc ;

FOUNDATION_EXPORT NSString * const kIMG_scan ;
FOUNDATION_EXPORT NSString * const kIMG_NFC ;

FOUNDATION_EXPORT NSString * const kIMG_inquiry ;
FOUNDATION_EXPORT NSString * const kIMG_update ;
FOUNDATION_EXPORT NSString * const kIMG_warning ;

FOUNDATION_EXPORT NSString * const kIMG_notice ;
FOUNDATION_EXPORT NSString * const kIMG_location_H ;
FOUNDATION_EXPORT NSString * const kIMG_more ;

FOUNDATION_EXPORT NSString * const kIMG_selected_NO ;
FOUNDATION_EXPORT NSString * const kIMG_selected_YES ;
FOUNDATION_EXPORT NSString * const kIMG_Add ;

FOUNDATION_EXPORT NSString * const kIMG_like_H ;
FOUNDATION_EXPORT NSString * const kIMG_like_W ;

FOUNDATION_EXPORT NSString * const kMsg_NetWorkRequesting;
FOUNDATION_EXPORT NSString * const kMsg_NetWorkFailed;
FOUNDATION_EXPORT NSString * const kMsg_NetWorkNodata;
FOUNDATION_EXPORT NSString * const kMsg_NetWorkNoMoredata;
FOUNDATION_EXPORT NSString * const kMsg_NetWorkFailed_Params;

FOUNDATION_EXPORT NSString * const kMsg_Locationing;
FOUNDATION_EXPORT NSString * const kMsg_LocationSuccess;
FOUNDATION_EXPORT NSString * const kMsg_LocationFailed;
FOUNDATION_EXPORT NSString * const kMsg_IDCardFailed;
FOUNDATION_EXPORT NSString * const kMsg_IDCardSuccess;


FOUNDATION_EXPORT NSString * const kActionTitle_Know;
FOUNDATION_EXPORT NSString * const kActionTitle_Sure;
FOUNDATION_EXPORT NSString * const kActionTitle_Cancell;
FOUNDATION_EXPORT NSString * const kActionTitle_Delete;
FOUNDATION_EXPORT NSString * const kActionTitle_Drop;
FOUNDATION_EXPORT NSString * const kActionTitle_Call;
FOUNDATION_EXPORT NSString * const kActionTitle_Update;

FOUNDATION_EXPORT NSString * const kActionTitle_Collect;
FOUNDATION_EXPORT NSString * const kActionTitle_Recover;

FOUNDATION_EXPORT NSString * const kNIl_TEXT ;
FOUNDATION_EXPORT NSString * const kSeparateStr ;
FOUNDATION_EXPORT NSString * const kAsterisk ;
FOUNDATION_EXPORT NSString * const kBlankHalf ;
FOUNDATION_EXPORT NSString * const kBlankOne ;
FOUNDATION_EXPORT NSString * const kBlankTwo ;
FOUNDATION_EXPORT NSString * const kBlankFour ;

#pragma mark - - 通用

FOUNDATION_EXPORT NSString * const kDes_week ;
FOUNDATION_EXPORT NSString * const kDes_month ;
FOUNDATION_EXPORT NSString * const kDes_day ;

FOUNDATION_EXPORT NSString * const kItem_obj ;
FOUNDATION_EXPORT NSString * const kItem_objSeleted ;
FOUNDATION_EXPORT NSString * const kItem_block ;

FOUNDATION_EXPORT NSString * const kItem_title ;
FOUNDATION_EXPORT NSString * const kItem_titleColor ;
FOUNDATION_EXPORT NSString * const kItem_textField ;

FOUNDATION_EXPORT NSString * const kItem_titleSub ;
FOUNDATION_EXPORT NSString * const kItem_titleSubColor ;
FOUNDATION_EXPORT NSString * const kItem_titleSection ;

FOUNDATION_EXPORT NSString * const kItem_image ;
FOUNDATION_EXPORT NSString * const kItem_image_H ;

FOUNDATION_EXPORT NSString * const kItem_controller ;
FOUNDATION_EXPORT NSString * const kItem_controller_Title ;

FOUNDATION_EXPORT NSString * const kItem_Height ;
FOUNDATION_EXPORT NSString * const kItem_dataList ;
FOUNDATION_EXPORT NSString * const kItem_finished ;

FOUNDATION_EXPORT NSString * const kItem_header ;
FOUNDATION_EXPORT NSString * const kItem_footer ;
/**
 推送通知
 */
FOUNDATION_EXPORT NSString * const kNoti_title;
FOUNDATION_EXPORT NSString * const kNoti_subtitle;
FOUNDATION_EXPORT NSString * const kNoti_body;
FOUNDATION_EXPORT NSString * const kNoti_badge;


/**
 通知
 */
FOUNDATION_EXPORT NSString * const kNotiPost_logIn;
FOUNDATION_EXPORT NSString * const kNotiPost_logOut;
FOUNDATION_EXPORT NSString * const kNotiPost_backgroudUploadLocation ;

@interface BNGeneralConst : NSObject

@end
