#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: file name pointer.
 * @text_content: a string pointer
 * Return: If file name is NULL return -1
 * if text empty file create empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, len);
	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}

