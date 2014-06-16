/* April 3, 2013
 * Project Euler #15
 *
 * Find the # of routes in a 20x20 grid by starting at the top left corner, 
 * down to the bottom right corner. Can only go right or down.
 * 
 * I used Pascal's Triangle formula to find the answer.
 * The program also works for other grid dimensions.
 *
 * rows = # of rows in grid, columns = # of columns in grid, n = row # in Pascal's Triangle
 * k = column # in Pascal's Triangle
 */

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
    printf("Enter rows number: ");
    int rows = GetInt();
    printf("Enter columns number: ");
    int columns = GetInt();
    
    // find row # in Pascal's Triangle
    int n = rows + columns;
    
    // find # in Pascal's Triangle
    long long value = 1;
    for (int k = 1; k <= rows; k++)
    {
        value = ((value * (n + 1 - k)) / k);   
    }
    
    printf("There are %lld rouutes through a %d x %d grid!\n", value, rows, columns); 
}

// answer: 137,846,528,820

