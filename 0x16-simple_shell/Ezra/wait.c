#include <stdio.h>
#include <stdlib.h>
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
    pid_t child_pid;
    int status;
    char **argv = malloc(128);

    printf("PPID[%d] PID[%d]\n", getppid(), getpid());
        argv[0] = "/bin/ls";
	argv[1] = "-l";
	argv[2] = NULL;

    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        printf("execve here PPID[%d] PID[%d]\n", getppid(), getpid());
        printf("Wait for me, wait for me\n");
	sleep(3);

    }
    else
    {
        wait(&status);
        execve(argv[0], argv, NULL);
        printf("PPID[%d] PID[%d]\n", getppid(), getpid());
        printf("Oh, it's all better now\n");

    }
    return (0);
}
