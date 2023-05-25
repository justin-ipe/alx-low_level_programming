#include "main.h"

size_t _strlen(const char *s);

/**
  * binary_to_uint - function that converts binary to digit
  * @b:- pointer to the binary
  * Return:- Always 0
  */

unsigned int binary_to_uint(const char *b)
{
/*	int string_leng = _strlen(b);*/
	int total_value = 0;
	int base_val = 1;
	int k;

	if (!b)
	{
		return (0);
	}
	for (k = _strlen(b) - 1; k >= 0; k--)
	{
		if (b[k] == '1')
		{
			total_value += base_val;
		}
		base_val *= 2;

		if (b[k] != '1' && b[k] != '0')
			return (0);
	}

	return (total_value);
}

/**
  * _strlen - function that checks length of string
  * @s:- pointer to the string
  * Return:- Always 0
  */

size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
