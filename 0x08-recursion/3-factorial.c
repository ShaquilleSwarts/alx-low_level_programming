#include "main.h"
/**
 * factorial - returns factorial
 * Description: returns factorial of given number
 * @n: param is n
 * Return: Returns 0
 */
int factorial(int n)
{
if (n <= 1)
{
if (n < 0)
{
return (-1);
}
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
