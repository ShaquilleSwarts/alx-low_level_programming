#include "main.h"


/**
 * _strcar - concatenates two string
 * Description: prints string
 * @dest: param is dest
 * @src: param is src
 * Return: Returns 0
 */
char *_strcat(char *dest, char *src)
{
int c, d;

c = 0;

while (dest[c] != '\0')
c++;


d = 0;

while (src[d] != '\0')
{
dest [c] = src [d];
d++;
c++;
}
return (0);
}
