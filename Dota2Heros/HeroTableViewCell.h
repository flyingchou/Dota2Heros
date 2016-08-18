//
//  HeroTableViewCell.h
//  Dota2Heros
//
//  Created by 周子翔 on 16/8/16.
//  Copyright © 2016年 zzx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeroTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *typeLabel;

@end
