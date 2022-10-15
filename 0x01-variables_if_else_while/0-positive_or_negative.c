#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */


/**
 * Main - The function is the entry point
 * @void: is the arguement and it returns 0
 *
 * Description: Using betty style doc this is to test my control 
 * structure knowledge
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
