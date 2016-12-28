//
//  SelectFileViewController.h
//  Copyright © 2016 Sequencing.com. All rights reserved
//

#import <UIKit/UIKit.h>
#import "SQTokenRefreshProtocol.h"
#import "SQFileSelectorProtocol.h"

@class SQToken;


@interface SelectFileViewController : UIViewController <SQFileSelectorProtocol, SQTokenRefreshProtocol>

@property (strong, nonatomic) SQToken *token;

@end
