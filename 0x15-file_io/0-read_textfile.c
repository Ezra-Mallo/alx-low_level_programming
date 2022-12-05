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
	char *buff = malloc(letters * sizeof(char));
	size_t  r_count, w_count;


	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1 || fd == 2)
		return (0);

	r_count = read(fd, buff, letters);
	w_count = write(1, buff, r_count);

	close(fd);
	free(buff);

	return (w_count);

}
