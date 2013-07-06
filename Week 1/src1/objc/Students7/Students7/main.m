//
//  main.m
//  Students7
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates mutable arrays.
//

#import <Foundation/Foundation.h>
#import "Student.h"

// prototype
void greet(Student *s);

int main(int argc, const char * argv[])
{
    @autoreleasepool {
        
        // allocate array for students
        NSMutableArray *students = [[NSMutableArray alloc] init];
        
        // Alice
        [students addObject:[[Student alloc] initWithName:@"Alice" andAge:20]];
        
        // Bob
        [students addObject:[[Student alloc] initWithName:@"Bob" andAge:21]];
        
        // greet then release each student
        for (Student *s in students) {
            greet(s);
        }
    }
    return 0;
}

// greets student (via stderr)
void greet(Student *s)
{
    NSLog(@"Hello, %@.  I see that you are %d years old.\n", s.name, s.age);
}
