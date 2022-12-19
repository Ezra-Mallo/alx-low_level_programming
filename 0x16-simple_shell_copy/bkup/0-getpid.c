#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(void)
{
	 pid_t getpid(void);
	 pid_t getppid(void);

	printf("Parent process Id\t%d\nChild process Id\t%d\n", getppid(), getpid());
	return (0);
}

