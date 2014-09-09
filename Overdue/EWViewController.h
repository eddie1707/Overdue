//
//  EWViewController.h
//  Overdue
//
//  Created by Edwin Wiersma on 02/09/14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EWAddTaskViewController.h"
#import "EWDetailTaskViewController.h"

@interface EWViewController : UIViewController <EWAddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EWDetailTaskViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *taskObjects;

@property (strong, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)reorderBarButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)addTaskBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
