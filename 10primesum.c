// April 2, 2013
// Project Euler #10
// find sum of prime numbers up to 2,000,000
// I used the Sieve of Erastothenes
//     sets all numbers to true and then sets non-primes to false leaving only primes

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 2000000

int
main(void)
{
    int n = 0;
    long long sum = 0;
    
    // establish an array of LIMIT 
    long array[LIMIT];
    
    // 0 and 1 are not considered prime
    array[0] = 0;
    array[1] = 0;
    
    // mark all numbers to prime (with a 1)
    for (n = 2; n < LIMIT; n++)
        array[n] = 1;    
        
    // find non-prime numbers and mark them as so (with a zero)
    int p = 2;
    while (p*p < LIMIT)
    {
        int k = 2;
        while (p*k < LIMIT)
        {
            array[p*k] = 0;
            k++;
        }
        p++;
    }
    
    // sum up the prime numbers
    for (n = 0; n < LIMIT; n++)
        if (array[n] == 1)
            sum += n;
            
    printf("The sum of the prime numbers is %lld\n", sum);
    
    return 0;    
}

// answer: 142,913,828,922

