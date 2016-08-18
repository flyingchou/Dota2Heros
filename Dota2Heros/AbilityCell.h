//
//  AbilityCell.h
//  Dota2Heros
//
//  Created by 周子翔 on 8/17/16.
//  Copyright © 2016 zzx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AbilityCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *abilityImageView;
@property (weak, nonatomic) IBOutlet UILabel *abilityNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *abilityDetailLabel;

@end
