#include "main.h"

/**
 *_strcpy-> function that copy pastes the string
 *@dest:destination
 *@src:source
 *Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + i) = '\0';
	return (dest);
}
