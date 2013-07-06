//
//  Student.m
//  Students3
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Defines a student with properties.
//

#import "Student.h"

@implementation Student

- (int)age
{
    return _age;
}

- (void)setAge:(int)age
{
    _age = age;
}

- (NSString *)name
{
    return _name;
}

- (void)setName:(NSString *)name
{
    _name = [name copy];
}

@end
