#include "main.h"

/**
 * read_textfile- Read text file print to standard output.
 * @filename: file name pointer
 * @letters: number of letters
 * Return: actual number of bytes read and printed
 * 0 when file can not be opened,read/write or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t i;
	ssize_t j;
	ssize_t tt;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tt = read(i, buf, letters);
	j = write(STDOUT_FILENO, buf, tt);

	free(buf);
	close(i);
	return (j);
}

