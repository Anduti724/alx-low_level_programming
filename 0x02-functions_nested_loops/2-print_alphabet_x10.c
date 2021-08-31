#include "holberton.h"
/**
* print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
*/
void print_alphabet_x10(void)
{
int i, a;
for (i = 0; i <= 9; i++)
{
for (a = 97; a <= 122; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
