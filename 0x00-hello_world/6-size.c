#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is main
 * Return: 0
 */
int main(void)
{
int n = 10;
char csize = 'a';
long int li = 10;
long long int lli = 10;
float fl = 10.0;
printf("Size of a char: %zu byte(s)\n", sizeof(csize));
printf("Size of an int: %zu byte(s)\n", sizeof(n));
printf("Size of a long int: %zu byte(s)\n", sizeof(li));
printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
printf("Size of a float: %zu byte(s)\n", sizeof(fl));
return (0);
}
