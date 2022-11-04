#include <stdio.h>

/**
 * main - This is the main entry to my program
 * @argc: First parameter that indicated the count of the arguement
 * @argv: Second arguement that indicated the string literal arguement
 * Return: 0 to indicate succeful execution
 */
int main(int argc, char *argv[])
{
	int count;

	count = argc - 1;
	printf("%d", count);
	printf("\n");
	argv[0] = " ";

	return (0);

}
