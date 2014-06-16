// April 2, 2013
// Project Euler #12
// find the first # with over 500 divisors

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int
main(void)
{
    long n =  0;
    long i = 1;
    bool found = false;
    
    while (found == false)
    {
        // generate triangle # and it's square root
        n += i;
        long root = sqrt(n);
        
        // count the divisors
        int counter = 0;
        for (int j = 1; j <= root; j++)
        {
            if (n % j == 0)
                counter += 2;
        }
        
        // if over 500, found #
        if (counter > 500)
            found = true;
               
        // increase i
        i++;
    }
    printf("First # with over 500 divisors is: %ld\n", n);
}

// answer: 76,576,500

