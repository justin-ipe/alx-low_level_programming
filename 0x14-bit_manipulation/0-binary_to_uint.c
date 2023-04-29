#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary string
 *
 * Return: converted number on Success, 0 on Fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int j = 1;
	int len;

	len = strlen(b) - 1;
	while (len >= 0)
	{
		if (b[len] == '1')
		{
			n += j;
		}
		j = j * 2;
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		len--;
	}
	if (b == NULL)
		return (0);
	return (n);
}

/**
* str_len - Finds the length of a string
* @str: String length of is found
*
* Return: length of the @str
*/

int str_len(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;
	return (l);
}
