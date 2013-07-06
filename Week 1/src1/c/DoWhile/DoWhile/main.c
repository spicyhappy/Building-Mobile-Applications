//
//  main.c
//  DoWhile
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Demonstrates a do-while loop.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);
    printf("Thanks for the positive integer!\n");
    return 0;
}
