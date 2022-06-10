#include "main.h"
#include <stdio.h>

/**
 * _isupper - calcs if uppercase
 * Description: is it upper
 * @c: param is c
 * Return: Returns a 0 if not and 1 if is
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
