#include "main.h"


/**
 * string_toupper -string to upper
 * Description: changes lower case to upper
 * @s: param is char
 * Return: Returns 0
 */
char *string_toupper(char *s)
{
int c = 0;

while (s[c] != '\0')
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] = s[c] - 32;
}
c++;
}
return (s);
}
