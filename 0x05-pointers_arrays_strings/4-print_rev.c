#include "main.h"

/**
 *print_rev-> function that prints a string, in reverse,then new line.
 *@s: string in argument
 *return: string in reverse
 */

void print_rev(char *s)
{
	int a, b; 

	b = 0;
	while (s[b] != '0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar(\n);
}
