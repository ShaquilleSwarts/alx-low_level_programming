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

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d", n);
int m = n%10;
if (m > 5)
printf("%d is greater than 5\n", n);
else if (m == 0)
printf("%d and is 0\n", n);
else if (m > 6)
printf("%d and is less than 6 and not 0\n", n);
return (0);
}
