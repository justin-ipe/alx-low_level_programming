#include "main.h"

/**
 * create_file - creates a file
 * @filename: name file to create
 * @text_content: content file
 *
 * Return: 1 on Success, -1 on Failure
 */

int str_len(char *str);

int create_file(const char *filename, char *text_content)
{
	int i;

	if (!filename)
		return (-1);

	i = open(filename, (O_WRONLY | O_CREAT | O_TRUNC), 00600);
	if (i == -1)
		return (-1);

	if (text_content)
		write(i, text_content, str_len(text_content));
	
	return (1);
}

/**
* str_len - Finds the length of a string
* @str: string length of is found
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
