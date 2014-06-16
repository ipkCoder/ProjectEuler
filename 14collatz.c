// April 2, 2013
// Project Euler #14
// find the # < 1 million that produces longest Collatz sequence

#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define LIMIT 1000000

int
main(void)
{
    long long x = 0;
    long long values[LIMIT];
    bool holder;
    int max = 0;
    
    // i is number being checked
    for (int i = 2; i < LIMIT; i++)
    {          
        x = i;
        int counter = 1;
        while (x > 1)
        {
            // determine if i is even (true) or odd (false)
            if (x%2 ==0)
                holder = true;
            else 
                holder = false;
            
            // perform proper operation
            if (holder == true)
                x = x / 2;
            if (holder == false)
                x = (3 * x) + 1;
                
            // add 1 to sequenc length
            counter++;
        }
        
        // enter length into sequence
        values[i-2] = counter;
    }   
    
    // find longest length
    for (int j = 0; j < LIMIT-2; j++)
    {
        if (values[j] > values[max])
            max = j;    
    }
    
    printf("The number < 1 million that produces longest Collatz\n");
    printf("seqence is %d with a length of %lld\n", max + 2, values[max]);
        
}

// answer: 837,799


