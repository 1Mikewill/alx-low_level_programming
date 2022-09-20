#include "main.h"

/**
 *swap_int-> given 2 int swaps the ir values
 *@a: int in argument
 *@b: int in argument
 */

void swap_int(int *a, int *b)
{
	int mike;

	mike = *a;
	*a = *b;
	*b = mike;
}
