#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char cmd[] = "/usr/bin/ls";
	char *argv[] = {"ls", "-l", NULL};
	char *envv[] = {NULL};


	if ((execve(cmd, argv, envv)) == -1)
		perror("Error with execution");
	printf("I came here because the execve did not execute");

	return (0);
}

