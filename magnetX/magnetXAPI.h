//
//  magnetXAPI.h
//  magnetX
//
//  Created by 张靖 on 16/10/22.
//  Copyright © 2016年 214644496@qq.com. All rights reserved.
//

#ifndef magnetXAPI_h
#define magnetXAPI_h

#define MagnetXSiteChangeNotification @"siteChangeNotification"
#define MagnetXSiteChangeKeywordNotification @"siteChangeKeywordNotification"
#define MagnetXStartAnimatingProgressIndicator @"startAnimatingProgressIndicator"
#define MagnetXStopAnimatingProgressIndicator @"stopAnimatingProgressIndicator"

#pragma mark - Snippet
#define WEAKSELF(o) autoreleasepool{} __weak typeof(o) o##Weak = o;
#define STRONGSELF(o) autoreleasepool{} __strong typeof(o) o = o##Weak;

#endif /* magnetXAPI_h */
