#include <stdio.h>
#include "main.h"

/**
 * more_numbers- prints 10 times the numbers, from 0 to 14, then a new line
 *
 * Returns:values
 */

void more_numbers(void)
{
	int a, b;

	for (a = 48, a <= 59, a++)
	{
		for (b = 0, b <= 14, b++)
		{
			_putchar(b);
		}
	}
	_putchar(10);
}
