#include "shell.h"

/**
 * _execve - this fucntion call the execve
 * @token: This is the buffer coming from getline
 *
 * Return: Always 0.
 */
int _execve(char *token)
{
	pid_t my_pid;


	printf("Parent PID[%i], child PID{%i}\n", getppid(), getpid());

	my_pid = fork();

	if (my_pid == -1)
	{
		perror("Error");
		return (-1);
	}

	if (my_pid == 0)
	{

		printf("Before execve\n");

		if ((execve(token, "-l", NULL)) == -1)
			perror("Error:");
		printf("After execve\n");
		printf("Parent PID[%d], child PID{%d}\n", getppid, getpid);
	}
/*		wait(30);*/
	return (0);
}
