#include "main.h"

/**
 * main - This is the main entry to my program
 * @argc: First parameter that indicated the count of the arguement
 * @argv: Second parameer that indicated the string arguement
 * Return: 0 to indicate succeful execution
 */
int main(int argc, char *argv[])
{
	int data;
	int result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	data = atoi(argv[1]);

	result = cent_recursion(data);

	printf("%d\n", result);
	return (0);
}
