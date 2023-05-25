#include "main.h"

/**
  * print_binary - function that prints binary
  * @n:- pointer to number to be converted to binary
  * Return:- Always 0
  */

void print_binary(unsigned long int n)
{
	unsigned long int bits = 0;
	unsigned long int tmp;

	int k;

	k = sizeof(n) * 8 - 1;

	if (n == 0)
		_putchar('0');

	while (k >= 0)
	{
		tmp = n >> k;
		if (tmp & 1)
		{
			bits = 1;
		}
		if (bits == 1)
			(tmp & 1 ? _putchar('1') : _putchar('0'));
		k--;
	}
}
