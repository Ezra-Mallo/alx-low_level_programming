#include "shell.h"

/**
 * _tokenize - this is the prompt and getline function for simple shell
 * @buff: environment variable
 */
void *_tokenize(char *buff)
{
	char *token, **argv = NULL, *delimeter = " \n";
	int i = 0, status;
	pid_t child_pid;

	argv = malloc((sizeof(char) * strlen(buff)) * 2);
	token = strtok(buff, delimeter);

	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}

	_execve(argv);

	token =  NULL, free(token);
	argv =  NULL, free(argv);
}

