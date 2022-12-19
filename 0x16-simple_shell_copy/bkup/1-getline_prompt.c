#include "main.h"

/**
 * getline_prompt - this is the prompt and getline function for simple shell
 * @env: environment variable
 * Return: pointer to the getline data
 */
char *getline_prompt(char **env)
{
	size_t n = 0, nread;
	char *buff, *token;
	char *delimeter = "\n";
	int count = 0;
	struct stat st;

	buff = malloc(sizeof(char) * n);

	if (buff != NULL)
	{
		while (1)
		{
			printf("ezra_emma$");
			if ((getline(&buff, &n, stdin)) == -1)
			{
				perror("Error with getline");
				free(buff), exit (0);
			}

			token = strtok(buff, delimeter);

			/* This calls the STATS to check if the command is valid */
			if (stat(buff, &st) == 0)
				printf("%s FOUND\n", buff);
			else
				printf("%s NOT FOUND\n", buff);



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

