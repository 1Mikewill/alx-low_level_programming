#include "main.h"

/**
 *_strlen-> unction that returns the length of a string.
 *@s: string in argument
 *Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len = len + 1;
	}
	return (len);
}
