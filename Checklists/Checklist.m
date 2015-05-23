//
//  Checklist.m
//  Checklists
//
//  Created by command.Zi on 14-5-8.
//  Copyright (c) 2014年 command.Zi. All rights reserved.
//

#import "Checklist.h"

@implementation Checklist

-(id)init
{
    if ((self = [super init])) {
        self.items = [[NSMutableArray alloc]initWithCapacity:20];
    }
    return self;
}
-(id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super init])) {
        self.name = [aDecoder decodeObjectForKey:@"Name"];
        self.name = [aDecoder decodeObjectForKey:@"Items"];
    }
    return self;
}
-(void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self forKey:@"Name"];
    [aCoder encodeObject:self forKey:@"Items"];
}
@end
