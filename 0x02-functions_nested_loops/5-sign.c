#include "main.h"
/**
 * int print_sign - is a sign
 * Description: is a pos or neg
 * @ n: n is int  
 * Return: Returns a 0,1 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if(n < 0 )
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
