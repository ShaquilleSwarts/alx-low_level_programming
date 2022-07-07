#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - calcs Sum
 * Description: sums up var
 * @n: int n
 * Return: Returns 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

va_start(args, n);

sum = 0;

for (i = 0; i < n; i++)
sum += va_arg(args, int);
if (n == 0)
{
return (0);
}
va_end(args);
return (sum);
}
