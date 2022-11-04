#include <stdio.h>

/**
 * main - This is the main entry to my program
 * @argc: First parameter that indicated the count of the arguement
 * @*argv: Second parameer that indicated the string arguement
 * Return: 0 to indicate succeful execution
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
