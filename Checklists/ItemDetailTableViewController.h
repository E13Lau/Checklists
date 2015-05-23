//
//  AddItemTableViewController.h
//  Checklists
//
//  Created by command.Zi on 14-5-4.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ItemDetailTableViewController;
@class ChecklistItem;

@protocol AddItemViewControllerDelegata <NSObject>
-(void)itemDetailViewControllerDidCancel:(ItemDetailTableViewController *)controller;
-(void)itemDetailViewController:(ItemDetailTableViewController *)controller didFinishAddingItem:(ChecklistItem *)item;
-(void)itemDetailViewController:(ItemDetailTableViewController *)controller didFinishEditionItem:(ChecklistItem *)item;
@end

@interface ItemDetailTableViewController : UITableViewController<UITextFieldDelegate>
- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic, strong) ChecklistItem *itemToEdit;
@property (nonatomic, weak) id <AddItemViewControllerDelegata>delegate;

@end