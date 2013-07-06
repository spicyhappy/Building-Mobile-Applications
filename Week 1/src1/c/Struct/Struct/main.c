//
//  main.c
//  Struct
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates a struct.
//

#include <stdio.h>

// student
typedef struct {
    int age;
    char *name;
} student;

// prototype
void greet(student s);

int main (int argc, const char * argv[])
{
    // alice
    student alice;
    alice.age = 20;
    alice.name = "Alice";
    greet(alice);
    
    // bob
    student bob;
    bob.age = 21;
    bob.name = "Bob";
    greet(bob);
    
    return 0;
}

// greets student
void greet(student s)
{
    printf("Hello, %s.  I see that you are %d years old.\n", s.name, s.age);
}
