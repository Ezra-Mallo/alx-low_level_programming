#include "shell.h"

/**
 * _tokenize - this is the prompt and getline function for simple shell
 * @buff: environment variable
 * Return: pointer to the getline data
 */
char *_tokenize(char *buff)
{
	char *token, **argv = NULL, *delimeter = " \n";
	int i = 0;

	argv = malloc((sizeof(char) * strlen(buff)) * 2);
	token = strtok(buff, delimeter);

	while (token != NULL)
	{
		argv[i] = token;
		token = strtok(NULL, delimeter);
		i++;
	}

	void env(buff, argv);

	/*_execve(argv);*/

	token =  NULL, free(token);
	argv =  NULL, free(argv);
	return ("done");
}

