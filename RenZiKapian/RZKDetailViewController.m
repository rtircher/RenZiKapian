//
//  RZKDetailViewController.m
//  RenZiKapian
//
//  Created by Renaud Tircher on 8/22/13.
//  Copyright (c) 2013 Renaud Tircher. All rights reserved.
//

#import "RZKDetailViewController.h"

@interface RZKDetailViewController ()
- (void)configureView;
@end

@implementation RZKDetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem
{
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}

- (void)configureView
{
    // Update the user interface for the detail item.

    if (self.detailItem) {
        self.detailDescriptionLabel.text = [[self.detailItem valueForKey:@"timeStamp"] description];
    }
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
