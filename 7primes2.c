// April 2, 2013
// Project Euler #7
// find 10,001st prime #

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int n = 0;
    int i = 0;
    int count;
    
    while (n < 10001)
    {
        // i is number being evaluated
        i +=1;
        
        // count number of primes found in i 
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i%j == 0)
                count++;                
        }
        
        // if only two found (1 and i) i is prime
        if (count == 2)
            // add 1 to total number of primes
            n++;       
    }
    
    printf("The 10,001st prime #: %d\n", i);
}

// answer: 104,743
