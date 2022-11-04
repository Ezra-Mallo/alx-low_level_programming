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
	int prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 1; i < argc; i++)
		prod = prod * atoi(argv[i]);

	printf("%d\n", prod);
	return (0);
}
