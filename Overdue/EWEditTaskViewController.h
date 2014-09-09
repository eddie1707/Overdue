//
//  EWEditTaskViewController.h
//  Overdue
//
//  Created by Edwin Wiersma on 02/09/14.
//  Copyright (c) 2014 Apps4Mobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EWTask.h"

@protocol EWEditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface EWEditTaskViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>

@property (strong, nonatomic) EWTask *task;
@property (weak, nonatomic) id <EWEditTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)savebarButtonItemPressed:(UIBarButtonItem *)sender;

@end
