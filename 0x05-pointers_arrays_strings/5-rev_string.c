#include "main.h"
/**
 * rev_string - rev string
 * Description: rev stirng
 * @s: param is s
 * Return: Returns 0
 */
void rev_string(char *s)
{
int i;
int tmp;
int len = 0;
while (s[len] != '\0')
{
++len;
}
--len;
for (i = 0; i < len / 2; ++i)
{
tmp = s[i];
s[i] = s[len - i];
s[len - i] = tmp;
}
}
