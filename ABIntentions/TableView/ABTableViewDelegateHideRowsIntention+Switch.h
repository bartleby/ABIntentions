//
//  ABTableViewDelegateHideRowsIntention+Switch.h
//  Lookus
//
//  Created by Алексей Артемьев on 24.02.15.
//  Copyright (c) 2015 Алексей Артемьев. All rights reserved.
//

#import "ABTableViewDelegateHideRowsIntention.h"

@interface ABTableViewDelegateHideRowsIntention (Switch)

@property (nonatomic, assign) BOOL isCellsHidden;

- (IBAction)switchVisibilityOfCells:(UISwitch *)sender;
@end
