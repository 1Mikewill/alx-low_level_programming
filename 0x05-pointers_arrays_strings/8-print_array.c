#include "main.h"

/**
 *print_array ->function that prints n elements of an array of integers
 *@a: string in argument
 *@n: number of ellements
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (s != n - 1)
		{
			printf(", ");
		}
	}
	printf('\n');
}
