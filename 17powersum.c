#include <stdio.h>
#include <stdlib.h>

int 
main()
{

int *buffer;
long long x = 1;
int count;

for (int i = 0; i < 1000; i++)
{
 x *= 2;

 // count length of number
 long long n = x;
 count = 0;
 while (n != 0)
 {
  count++;
  n /= 10;
 }

 //allocate memory
 buffer = (int *) malloc(count * sizeof(int));
 if (buffer == NULL)
 {
  printf("Could not allocate memory");
  return 1;
 }

 // insert remaindersa into buffer
 long long m = x;
 int p = 0;
 while (m != 0)
 {
  buffer[p] = m % 10;
  m /= 10;
  p++;
 }

}

// count sum of digits
int sum = 0;
for (int j = 0; j < count; j++)
{
 sum += buffer[j];
}

printf("%d\n", sum);

// free buffer
free (buffer);
}
