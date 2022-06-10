#include "main.h"
/**
 * print_triangle - prints triangle
 * Description: prints triangle size times
 * @size: triangle size
 * Return: Returns 0
 */

void print_triangle(int size)
{
int i;
int j;
int limit;
limit = 1;
for (i = 0; i < size; ++i)
{
for (j = 0; j < (size - limit); ++j)
{
_putchar(32);
}
for (j = 0; j < limit; ++j)
{
_putchar('#');
}
++ limit;
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
