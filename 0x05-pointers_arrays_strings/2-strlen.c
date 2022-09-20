#include "main.h"

/**
 *_strlen-> unction that returns the length of a string.
 *@s: string in argument
 *Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		*s = *s + 1;
	}
	return (len);
}
