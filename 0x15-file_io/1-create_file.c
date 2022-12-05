#include "main.h"
#include <stdio.h>

/**
 * create_file - Create a function that creates a file
 * @filename: 1st parameter
 * @text_content: 2nd parameter
 *
 * Return: Number of characters
 */
int create_file(const char *filename, char *text_content)
{
	int  len = 0, w_count, fd;

	if (filename == NULL || text_content == NULL)
		return (-1);

	while (text_content[len] != '\0')
		len++;


	if (len == 0)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	w_count = write(fd, text_content, len);

	if (w_count == -1)
		return (-1);

	close(fd);
	return (1);

}
