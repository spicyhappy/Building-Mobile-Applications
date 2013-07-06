//
//  main.c
//  For
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates a for loop.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        printf("%d...\n", i);
    }
    printf("Blast off!\n");
    return 0;
}
