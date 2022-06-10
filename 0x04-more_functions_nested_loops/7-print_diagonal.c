#include "main.h"
/**
 * print_diagonal - prints forward slash
 * Description: prints slash n times
 * @n: param is number of loops
 * Return: Returns 0
 */
void print_diagonal(int n)
{
int i;
int j;

for (i = 0 ; i < n; ++i)
{
for (j = 0; j < i; ++j)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
