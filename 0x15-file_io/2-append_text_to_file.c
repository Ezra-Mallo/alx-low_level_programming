#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: 1st parameter
 * @text_content: 2nd parameter
 *
 * Return: Number of characters
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int  len = 0, w_count, fd;

	if (filename == NULL || text_content == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;


	if (len == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	w_count = write(fd, text_content, len);

	if (w_count == -1)
		return (-1);

	close(fd);
	return (1);

}
