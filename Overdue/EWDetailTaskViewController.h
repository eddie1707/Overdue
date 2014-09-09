//
//  EWDetailTaskViewController.h
//  Overdue
//
//  Created by Edwin Wiersma on 02/09/14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EWTask.h"
#import "EWEditTaskViewController.h"

@protocol EWDetailTaskViewControllerDelegate <NSObject>

-(void)updateTask;

@end

@interface EWDetailTaskViewController : UIViewController <EWEditTaskViewControllerDelegate>

@property (strong, nonatomic) EWTask *task;
@property (weak, nonatomic) id <EWDetailTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UILabel *titleLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
