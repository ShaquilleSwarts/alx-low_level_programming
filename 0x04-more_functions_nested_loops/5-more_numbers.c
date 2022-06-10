#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers
 * Description: prints mores numbers 0-14
 * Return: Returns 0
 */

void more_numbers(void)

{
int i;
int c;
int tens;
int units;

for (i = 0; i < 10; ++i)
{
for (c = 0; c <= 14; ++c)
{
tens = c / 10;
units = c % 10;
if (tens > 0)
{
_putchar('1');
}
_putchar(48 + units);
}
_putchar('\n');
}
}
