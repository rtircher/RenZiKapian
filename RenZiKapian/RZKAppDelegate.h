//
//  RZKAppDelegate.h
//  RenZiKapian
//
//  Created by Renaud Tircher on 8/22/13.
//  Copyright (c) 2013 Renaud Tircher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RZKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
