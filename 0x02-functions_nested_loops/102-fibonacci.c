#include <stdio.h>
/**
 * fibonacci - computes and prints the fibonacci numbers
 * @n:  parameter number
 *
 * This prints all the finobachi number
 * Return: nothing
 */
void fibonacci(int n)
{
	long int my_int[1000];
	long int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
			my_int[0] = 0;

		if (i == 1)
			my_int[1] = 1;

		if (i >= 2)
			my_int[i] =  my_int[i - 1] + my_int[i - 2];
	}
	for (i = 1; i <= n;  i++)
		printf("%lu, ", my_int[i]);

	printf("\n");
}
