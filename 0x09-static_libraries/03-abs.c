#include "main.h"

/**
 * _abs - funtion to prcess absolute vaue of the value in parameter
 *@c: the parameter passed
 *
 * Description: The abs function is same and system abs
 * Return: returns the abs value of c
 */
int _abs(int c)
{
	if (c < 0)
		c = c * (-1);
	else
		c = c;

	return (c);

}
