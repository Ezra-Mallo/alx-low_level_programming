#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
ssize_t getdelim(char **lineptr, size_t *n, int delim, FILE *stream);

/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	/**
	 * ssize_t getline(char **lineptr, size_t *n, FILE *stream)
	 * DESCRIPTION:
	 *        getline()  reads  an  entire  line from stream(stdin or 1),
	 *        storing it in *lineptr = address of the buffer containing
	 *        the text. The buffer(*lineptr) is null-terminated(i.e \0).
	 *        If *lineptr is set to NULL, and *n can be ignores or set 0
	 *        before the call, then getline() will allocate a buffer
	 *        for storing the line.
	 */

	size_t n = 0, ans;
	char *buff, *str, *delimeter = " ";
	int len;

	buff = malloc(sizeof(char) * n);

	printf("$");
	ans = getline(&buff, &n, stdin);

	len = strlen(buff);
	printf("%ld %d %ld\n", ans, len, n);

	str = strtok(buff, delimeter);

	while (buff != NULL)
	{
		printf("%s\n", str);
		str = strtok(NULL, delimeter);
	}

	/**
	 * OR
	 * size_t n = 0;
	 * char *buff = NULL;
	 *
	 * printf("$");
	 * getline(&buff, stdin);
	 *
	*/




	return (ans);
}
