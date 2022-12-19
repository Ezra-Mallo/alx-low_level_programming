#include "main.h"

#define DELIMETER " "

/**
 * main - main entry
 * @ac: argument counter
 * @av: argument vector
 * @env: environmental variable
 *
 * Return: 0 if succesful
 */
int main(int ac, char **av, char **env)
{

	(void) ac;
	(void) av;
	char *str;
	char *token;

	str = NULL;
	str = prompt(env);
	token = strtok(str, DELIMETER);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, DELIMETER);
	}

	free(str);
	free(token);

	return (0);
}
