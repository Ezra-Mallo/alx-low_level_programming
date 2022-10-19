#include "main.h"
#include <stdio.h>

/**
 * main - Main entery funtion
 * @void: no parameter is needed
 *
 * Description: Computes multiple so 3 and 5
 * my_multiples: is the call
 * Returns: zero
 */
int main(void)
{
	int summ;

	summ = my_multiples(1024);
	printf("The sum of the multiple of 3 or 5 to the number 1024, is %d\n", summ);

	return (0);

}
