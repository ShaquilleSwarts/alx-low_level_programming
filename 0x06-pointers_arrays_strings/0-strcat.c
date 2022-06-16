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
  while(*dest)
    dest++;

  while(*src)
    {
      *dest = *src;
      src++;
      dest++;
    }
  *dest = '\0';
  return (dest);  
}
