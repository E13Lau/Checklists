//
//  ChecklistsTableViewController.h
//  Checklists
//
//  Created by command.Zi on 14-5-3.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDetailTableViewController.h"

@class Checklist;

@interface ChecklistTableViewController : UITableViewController<AddItemViewControllerDelegata>
- (IBAction)addItem:(id)sender;
@property(nonatomic,strong)Checklist *checklist;

@end
