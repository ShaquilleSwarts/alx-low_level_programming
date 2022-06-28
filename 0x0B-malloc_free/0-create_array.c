#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array
 * Description: creates chararray
 * @size: array size
 * @c: param is c
 * Return: Returns 0
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;

if (size == 0)
{
return (NULL);
}
else
{
ptr = (char *)malloc(size * sizeof(char));
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
if (ptr == NULL)
{
return (NULL);
}
else
{
return (ptr);
free(ptr);
}
}
