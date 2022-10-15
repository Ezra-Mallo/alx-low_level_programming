#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/**
 * main - random number calculator
 * @void: is the first argument parsed and it returns nothing.
 *
 * Description: Using betty style doc for function main goes there
 * Return: returns nothing
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* test last digit and print its category*/
	last_num = n % 10;
	if (last_num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
	else if (last_num == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_num);
	else if (last_num < 6 && last_num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
	return (0);
}
