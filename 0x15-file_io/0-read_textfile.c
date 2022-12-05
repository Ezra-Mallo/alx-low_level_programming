#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
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
	char *buff = malloc(letters + 1);
	size_t  n, i = 0;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("Faileid to create and write to the file");
		exit(1);
	}

	read(fd, buff, letters);
	buff[letters] = '\0';
	while (buff[i])
	{
		/*n += write(1, (&buff[i]), 1);*/
		n = printf("%s", buff);
		i++;
	}
	return (n);

}
