#include "main.h"
/**
 *_strlen_recursion - calcs string length
 * Description: calcs length of string
 * @s: param is s
 * Return: Returns 0
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
