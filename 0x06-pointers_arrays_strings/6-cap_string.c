#include "main.h"


/**
 * cap_string - caps string
 * Description: changes lower case to upper
 * @s: param is char
 * Return: Returns 0
 */
char *cap_string(char *s)
{
int c = 0;
int test = 1;

while (s[c] != '\0')
{
if (test)
{
if (s[c] >= 'a' && s[c] <= 'z')
{
s[c] -= 32;
}
test = 0;
}

if (s[c] == ' ' || s[c] == '.' || s[c] == ','
|| s[c] == ';' || s[c] == '!' || s[c] == '?' || s[c] == '"'
|| s[c] == '(' || s[c] == ')' || s[c] == '{'
|| s[c] == '}' || s[c] == '\t' || s[c] == '\n')
{
test = 1;
}
++c;
}
return (s);
}
