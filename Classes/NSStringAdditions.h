//
//  NSStringAdditions.h
//  iPauker
//
//  Created by Mark Probst on 10/19/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface NSString (Encodings)

- (NSString*) URLEncode;
- (NSString*) XMLEncode;

@end
