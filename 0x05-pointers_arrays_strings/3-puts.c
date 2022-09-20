#include "main.h"

/**
 *_puts-> function that prints a string, followed by a new line, to stdout
 *@str: parameter to puts function
 *Return: string
 */

void _puts(char *str)
{
	int a:

		for (; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	_putchar('\n');
}
