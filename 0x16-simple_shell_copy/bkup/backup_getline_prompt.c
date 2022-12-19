#include "shell.h"

/**
 * _getline - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
char *_getline(void)
{
	size_t n = 0;
	char *buff = NULL, *token, *delimeter = " ";
	char *copy = NULL;
	struct stat st;

	while (1)
	{
		buff = malloc(sizeof(char) * n);
		copy = malloc(sizeof(char) * n);
		if (buff != NULL)
		{
			printf("ezra_emma$ ");
			if ((getline(&buff, &n, stdin)) == -1)
				perror("Error with getline");

			token = strtok(buff, delimeter);
			if (stat(token, &st) == 0)
				printf("\n%s: FOUND. Make a call to SRINGTOKENIZATION and EXECVE\n\n", token);
			else
				printf("\n%s: NOT FOUND. Loop\n\n", token);

			if (strcmp(token, "exit") == 0)
			{
				printf("\nExiting now\n");
				token = NULL, free(token);
				buff = NULL, free(buff);
				break;
			}
			_strtokenization(buff);
		}
		token = NULL, free(token);
		buff = NULL, free(buff);
	}
	return (0);
}
