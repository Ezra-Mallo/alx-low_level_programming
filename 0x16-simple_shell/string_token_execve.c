#include "shell.h"
extern char **environ;

/**
 * _strtokenization - this is the prompt and getline function for simple shell
 * @buff: environment variable
 * Return: pointer to the getline data
 */
char *_strtokenization(char *buff)
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

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return ("Error");
	}
	if (child_pid == 0)
	{
		execve(argv[0], argv, NULL);
		sleep(4);
	}
	else
		wait(&status);

	token =  NULL, free(token);
	argv =  NULL, free(argv);
	return ("done");
}

