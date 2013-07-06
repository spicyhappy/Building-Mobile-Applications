//
//  main.c
//  While
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates a while loop.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n > 0) {
        printf("%d...\n", n);
        n--;
    }
    printf("Blast off!\n");
    return 0;
}
