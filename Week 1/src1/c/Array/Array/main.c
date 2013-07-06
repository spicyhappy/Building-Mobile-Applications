//
//  main.c
//  Array
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates arrays.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // prompt user for number of exams
    int n;
    printf("Enter number of exams: ");
    scanf("%d", &n);
    
    // allocate memory for grades (on stack)
    int grades[n];
    
    // prompt user for exams' grades
    for (int i = 0; i < n; i++) {
        printf("Enter grade %d of %d: ", i+1, n);
        scanf("%d", &grades[i]);
    }
    
    // do something with grades...
    
    return 0;
}
