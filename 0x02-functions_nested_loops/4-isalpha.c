#include "main.h"


/**
 * _isalpha - this is a function that returns 1 or 0 if the it receives xter
 * @c: is the parameter
 *
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	int result;

	if (c >= 65 && c <= 90 && c <= 97 && c <= 122)
		result = 0;
	else
		result = 1;

	return (result);
}
