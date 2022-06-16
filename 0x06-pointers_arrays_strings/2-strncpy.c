#include "main.h"


/**
 * _strncpy - copies string
 * Description: copy string
 * @dest: param is dest
 * @src: param is src
 * @n: param is n
 * Return: Returns 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int c = 0;

while (src[c] != '\0' && c <= n)
{
dest[c] = src[c];
c++;
}
dest[c] = '\0';
return (dest);
}
