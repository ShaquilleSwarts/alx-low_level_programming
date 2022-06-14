#include "main.h"
/**
 * print_rev - prints string in rev
 * Description: prints string in rev
 * @s: param is s
 * Return: Returns 0
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
++i;
}
for (; i > 0; --i)
{
_putchar(s[i]);
}
_putchar('\n');
}
