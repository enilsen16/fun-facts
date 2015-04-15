//
//  ColorWheel.h
//  Fun Facts
//
//  Created by Erik Nilsen on 4/14/15.
//  Copyright (c) 2015 Erik Nilsen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
