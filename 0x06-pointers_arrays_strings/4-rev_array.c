#include "main.h"


/**
 * reverse_array -reverses array
 * Description: reverses array
 * @a: param is a
 * @n: param is n
 * Return: Returns 0
 */
void reverse_array(int *a, int n)
{
int c, t;

for (c = 0; c < n / 2; c++)
{
t = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = t;
}
}
