#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>

/**
 * prompt - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
char *prompt(void)
{
	/*option 1*/
	size_t n = 0, nread;
	char *buff = NULL;

	/*buff = malloc(sizeof(char) * n);*/

	printf("$");
	nread = getline(&buff, &n, stdin);
	if (nread <= 0)
		perror("Error with getline");

	return (buff);
	/**
	 * DESCRIPTION
	 * getline()  reads  an  entire  line from stream(stdin or 1), storing
	 * the address of the buffer containing the text into *lineptr. The
	 * buffer is null-terminated and includes the newline character, if one
	 * was found.
	 *
	 * *************Option 1************
	 * If you set *lineptr = NULL and set *n = 0, before
	 * the call, getline() will allocate a buffer for storing the line
	 * without a malloc command.
	 *
	 * *************Option 2************
	 * OR, you can allocate *n bytes in size of
	 * malloc on *lineptr buffer.  If the buffer is not large enough to
	 * hold the line, getline() resizes it with realloc(3), updating *lineptrand
	 * *n as necessary.
	 */
}

