#include "main.h"
/**
 *_puts_recursion - prints string
 * Description: prints string
 * @s: param is s
 * Return: Returns 0
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
_puts_recursion(s + 1);

}
