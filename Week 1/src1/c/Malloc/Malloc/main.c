//
//  main.c
//  Malloc
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates malloc.
//

#include <stdio.h>
#include <stdlib.h>

// prototype
int *get_grades(int exams);

int main (int argc, const char * argv[])
{
    // prompt user for number of exams
    int n;
    printf("Enter number of exams: ");
    scanf("%d", &n);
    
    // get grades
    int *grades = get_grades(n);
    
    // do something with grades...
    
    // free memory
    free(grades);
    
    return 0;
}

// gets grades
int *get_grades(int exams)
{
    // allocate memory for grades (on heap)
    int *grades = malloc(sizeof(int) * exams);
    
    // prompt user for exams' grades
    for (int i = 0; i < exams; i++) {
        printf("Enter grade %d of %d: ", i+1, exams);
        scanf("%d", &grades[i]);
    }
    return grades;
}
