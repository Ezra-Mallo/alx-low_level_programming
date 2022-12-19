#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * main - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
int main(void)
{
	/*option 1*/
	size_t n = 0, nread;
	char *buff, *token;
	char *delimeter = " ";
	int count = 0;

	buff = malloc(sizeof(char) * n);

	if (buff != NULL)
	{
		printf("$");
		nread = getline(&buff, &n, stdin);
		if (nread <= 0)
			perror("Error with getline");

		token = strtok(buff, delimeter);

		while (token != NULL)
		{
			printf("%s ", token);
			token = strtok(NULL, delimeter);
			count++;
		}
		free(buff);
		free(token);
		printf("\ntoken = %d\n", count);
	}

	return (0);
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

