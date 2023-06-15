#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swaps values.
 * @a:- single value input.
 * @b:- single value input.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
