#include "main.h"

/**
 *main - prints out lowercase alphabet
 *return= always alphabet
 */

void print_alphabet(void)
{
	int b;

	for (b = 'a' ; b <= 'z' ; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
	return (0);
}
