#include "main.h"


/**
 * islower - this is a function that returns 1 or 0 if the it receives xter
 * @c: is the parameter
 *
 * Description: This function return 1 if lower case character is entered
 *              and returned 0 if otherwise
 * Return: return 0 or 1
 *
 */
int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
