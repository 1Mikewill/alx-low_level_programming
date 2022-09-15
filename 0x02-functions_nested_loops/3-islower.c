#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *@c: character to be used in function
 *description: return type is a character
 *return: returns 1 or 0 depending on condition
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
