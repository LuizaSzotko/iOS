//
//  SecondViewController.m
//  MyFirstiOSapp
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 student. All rights reserved.
//

#import "SecondViewController.h"

@interface SecondViewController ()

@end

@implementation SecondViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.modifiedSurnameTextField.text = self.surname;
}


-(IBAction)Method{

    NSString *itemToPassBack = self.modifiedSurnameTextField.text;
    [self.delgate addItemViewController:self didFinishEnteringItem:itemToPassBack];
    [self dismissModalViewControllerAnimated:YES];

}

@end
