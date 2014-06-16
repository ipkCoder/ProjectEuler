// April 15, 2013
// Project Euler #19
// find how many times Sunday occured on the 1st of a month during the 20th century

#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    // days in month
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    int year = 1900;
    int days_left = 0;
    int sundays = 0;
    int days;
    
    while (year < 2001)
    {
        for (int i = 0; i < 12; i++)
        {
            // determine if leap year, if it is days in February is 29, else 28
            if (year % 4 == 0 || (year % 1000 != 0 && year % 400 ==0))
                month[1] = 29;
            else
                month[1] = 28;
                 
            days = month[i];
                
            // if days left in month is 6, Sunday will occur on 1st of month
            days_left = (days - (7 - days_left)) % 7;
           
            // year 1900 doesn't count
            if (year >= 1901)
                if (days_left == 6)
                    sundays++;
        }
        
        year++;
    }
    
    printf("Number of Sundays that occured on 1st of month is: %d\n", sundays);
}

// answer: 171


