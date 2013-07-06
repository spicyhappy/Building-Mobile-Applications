//
//  main.m
//  Students5
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates use of (mostly) synthesized properties.
//

#import <Foundation/Foundation.h>
#import "Student.h"

// prototype
void greet(Student *s);

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // Alice
        Student *alice = [Student alloc];
        alice.age = 20;
        alice.name = @"Alice";
        greet(alice);
        
        // Bob
        Student *bob = [Student alloc];
        bob.age = 21;
        bob.name = @"Bob";
        greet(bob);
        
        // David
        Student *david = [Student alloc];
        david.age = 29;
        david.name = @"David";
        greet(david);
    }
    return 0;
}

// greets student (via stderr)
void greet(Student *s)
{
    NSLog(@"Hello, %@.  I see that you are %d years old.\n", s.name, s.age);
}