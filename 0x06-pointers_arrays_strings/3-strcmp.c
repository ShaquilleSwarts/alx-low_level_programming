#include "main.h"


/**
 * _strcmp - compares two string
 * Description: compares string
 * @s1: param is s1
 * @s2: param is s2
 * Return: Returns 0
 */
int _strcmp(char *s1, char *s2)

{
int len1 = 0;
int len2 = 0;
int i;
int size1 = 0;
int size2 = 0;

while (s1[len1] != '\0')
{
++len1;
}
++len1;

while (s2[len2] != '\0')
{
++len2;
}
++len2;

if (len1 < len2)
{
len2 = len1;
}
else
{
len1 = len2;
}
for (i = 0; i < len1 ; i++)
{
size1 += s1[i];
}
for (i = 0; i < len2; i++)
{
size2 += s2[i];
}
return (size2 - size1);
}
