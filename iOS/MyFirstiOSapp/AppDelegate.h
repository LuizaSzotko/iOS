//
//  AppDelegate.h
//  MyFirstiOSapp
//
//  Created by student on 13/10/2021.
//  Copyright © 2021 student. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

