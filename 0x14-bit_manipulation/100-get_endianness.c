#include "main.h"
/**
  * get_endianness - function that check endiannness
  * Return:- Always 0
  */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	if (!*c)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
