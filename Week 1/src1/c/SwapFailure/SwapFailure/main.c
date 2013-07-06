//
//  main.c
//  SwapFailure
//
//  David J. Malan
//  Harvard University
//  malan@harvard.edu
//
//  Fails to swap two variables' values.
//

#include <stdio.h>

// function prototype 
void swap(int a, int b);


int main(int argc, const char * argv[])
{
    int x = 0;
    int y = 1;
    
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    printf("Swapping x and y...\n");
    swap(x, y);
    printf("Success!\n");
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    
    return 0;
}


//
// Swaps arguments' values.
//

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
