#include "main.h"

/**
 * _memset -> fills a memory location with a constant byte
 * @s:address to the memory block
 * @b:character used
 * @n:number of bytes used
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
