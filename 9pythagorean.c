// April 2, 2013
// Project Euler #9
// there is only one pythagorean triplet in which a + b + c = 1000
// find the product of a, and c for this triplet 

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int a;
    int b;
    int c;
    int x = 0;
    
    // check each combination of a, b, c
    for (a = 1; a < 1000; a++)
    {
        for (b = 1; b < 1000; b++)
        {
            for (c = 1; c < 1000; c++)
            {
                if ((a*a)+(b*b) == (c*c) && (a+b+c==1000))
                {
                    x = a*b*c;
                    break;
                }
            }
            
            if (x>0)
                break;           
        }
        
        if (x>0)
            break;
    }
    printf("Product of a, b, c in pythagorean in which a + b + c = 1000 is: %d\n", x);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
}

// answer: 31,875,000


