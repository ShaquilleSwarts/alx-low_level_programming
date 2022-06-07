#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10
 * Description: print_alphabet_x10
 * Return: Returns a 0
 */
int print_alphabet_x10(void)
{
  char c;
  int a;
  for ( a = 0; a < 10; ++a){
    for (c = 'a'; c <= 'z'; ++c){
      _putchar(c);
    }
    _putchar('\n');
  }
  return (0);
}
