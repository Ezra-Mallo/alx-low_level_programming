#include <stdio.h>

#define PNAME __FILE__

int main(void)
{
/*	int i;

	for (i = 0 ; i <= argc; i++)
	{
		if (i <= 0)
			printf("%s", argv[0]);
	}*/

	printf("%s", PNAME);
	printf("\n");

	return (0);
}
