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
char c;
char A;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (A = 'A'; A <= 'Z'; ++A)
{
putchar(A);
}
putchar('\n');
return (0);
}
