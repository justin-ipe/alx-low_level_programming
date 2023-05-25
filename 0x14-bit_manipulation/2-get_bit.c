#include "main.h"

/**
  * get_bit - function that return bit at given index
  * @n:- the number given
  * @index:- index of the required bit
  * Return:- always 0
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(size_t) * 8;

	if (index > size)
	{
		return (-1);
	}

	n >>= index;

	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
