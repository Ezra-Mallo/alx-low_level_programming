#include "shell.h"

/**
 * _strtokenization - this is the prompt and getline function for simple shell
 * @buff: environment variable
 * Return: pointer to the getline data
 */
char *_strtokenization(char *buff)
{
	char *token;
	char **argv = NULL;
	char *delimeter = " \n";
	int i = 0;
	int j = 0, len;
	int status;
	pid_t child_pid;

	argv = malloc((sizeof(char) * strlen(buff)) * 2);
	token = strtok(buff, delimeter);

	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}

	while (j < i)
	{
		len = strlen(argv[j]);
		printf("\nargv[%d]=%s. [%d]xters.", j, argv[j], len);
		j++;
	}


	printf("\nbefore fork>> PPID[%d] PID[%d]\n", getppid(), getpid());
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return ("Error");
	}
	if (child_pid == 0)
	{
		printf("\ninside fork. calling execve>>");
		printf("PPID[%d] PID[%d]\n", getppid(), getpid());
		printf("\n**********************************************\n\n");
		execve(argv[0], argv, NULL);
		printf("\ndone with execve inside fork");
		printf("back to>> PPID[%d] PID[%d]\n", getppid(), getpid());
		printf("\n**********************************************\n\n");
		printf("Child PPID[%d] PID[%d]\n", getppid(), getpid());
		sleep(4);
	}
	else
	{
		wait(&status);
		printf("\nNow back to the parent");
		printf("PPID[%d] PID[%d]\n", getppid(), getpid());
	}

	token =  NULL;
	argv =  NULL;
	free(argv);
	free(token);

	printf("Done with execve\n");
	return ("done");
}

