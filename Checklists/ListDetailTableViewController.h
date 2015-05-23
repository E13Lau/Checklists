//
//  ListDetailTableViewController.h
//  Checklists
//
//  Created by command.Zi on 14-5-9.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <UIKit/UIKit.h>


@class ListDetailTableViewController;
@class Checklist;

@protocol ListDetailViewControllerDelegate <NSObject>

-(void)listDetailViewControllerDidCancel:(ListDetailTableViewController *)controller;
-(void)listDetailViewController:(ListDetailTableViewController *)controller didFinishAddingChecklist:(Checklist *)checklist;
-(void)listDetailViewController:(ListDetailTableViewController *)controller didFinishEditingChecklist:(Checklist *)checklist;

@end

@interface ListDetailTableViewController : UITableViewController <UITextFieldDelegate>

@property(nonatomic,weak)IBOutlet UITextField *textField;
@property(nonatomic,weak)IBOutlet UIBarButtonItem *doneBarButton;
@property(nonatomic,weak)id <ListDetailViewControllerDelegate>delegate;

@property(nonatomic,strong)Checklist *checklistToEdit;

-(IBAction)cancel:(id)sender;
-(IBAction)done:(id)sender;

@end
