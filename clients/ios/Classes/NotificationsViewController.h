//
//  NotificationsViewController.h
//  NewsBlur
//
//  Created by Samuel Clay on 11/23/16.
//  Copyright © 2016 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsBlurAppDelegate.h"

@class NewsBlurAppDelegate;

@interface NotificationsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    NewsBlurAppDelegate *appDelegate;
}

@property (nonatomic) IBOutlet NewsBlurAppDelegate *appDelegate;
@property (nonatomic) IBOutlet UITableView *notificationsTable;
@property (nonatomic) NSString *feedId;

@end
