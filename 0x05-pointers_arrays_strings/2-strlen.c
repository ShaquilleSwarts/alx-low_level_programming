#include "main.h"

/**
 * _strlen - cals string length
 * Description: cals length of string
 * @s: param is s
 * Return: Returns 0
 */

int _strlen(char *s)
{
int c = 0;
while (s[c] != '\0')
c++;
return (c);
}
