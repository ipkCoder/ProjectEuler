// April 27, 2013
// Project Euler #21
// find sum of amicable numbers below 10000

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 10000

int
main(void)
{
    int sum1 = 0;
    int sum2 = 0;
    int total = 0;
    
    for (int i = 1; i < LIMIT; i++){
        
        sum1 = 0;
        for (int j = 1; j < i; j++){
            if (i % j == 0)
                sum1 += j;
        }
        
        sum2 = 0;
        for (int k = 1; k < sum1; k++){
            if (sum1 % k == 0)
                sum2 += k;
        }
        
        if ((sum2 == i) && (i != sum1)){
            printf("%d\n", i);
            total += i;
        }       
    }
    
    printf("The sum of amicable numbers less than %d is %d\n", LIMIT, total);
}

// answer: 31,626


