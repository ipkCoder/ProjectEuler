// April 1, 2013
// Project Euler #1
// find sum of mutiples of 3's and 5's up to 1000

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int sum = 0;
    
    int i;
    for (i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;   
    }
    printf("Sum of multiple of 3's and 5's below 1,000: %d\n", sum);
}

// answer: 233,168
