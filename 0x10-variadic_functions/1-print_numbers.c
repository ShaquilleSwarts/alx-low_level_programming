#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints nums
 * Description: prints list of nums
 * @n: int n
 * @separator: char is separ
 * Return: Returns 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;


va_start(args, n);

for (i = 0; i < n ; i++)
{
int x = va_arg(args, int);
printf("%d", x);

if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
