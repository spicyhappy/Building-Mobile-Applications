//
//  Student.m
//  Students6
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Defines a student with an init... method.
//

#import "Student.h"

@implementation Student

- (id)init
{
    self = [self initWithName:@"John" andAge:406];
    return self;
}

- (id)initWithName:(NSString *)name andAge:(int)age
{
    if (self = [super init])
    {
        self.age = age;
        self.name = name;
    }
    return self;
}

@end
