#include "shell.h"
extern char **environ;

/**
 * _getline - this is the prompt and getline function for simple shell
 * Return: pointer to the getline data
 */
int main(int ac, char **av, char **env)
{
	(void) ac, av;
	size_t n = 0;
	char *buff = NULL, *copy_of_buff = NULL,  *token, *delimeter = " \n";
	struct stat st;

	int i = 0;
	char key = "PATH", *path = NULL;
	char **env_cpy;



	while (1)
	{
		buff = malloc(sizeof(char) * n);
		if (buff != NULL)
		{
			printf("ezra_emma_shell$ ");
			if ((getline(&buff, &n, stdin)) == -1)
				perror("Error with getline");

			_str_tokenizer(buff);
			:wq
				continue;
			}

			while (env_cpy[i])
			{
				token = strtok(env_cpy[i++], "=");
				if (strcmp(key, token) == 0)
					break;
			}
			if (strcmp(token, "exit") == 0)
			{
				token = NULL, free(token);
				free(copy_of_buff);
				buff = NULL, free(buff);
				break;
			}
			printf("\n\n%s: NOT FOUND.\n\n", token);
		}
		token = NULL, free(token);
		buff = NULL, free(buff);
	}
	return (0);
}
