//
//  TabBarViewController.h
//  SFDCOfflinePoc
//
//  Created by PAULO VITOR MAGACHO DA SILVA on 1/23/16.
//  Copyright © 2016 Topcoder Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TabBarViewController : UITabBarController<UIAlertViewDelegate>

/**
 *  starts pin configuration
 *
 *  @param initial initial configuration
 */
- (void)configurePin:(BOOL)initial;

@end
