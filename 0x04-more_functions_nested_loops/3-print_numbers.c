#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * Description: prints numbers 1-9
 * Return: Returns 0
 */

void print_numbers(void)

{
char c;
 for (c = 48; c <= 57; c++)
{
  if (c!= 50 && c != 52) 
{
_putchar(c);
}
_putchar('\n');
}
}
