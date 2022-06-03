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
for (c = 'a'; c <= 'z'; ++c)
{
if ((c != 'q') && (c != 'e'))
{
putchar(c);
}
}
putchar('\n');
return (0);
}
