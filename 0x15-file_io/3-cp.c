#include "main.h"
#include <stdio.h>

/**
 * main - a function that appends text at the end of a file
 * @argc: 1st parameter
 * @argv: 2nd parameter
 *
 * Return: Number of characters
 */
int main(int argc, char *argv[])
{
/**
 * if argc != 3 print cp filename fileto, newine and exit with 97
 * if file already exist, TRUNCATE IT
 * if file does not exist or fd ==-1, print cant read from file NAME_OF FILEexit with 98
 * if write fd == -1
 */



if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the second argument passed to your program
if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
where FD_VALUE is the value of the file descriptor
Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
You are allowed to use dprintf


int  len = 0, w_count, fd;

	if (text_content == NULL)
	{
		if (filename == NULL)
			return (-1);
		else
			return (1);
	}

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
