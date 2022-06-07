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
if (n < 0)
{
n = n * -1;
}
digit = n % 10;
_putchar(48 + digit);
return (digit);
}
