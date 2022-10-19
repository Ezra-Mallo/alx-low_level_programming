#include <stdio.h>

/**
 * main - computes and prints the fibonacci numbers
 * @void:  parameter number
 *
 * This prints all the finobachi number
 * Return: nothing
 */
int main(void)
{
	long int my_int[60];
	long int i;

	for (i = 0; i <= 51; i++)
	{
		if (i == 0)
			my_int[0] = 0;

		if (i == 1)
			my_int[1] = 1;

		if (i >= 2)
			my_int[i] =  my_int[i - 1] + my_int[i - 2];
	}
	for (i = 0; i <= 51;  i++)
	{
		if (i > 1)
			printf("%lu", my_int[i]);

		if (i > 1 && i < 51)
			printf(", ");
	}
	printf("\n");
	return (0);
}
