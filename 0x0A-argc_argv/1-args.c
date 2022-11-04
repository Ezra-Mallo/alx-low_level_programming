#include <stdio.h>

/**
 * main - This is the main entry to my program
 * @argc: First parameter that indicated the count of the arguement
 * @argv: Second arguement that indicated the string literal arguement
 * Return: 0 to indicate succeful execution
 */
int main(int argc, char *argv[])
{
	printf("%d", argc);
	printf("\n");
	argv[0] = " ";

	return (0);

}
