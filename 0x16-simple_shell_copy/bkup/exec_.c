#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0, e;
	pid_t my_pid;
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("%u", getcwd);
	my_pid = fork();

	if (my_pid == -1)
	{
		perror("Error");
		return (-1);
	}

	if (my_pid == 0)
	{

		printf("Before execve\n");

/**		while (argv[i] != NULL)
		{
		*/
			e = execve(argv[i], argv, NULL);
			if (e == -1)
				perror("Error:");
		/*	i++;*/
			printf("After execve\n");
	/*	}*/
	}
	else
		wait(NULL);
	return (0);
}
