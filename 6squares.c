// April 1, 2013
// Project Euler #6
// find difference between Square of Sums and Sum of Squares, for 1-100

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int square1 = 0;
    int square2 = 0;
    
    // find sum of squares
    for (int i = 0; i <= 100; i++)
    {
        square1 += i*i;
    }
    
    // fins square of sums
    for (int j = 0; j <= 100; j++)
    {
        square2 += j;
    }
    square2 = square2*square2;
    
    printf("Square of Sums minus Sum of Squares: %d\n", square2 - square1);
}

// answer: 25,164,150
