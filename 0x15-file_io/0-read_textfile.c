#include "main.h"

/**
 * read_textfile - Reading a text file function
 * @filename: The file name pointer.
 * @letters: letters number to read.
 *
 * Return: 0 on success, NULL on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t print_cnt, read_cnt;
	char *line;

	if (!filename)
		return (0);
	line = malloc(sizeof(char) * letters);
	if (!line)
		return (0);

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);

	read_cnt = read(i, line, letters);
	if (read_cnt == -1)
		return (0);

	print_cnt = write(STDOUT_FILENO, line, read_cnt);
	if (print_cnt == -1)
		return (0);

	if (close(i) == -1)
		return (0);

	free(line);
	return (print_cnt);
}
