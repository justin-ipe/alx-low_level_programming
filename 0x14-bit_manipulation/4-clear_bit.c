#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @index: index of binary
 * @n: binary number
 * Return: otherwise 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;
	int j;
	unsigned int len;

	len = index > 8 * sizeof(*n);
	i = ~(1 << index);
	*n = *n & i;
	j = len ? -1 : 1;

	return (j);
}
