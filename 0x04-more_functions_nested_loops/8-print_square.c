#include "main.h"
/**
 * print_square - prints sqaures
 * Description: prints squares from #
 * @size: param is number of loops
 * Return: Returns 0
 */
void print_square(int size)
{
int i;
int j;
for (i = 0; i < size; ++i)
{
for (j = 0; j < size; ++j)
{
_putchar('#');
}
_putchar('\n');
}
}
