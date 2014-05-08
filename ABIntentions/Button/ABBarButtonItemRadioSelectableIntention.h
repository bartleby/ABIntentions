//
//  ABBarButtonItemRadioSelectableIntention.h
//  ABIntentionsDemo
//
//  Created by Антон Буков on 02.05.14.
//  Copyright (c) 2014 Codeless Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABBarButtonItemRadioSelectableIntention : NSObject

@property (weak, nonatomic) IBOutlet UIBarButtonItem *selectedItem;

- (IBAction)itemTiggered:(id)sender;

@end
