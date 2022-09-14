#include "main.h"

/**
 *_islower - function that checks for lowercase character
 *@c: is the int that will use for the argument of the function
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
