#include "main.h"
/**
 *_print_rev_recursion - prints string in rev
 * Description: prints string in rev
 * @s: param is s
 * Return: Returns 0
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
