//
//  ChecklistItem.h
//  Checklists
//
//  Created by command.Zi on 14-5-4.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject<NSCopying>
@property(nonatomic,copy)NSString *text;
@property(nonatomic,assign)BOOL checked;
-(void)toggleChecked;
@end
