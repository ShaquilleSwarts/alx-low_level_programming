#include "main.h"
/**
 * _isalpha - is a letter uper or lower
 * Description:checks if letter uper lower
 * @c:parameter c is int
 * Return: Returns a 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);  
}
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
