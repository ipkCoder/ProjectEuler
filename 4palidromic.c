// April 1, 2013
// Project Euler #4
// find largest palidromic of 2 3-digit #'s

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int x;
    int palidmax = 0;
    
    // first number
    for (int i = 100; i <= 999; i++)
    {
        // second number
        for (int j = 100; j <= 999; j++)
        {   
            // multiply
            x = i * j;
            
            // find digits and add to array
            int a = x;      
            int counter = 0;
            int array[counter];
            int digit;
            
            while (a > 0)
            {
                digit = a % 10;
                array[counter] = digit;            
                a /= 10;            
                counter++;
            }
           
            int max = 0;
            for(int k = 0; k < counter; k++)
            {            
                int left = k;
                int right = (counter - 1)- k;
                    
                if (left > right)
                    break;       
                if (array[left] != array[right])
                    break;
                if (array[left]==array[right])
                    // how many iterations
                    max++;  
                    // if all matched
                    if (max == (counter/2))
                       // find argest palidromic
                       if (x > palidmax)
                           palidmax = x;                       
            }     
        } 
    }
    
    printf("Largest palidromic: %d\n", palidmax);
}

// answer: 906609


