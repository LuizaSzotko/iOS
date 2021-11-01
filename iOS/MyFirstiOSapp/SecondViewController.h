//
//  SecondViewController.h
//  MyFirstiOSapp
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 student. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SecondViewController;

@protocol SecondViewControllerDelgate <NSObject>
-(void) addItemViewController:(SecondViewController *)controller didFinishEnteringItem: (NSString *) item;
@end

@interface SecondViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property (nonatomic,weak)id <SecondViewControllerDelgate> delgate;
@property NSString *surname;

@property (nonatomic, weak) IBOutlet UIButton *previousView;

-(IBAction)Method;

@end

NS_ASSUME_NONNULL_END
