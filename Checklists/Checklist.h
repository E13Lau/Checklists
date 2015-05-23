//
//  Checklist.h
//  Checklists
//
//  Created by command.Zi on 14-5-8.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>
@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)NSMutableArray *items;

@end
