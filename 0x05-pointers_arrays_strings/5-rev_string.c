#include "main.h"

/**
 * rev_string-> reverses a string
 *@s: input string
 *Return: string in reverse
 */

void rev_string(char *s)
{
	char mike = s[0];
	int will = 0;
	int a;

	while (s[will] != '\0')
		will++;
	for (a = 0; a < will; a++)
	{
		will--;
		mike = s[a];
		s[a] = s[will];
		s[will] = mike;
	}
}
