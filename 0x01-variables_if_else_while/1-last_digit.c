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
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* test last digit and print its category*/
	last_digit= n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	else if ((last_digit < 6) && (last_digit !=0))
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);

	return (0);
}
