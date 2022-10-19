#include <stdio.h>

/**
 * main - computes and prints the fibonacci numbers
 * @void:  parameter number
 *
 * Description: Return: nothing
 * Return: returns 0
 */
int main(void)
{
	long int my_int[100];
	long int sum, i, num;

	sum = 0;

	for (i = 0; i <= 60; i++)
	{
		if (i == 0)
			my_int[0] = 0;

		if (i == 1)
			my_int[1] = 1;

		if (i >= 2)
			my_int[i] =  my_int[i - 1] + my_int[i - 2];
	}
	for (i = 0; i <= 60;  i++)
	{
		num = my_int[i];
		if (num % 2 == 0 && num < 4000000)
			sum = sum + num;

		if (num > 4000000)
			break;
	}

	printf("%lu\n", sum);
	return (0);
}
