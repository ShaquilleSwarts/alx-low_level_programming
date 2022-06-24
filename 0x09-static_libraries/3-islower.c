#include "main.h"
/**
 * _islower - is it lower
 * Description: check lowercase
 * @c: parameter c is int
 * Return: Returns a 1 or a 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
