// March 26, 2013
// Project Euler #3
// find sum of even fibonacci #s up to 4,000,000 

#include <stdio.h>

int
main(void)
{
    int first = 0;
    int second = 1;
    int next = 0;
    int accumulator = 0;
    
    while (next <= 4000000)
    {
            // add first and second;
            next = first + second;

            if (next%2 == 0)
                accumulator += next;
            
            // move first to next number
            first = second;
            // set second to next;
            second = next;     
    }
    
    printf("Sum of even fibonacci numbers up to 4 million is %d\n", accumulator);
}

//answer: 4,613,732
