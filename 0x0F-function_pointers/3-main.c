#include "3-calc.h"

/**
 * main - Main entry point
 * @argc: This is the first parameter
 * @argv: This is the seond parameter
 * Return: if number of arg is wrong print error + NL +exit with 98
 *         if operator != any of the 5, print error + NL + exit with 99
 *         if divisor  = 0 print error  + NL + exit with 100
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *my_op;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	my_op = argv[2];

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}

	if (*my_op != '+' && *my_op != '-' && *my_op != '/' &&
			*my_op != '*' && *my_op != '%')
	{
		printf("Error\n");
		return (99);
	}
	/* c = call get_op to get the actual operator*/
	result = get_op_func(my_op)(a, b);
	printf("%d\n", result);
	return (0);
}

