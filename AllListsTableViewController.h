//
//  AllListsTableViewController.h
//  Checklists
//
//  Created by command.Zi on 14-5-8.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailTableViewController.h"

@interface AllListsTableViewController : UITableViewController <ListDetailViewControllerDelegate>
-(void)saveChecklists;

@end
