#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 *                 prints it to the POSIX standard output
 * @filename: 1st parameter
 * @letters: 2nd parameter
 *
 * Return: Number of characters
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int  r_count, w_count;


	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);

	if (fd == -1 || buff == NULL)
		return (0);

	r_count = read(fd, buff, letters);
	w_count = write(1, buff, r_count);

	if (r_count == -1 || w_count == -1)
		return (0);

	close(fd);
	free(buff);

	return (w_count);

}
