#include "shell.h"
extern char **environ;

/**
 * _getline - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
char *_getline(void)
{
	size_t n = 10;
	char *buff = NULL, *copy_of_buff = NULL,  *token, *delimeter = " \n";
	struct stat st;

	while (1)
	{
		buff = malloc(sizeof(char) * n);
		if (buff != NULL)
		{
			printf("ezra_emma_shell$ ");
			if ((getline(&buff, &n, stdin)) == -1)
				perror("Error with getline");

			copy_of_buff = strdup(buff);
			token = strtok(copy_of_buff, delimeter);
			if (stat(token, &st) == 0)
			{
				_tokenize(buff);
				continue;
			}
			if (strcmp(token, "exit") == 0)
			{
				token = NULL, free(token);
				free(copy_of_buff);
				buff = NULL, free(buff);
				break;
			}
			if (strcmp(token, "cd") == 0)



					)
			printf("\n\n%s: NOT FOUND.\n\n", token);
		}
		token = NULL, free(token);
		buff = NULL, free(buff);
	}
	return (0);
}
