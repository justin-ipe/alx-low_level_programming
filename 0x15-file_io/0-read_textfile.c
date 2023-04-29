#include "file.h"

/**
 * read_text_file - Reading a text file function
 * @namefile: The file name pointer.
 * @num_letters: letters number to read.
 *
 * Return: 0 on success, NULL on fail
 */

ssize_t read_text_file(const char *namefile, size_t num_letters)
{
	int i;
	ssize_t print_cnt, read_cnt;
	char *line;

	if (!namefile)
		return (0);
	line = malloc(sizeof(char) * num_letters);
	if (!line)
		return (0);

	i = open(namefile, O_RDONLY);
	if (i == -1)
		return (0);

	read_cnt = read(i, line, num_letters);
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
