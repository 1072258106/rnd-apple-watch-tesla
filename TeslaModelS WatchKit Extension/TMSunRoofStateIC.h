//
//  TMSunRoofStateIC.h
//  TeslaModeS
//
//  Created by Oleksandr Bolhovetskyy on 11/27/14.
//  Copyright (c) 2014 Eleks. All rights reserved.
//

#import <WatchKit/WatchKit.h>

#import "TMSunRoofStateCell.h"
#import "TeslaModelSKit.h"

@interface TMSunRoofStateIC : WKInterfaceController
{
    VehicleRoofState roofState;
}

@property (strong, nonatomic) IBOutlet WKInterfaceLabel *lblOpenRoof;
@property (strong, nonatomic) IBOutlet WKInterfaceLabel *lblComfort;
@property (strong, nonatomic) IBOutlet WKInterfaceLabel *lblVentilation;
@property (strong, nonatomic) IBOutlet WKInterfaceLabel *lblCloseRoof;
@property (strong, nonatomic) IBOutlet WKInterfaceButton *btnOpenRoof;
@property (strong, nonatomic) IBOutlet WKInterfaceButton *btnComfort;
@property (strong, nonatomic) IBOutlet WKInterfaceButton *btnVentilation;
@property (strong, nonatomic) IBOutlet WKInterfaceButton *btnCloseRoof;

- (IBAction)btnOpenRoofTouch;
- (IBAction)btnComfortTouch;
- (IBAction)btnVentilationTouch;
- (IBAction)btnCloseRoofTouch;

@end
