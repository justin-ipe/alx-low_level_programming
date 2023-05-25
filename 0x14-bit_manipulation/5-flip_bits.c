#include "main.h"

/**
  * flip_bits - function that flips bits
  * @n:- first number
  * @m:- second number
  * Return:- Always 0
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int length;
	 int bit_m;
	 int count = 0;

	length = 8 * sizeof(n) - 1;

	for (bit_m = length; bit_m >= 0; bit_m--)
	{
		if (((n ^ m) >> bit_m) & 1)
			count++;
	}
	return (count);


}
