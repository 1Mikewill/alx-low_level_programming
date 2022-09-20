#include "main.h"

/**
 *_strlen-> unction that returns the length of a string.
 *@s: string in argument
 *Return: length of string
 */
int _strlen(char *s)
{
	int mike = 0;

	while (*s != '0')
	{
		mike++;
		s++;
	}
	return (mike);
}
