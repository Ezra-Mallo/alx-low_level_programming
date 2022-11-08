#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *, char *);

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Hello", NULL);
	if (s == NULL)
	{
		printf("r failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

    s = str_concat(NULL, "Hello");
	if (s == NULL)
	{
		printf("l failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

    s = str_concat(NULL, NULL);
	if (s == NULL)
	{
		printf("lr failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
