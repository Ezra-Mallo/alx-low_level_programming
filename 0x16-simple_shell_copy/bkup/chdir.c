#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char cwd[256], *chk;


	chk = getcwd(cwd, sizeof(cwd));

	if (chk == NULL)
		perror("getcwd() error");
	else
		printf("current working directory is:\n%s\n", cwd);
	return (0);
}
