#include "main.h"

int str_len(char *str);
/**
 * binary_to_uint - convert binary to decimal
 * @b: binary string
 *
 * Return: converted number on Success, 0 on Fail
 */

unsigned int binary_to_uint(const char *b)
{
	char *s = _revstr(b); /* reverse string for easier parsing */
	unsigned int i, j, mul, b_digit, result = 0;

	/* check for NULL pointer */
	if (!s)
		return (0);

	for (i = 0; s[i]; i++)
	{
		/* check if valid binary char */
		if (s[i] != '0' && s[i] != '1')
		{
			free(s);
			return (0);
		}

		/* convert binary char to int */
		b_digit = s[i] - '0';

		/* if index is greater than 0 */
		if (i)
		{
			/* loop to produce 2 to the ith power */
			for (j = 0, mul = 1; j < i; j++)
				mul *= 2;
			/* multiply binary digit by result of 2^i */
			result += b_digit * mul;
		}
		/* if index is 0 (i.e. 2^0) */
		else
			result += b_digit;
	}
	free(s);
	return (result);
}
/**
* _revstr - reverses a constant string
* @src: string to be reversed
*
* Return: reversed string
*/
char *_revstr(const char *src)
{
	int i, j; /* looping variables */
	char *dest; /* target string */

	/* if NULL, return "(null)" */
	if (!src)
		return (NULL);

	/* allocate memory for dest */
	dest = malloc(sizeof(char) * (_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);

	/* copy arg to new string in reverse */
	i = _strlen(src) - 1;
	j = 0;
	while (i >= 0)
		dest[j++] = src[i--];

	/* initialize null-byte */
	dest[j] = '\0';

	return (dest);
}
/**
* _strlen - Function that finds the length of a string
* @s: string that the length of is found
*
* Return: length of the @s
*/
int _strlen(const char *s)
{
	/* variable to loop through string to get length */
	int len = 0;

	/* Loop through string, checking for null byte */
	while (s[len] != '\0')
		len++;

	return (len);
}
