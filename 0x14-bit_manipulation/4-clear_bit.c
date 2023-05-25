#include "main.h"

/**
  * clear_bit - function that sets bit to zero
  * @n:- the given number
  * @index:- index of bit to set to zero
  * Return:- Always 0
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shujaa;
	unsigned int k, l;

	shujaa = index > 8 * sizeof(*n);

	k = ~(1 << index);
	*n = *n & k;

	l = shujaa ? -1 : 1;

	return (l);


}
