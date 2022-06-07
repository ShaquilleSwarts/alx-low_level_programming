#include "main.h"
/**
 * print_last_digit - last digit
 * Description: n mod 10
 * @n: n is int
 * Return: last digit
 */
int print_last_digit(int n)
{
int digit;
digit = n % 10;
if (digit < 0)
{
digit = digit * -1;
}
_putchar(48 + digit);
return (digit);
}
