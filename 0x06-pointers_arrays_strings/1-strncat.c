#include "main.h"


/**
 * _strncar - concatenates two string
 * Description: prints string
 * @dest: param is dest
 * @src: param is src
 * @n: param is n
 * Return: Returns 0
 */
char *_strncat(char *dest, char *src, int n)
{
int c, d;

c = 0;

while (dest[c] != '\0')
c++;


d = 0;

while (src[d] != '\0' && d < n)
{
dest [c] = src [d];
d++;
c++;
}
return (dest);
}
