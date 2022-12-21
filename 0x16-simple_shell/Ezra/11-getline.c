#include "shell.h"
extern char **environ;

/**
 * _getline - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
char *_getline(void)
{
	size_t n = 10;
	int len = 0;
	char *buff = NULL, *copy_of_buff = NULL,  *token, *delimeter = " \n";
/*	*struct stat st;*/

	while (1)
	{
		buff = malloc(sizeof(char) * n);
		if (buff != NULL)
		{
			printf("[%d] [%d]\n", getppid(), getpid());
			printf("ezra_emma_shell$ ");
			len = getline(&buff, &n, stdin);
			printf("%i\n", len);
			if (len == -1)
			{
				perror("Error with getline");
				printf("error");
			}

			if (buff != NULL)
			{
				copy_of_buff = strdup(buff);
				token = strtok(copy_of_buff, delimeter);
				if (strcmp(token, "exit") == 0)
				{
					token = NULL, free(token);
					buff = NULL, free(buff);
					free(copy_of_buff);
					break;
				}
				_tokenize(buff);
			}
		}
/*		token = NULL, free(token);
		buff = NULL, free(buff);
		free(copy_of_buff);*/
	}

	return (0);
}

