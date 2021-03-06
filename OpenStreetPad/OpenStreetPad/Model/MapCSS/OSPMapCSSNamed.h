//
//  Named.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 31/10/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"

@interface OSPMapCSSNamed : NSObject <CPParseResult>

@property (nonatomic, readwrite, retain/*copy*/) NSString *name;

@end
