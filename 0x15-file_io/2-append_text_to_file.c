#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: file name pointer.
 * @text_content: The string to be append in the file.
 *
 * Return: 1 if succeded or -1 if files fails, NULL, doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, indx = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (indx = 0; text_content[indx];)
			indx++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(i, text_content, indx);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
