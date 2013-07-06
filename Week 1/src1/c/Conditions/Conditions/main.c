//
//  main.c
//  Conditions
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu 
//
//  Reports whether user's input is positive, negative, or zero.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Thanks for the positive integer!\n");
    }
    else if (n < 0) {
        printf("Thanks for the negative integer!\n");
    }
    else {
        printf("Thanks for the zero!\n");
    }
    return 0;
}
