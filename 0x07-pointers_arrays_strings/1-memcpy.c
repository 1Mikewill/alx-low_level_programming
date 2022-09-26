#include "main.h"

/**
 *_memcpy -> copies function n bytes from memory area
 *@src: memory location
 *@dest: memory location
 *@n:number of bytes to be copied
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
