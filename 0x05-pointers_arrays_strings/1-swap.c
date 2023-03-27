#include "main.h"

/**
 * swap_int - a function that swaps two integers
 * @a: function being swaped to b
 * @b: function being swaped to a
 *
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}

