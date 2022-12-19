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

	getline_prompt(env);

	return (0);
}
