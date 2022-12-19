#include "main.h"
/**
 * main - main entry
 * Return: 0 if succesful
 */
int main(void)
{

	char *str, *token;
	char *delimeter = " ";

	str = prompt();
	token = strtok(str, delimeter);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimeter);
	}

	free(str);
	free(token);

	return (0);
}
