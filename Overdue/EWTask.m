//
//  EWTask.m
//  Overdue
//
//  Created by Edwin Wiersma on 02/09/14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import "EWTask.h"

@implementation EWTask

-(id)initWithData:(NSDictionary *)data;
{
    self = [super init];
    
    if (self){
        self.title = data[TASK_TITLE];
        self.description = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    return self;
}

-(id)init
{
    self = [self initWithData:nil];
    
    return self;
}

@end
