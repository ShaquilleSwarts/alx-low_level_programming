File Edit Options Buffers Tools C Help
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stddef.h>
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
if (n > 5)
printf("%d is greater than 5\n", n);
else if (n == 0)
printf("%d and is 0\n", n);
else if (n > 6)
printf("%d and is less than 6 and not 0\n", n);
return (0);
}
