#include "main.h"

/**
  * print_binary - A function that prints the binary representation of a number
  * @n: number to be printed.
  * Return: Binary representation of a number
  */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int j = 0;
	int k;
	
	k = sizeof(n) * 8 - 1;

	while (k >= 0)
	{
		i = n >> k;
		if (i & 1)
			j = 1;
		if (j == 1)
		{
			(i & 1 ? _putchar('1') : _putchar('0'));
		}
		k--;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
