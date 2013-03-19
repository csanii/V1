//
//  DetailViewController.h
//  V1
//
//  Created by chris sanii on 13-03-19.
//  Copyright (c) 2013 chris sanii. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
