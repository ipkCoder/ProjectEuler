// April 1, 2013
// Project Euler #5
// find the smallest # that can be divided by 1 through 20, without a remainder

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    int number = 1;
    int twenty = 0;

    while (twenty < 20)
    {
            twenty = 0;
            for (int j = 1; j <=20; j++)
            {
                if (number % j != 0)
                    break;
                if (number % j ==0)
                    twenty++;
            }
            number += 1;
    } 

    printf("Smallest # divisable by 1-20: %d\n", number - 1);
}

// answer: 232,792,560
