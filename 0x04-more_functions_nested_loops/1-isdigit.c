#include "main.h"
#include <stdio.h>

/**
 * _isdigit - calcs digits
 * Description: all between 1 and 9
 * @c: param is c
 * Return: Returns a 0 if not and 1 if is
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
