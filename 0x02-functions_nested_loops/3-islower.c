#include "main.h"


/**
 * islower - this is a function that returns 1 or 0 if the it receives xter
 * @c: is the parameter
 *
 * Return: return 0 or 1
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
