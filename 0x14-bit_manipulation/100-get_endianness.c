#include "holberton.h"
/**
 * get_endianness - determine big/little endian machine
 *
 * Return: 1 if Little Endian, 0 if Big Endian
 */
int get_endianness(void)
{
	unsigned int m = 1;

	char *n = (char *) &m;

	if (!*n)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
