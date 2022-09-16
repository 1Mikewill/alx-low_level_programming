#include "main.h"

/**
 * _isupper- checks if character is uppercase or not
 * @c: character to be used in argument
 * Return: 1 and 0 depending on argument
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
