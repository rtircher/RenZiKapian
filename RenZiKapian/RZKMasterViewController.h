//
//  RZKMasterViewController.h
//  RenZiKapian
//
//  Created by Renaud Tircher on 8/22/13.
//  Copyright (c) 2013 Renaud Tircher. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface RZKMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
