#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is the main entry to my program
 * @argc: First parameter that indicated the count of the arguement
 * @argv: Second parameer that indicated the string arguement
 * Return: 0 to indicate succeful execution
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0");
		printf("\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
		printf("%d", sum);
		printf("\n");
	}

	return (0);
}
