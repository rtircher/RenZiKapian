//
//  RZKDetailViewController.h
//  RenZiKapian
//
//  Created by Renaud Tircher on 8/22/13.
//  Copyright (c) 2013 Renaud Tircher. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RZKDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
