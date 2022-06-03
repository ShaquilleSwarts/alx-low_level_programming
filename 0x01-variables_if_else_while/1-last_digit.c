#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/**
 * main - find positive or negative
 * Description: using random number generator
 * Return: Returns a 0
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n%10;
 printf("last digit of %d is %d", n,m);
if (m > 5)
printf("and is greater than 5\n", n);
else if (m == 0)
printf("and is 0\n", n);
else if (m > 6)
printf("and is less than 6 and not 0\n", n);
return (0);
}
