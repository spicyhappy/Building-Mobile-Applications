//
//  Student.m
//  Students5
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Defines a student with (mostly) synthesized properties.
//

#import "Student.h"

@implementation Student
         
- (void)setName:(NSString *)name
{
    if ([name isEqualToString:@"David"]) {
        _name = @"Dummy";
    }
    else {
        _name = [name copy];
    }
}

@end
