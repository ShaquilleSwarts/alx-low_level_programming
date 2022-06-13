#include "main.h"
#include <stdio.h>

/**
 * _puts - prints string
 * Description: prints string 
 * Return: Returns 0
 */

#include <stdio.h>

void print_array(int *a, int n)

{
  int array[n] = {a, };
  int loop;

  for(loop = 0; loop < 10; loop++)
    printf("%d ", array[loop]);

  return 0;
}
