#include "main.h"
/**
 * puts2 - prints every other char
 * Description: prints every other char
 * @str: param is str
 * Return: Returns 0
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
++i;
}
for (i = 0; i < str[i]; i += 2)
{
_putchar(str[i]);
}
{
_putchar('\n');
}
}
