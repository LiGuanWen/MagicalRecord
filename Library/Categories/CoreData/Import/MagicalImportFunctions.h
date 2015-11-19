//
//  MagicalImportFunctions.h
//  Magical Record
//
//  Created by Saul Mora on 3/7/12.
//  Copyright (c) 2012 Magical Panda Software LLC. All rights reserved.
//

@import Foundation;

NSDate *MRAdjustDateForDST(NSDate *date);
NSDate *MRDateFromString(NSString *value, NSString *format);
NSDate *MRDateFromNumber(NSNumber *value, BOOL milliseconds);
NSNumber *MRNumberFromString(NSString *value);
NSString *MRAttributeNameFromString(NSString *value);
NSString *MRPrimaryKeyNameFromString(NSString *value);

#if TARGET_OS_IPHONE
@import UIKit;
UIColor *MRColorFromString(NSString *serializedColor);
#else
@import Cocoa;
NSColor *MRColorFromString(NSString *serializedColor);
#endif

NSInteger *MRNewColorComponentsFromString(NSString *serializedColor);
