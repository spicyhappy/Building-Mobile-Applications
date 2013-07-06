//
//  main.m
//  Students6
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates an init... method.
//

#import <Foundation/Foundation.h>
#import "Student.h"

// prototype
void greet(Student *s);

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // Alice
        Student *alice = [[Student alloc] initWithName:@"Alice" andAge:20];
        greet(alice);
        
        // Bob
        Student *bob = [[Student alloc] initWithName:@"Bob" andAge:21];
        greet(bob);
        
        // John
        Student *john = [[Student alloc] init];
        greet(john);
    }
    return 0;
}

// greets student (via stderr)
void greet(Student *s)
{
    NSLog(@"Hello, %@.  I see that you are %d years old.\n", s.name, s.age);
}