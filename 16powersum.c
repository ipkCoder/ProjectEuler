// March 26, 2013
// Project Euler #16
// 

#include <stdio.h>

int
main(void)
{
    long long x = 2;
    for (int i = 1; i <= 1000; i++)
    {
        x *= 2;
        printf("%lld\n", x);
    }
}
