#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints numbers
 * Description: prints numbers 1-9 not 2 and 4
 * Return: Returns 0
 */

void print_most_numbers(void)

{
char c;
for (c = 48; c <= 57; c++)
{
if (c != 50 && c != 52)
{
_putchar(c);
}
}
_putchar('\n');
}
