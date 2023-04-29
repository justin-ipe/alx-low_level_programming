#include "main.h"

int str_len(char *str);
/**
 * append_text_to_file - append text to end of file
 * @filename: file to append
 * @text_content: text to append to file
 *
 * Return: 1 on Success, -1 on Failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_succ;

	if (!filename)
		return (-1);

	fd = open(filename, (O_WRONLY | O_APPEND));
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		write_succ = write(fd, text_content, str_len(text_content));
		if (write_succ == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
/**
* str_len - Function that finds the length of a string
* @str: string that the length of is found
*
* Return: length of the @str
*/

int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}
