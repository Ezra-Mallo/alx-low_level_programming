#include "shell.h"
extern char **environ;

/**
 * _execve - this is the prompt and getline function for simple shell
 * @argv: environment variable
 */
void _execve(char **argv)
{
	int status;
	pid_t child_pid;


	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		exit(1);
	}
	if (child_pid == 0)
	{
		execve(argv[0], argv, environ);
		sleep(4);
	}
	wait(&status);
}

