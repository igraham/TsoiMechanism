//
//  DrawViewController.h
//  TsoiMechanism
//
//  Created by Brennan Maddox on 2/18/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModeViewController.h"

@interface DrawViewController : ModeViewController <UIAlertViewDelegate>
{
	UIButton *hintButton;
}

@property (nonatomic, retain) IBOutlet UIButton *hintButton;

-(IBAction)hintPressed:(id)sender;
-(void) setDrawInstructions;
-(void) hintPopUp;

@end
