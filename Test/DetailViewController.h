//
//  DetailViewController.h
//  Test
//
//  Created by Adi Rome on 6/1/14.
//  Copyright (c) 2014 Jibe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
