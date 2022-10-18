#include "main.h"

/**
 * _islower - this is a function that returns 1 or 0 if the it receives xter
 * @c: is the parameter
 *
 * Description: This function return 1 if lower case character is entered
 * And returns 0 if otherwise
 * Return: resut of the check
 */
int _islower(int c)
{
	/** returns 1 if c is lowercase */
	int result;

	if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
