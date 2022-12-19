#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
	char cmd[] = "/usr/bin/ls";
	char *argv[] = {"ls", "-l", NULL};
	char *envv[] = {NULL};
	pid_t child_pid;
	int status;


	printf("Parent PID before fork  [%d] child PID [%d]\n", getppid(), getpid());
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		if ((execve(cmd, argv, envv)) == -1)
			perror("Error with execution");
		printf("It's all better now [%d] [%d]\n", getppid(), getpid());
		printf("Wait for me, wait for me[%d] [%d]\n", getppid(), getpid());
		sleep(3);
	}
	else
	{
		if ((execve(cmd, argv, envv)) == -1)
			perror("Error with execution");
		printf("It's all better now [%d] [%d]\n", getppid(), getpid());
		wait(&status);
		printf("Oh, it's all better now [%d] [%d]\n", getppid(), getpid());
	}
	return (0);
}
