#include "main.h"

/**
 * swap_int - swaps int val
 * Description: swaps int a b value
 * @a: param is a
 * @b: param is b
 * Return: Returns 0
 */

void swap_int(int *a, int *b)
{
int t;

t  = *b;
*b = *a;
*a = t;
}
