//
//  RTActiveCell.h
//  oschina
//
//  Created by wangjun on 12-6-4.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RTLabel.h"

@interface RTActiveCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *imgPortrait;
@property (strong, nonatomic) IBOutlet UIImageView *imgTweet;
@property (retain, nonatomic) RTLabel * rtLabel;

+ (RTLabel*)textLabel;
- (void)initialize;

@end
