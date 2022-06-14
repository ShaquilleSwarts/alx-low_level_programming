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
int j;
while (str[i] != '\0')
{
++i;
}
--i;
for (j = 0; j <= i; j += 2)

{
_putchar(str[j]);
}
{
_putchar('\n');
}
}
