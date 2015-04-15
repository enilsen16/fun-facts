//
//  ViewController.h
//  Fun Facts
//
//  Created by Erik Nilsen on 4/14/15.
//  Copyright (c) 2015 Erik Nilsen. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;


@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *
    funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@property(strong, nonatomic) ColorWheel *colorWheel;

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;
@end

