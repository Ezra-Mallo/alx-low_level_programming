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

	if (argc < 2)
	{
		printf("0\n");
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
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
