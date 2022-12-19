#include "main.h"

/**
 * cent_recursion - The recursion funtion for cent
 * @m: First parameter that indicated the count of the arguement
 * Return: a number succeful execution
 */
int cent_recursion(int m)
{
	int i = 0;
	int n = m;

	if (n >= 25)
	{
		i = i + 1;
		cent_recursion(n / 25);
	}
	else if (n >= 10)
	{
		i++;
		cent_recursion(n / 10);
	}
	else if (n >= 5)
	{
		i++;
		cent_recursion(n / 5);
	}
	else if (n >= 2)
	{
		i++;
		cent_recursion(n / 2);
	}
	else if (n == 1)
	{
		i++;
		cent_recursion(n / 1);
	}
	
	return (i);
}
