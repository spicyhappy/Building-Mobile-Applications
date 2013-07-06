//
//  main.c
//  Enum
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates an enum (and a struct).
//

#include <stdio.h>

// gender
typedef enum {
    FEMALE,
    MALE
} genders;

// student
typedef struct {
    char *name;
    genders gender;
} student;

// prototype
void greet(student s);

int main (int argc, const char * argv[])
{
    // alice
    student alice;
    alice.name = "Alice";
    alice.gender = FEMALE;
    greet(alice);
    
    // bob
    student bob;
    bob.name = "Bob";
    bob.gender = MALE;
    greet(bob);
    
    return 0;
}

// greets student
void greet(student s)
{
    char *title = (s.gender == FEMALE) ? "Ms." : "Mr.";
    printf("Hello, %s %s.\n", title, s.name);
}
