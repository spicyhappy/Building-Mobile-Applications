//
//  main.c
//  GetInt
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Gets an int from the user.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Thanks for the %d!\n", n);
    return 0;
}
