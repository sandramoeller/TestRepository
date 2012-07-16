//
//  TEMasterViewController.h
//  TestRepoProject
//
//  Created by Sandra Möller on 16.07.12.
//  Copyright (c) 2012 Techedge. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TEDetailViewController;

#import <CoreData/CoreData.h>

@interface TEMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) TEDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
