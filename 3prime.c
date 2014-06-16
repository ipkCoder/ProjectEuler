// March 31, 2013
// Project Euler #3
// find largest prime factor of the number 600,851,475,143

#include <stdio.h>
#include <math.h>

#define NUMBER 600851475143

int
main(void)
{
    // set x to given number
    long long x = NUMBER;
    
    // prime number divisor
    long long prime;

    // find smallest prime number
    long long int i;
    for (i = 2; i <= NUMBER; i++)
    {
        // if x is not evenly divided into by i, check next number
        if (x%i != 0)
            continue;
        
        // if x is evenly divided by i, i is prime
        if (x%i==0)
        {
            // found smallest prime number of x
            prime = i;
            // find next number to divide by i
            x = x / i;
            // reset i to search for smallest prime of x
            i = 1;
        }
        // if x is 1, stop
        if (x == 1)
            break;
    }
    
    printf("The largest prime factor of %ld is %lld\n",NUMBER,prime);
}

// answer: 6857


