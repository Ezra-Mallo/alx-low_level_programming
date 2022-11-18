#include "3-calc.h"

/**
 * main - Main entry point
 * @argc: This is the first parameter
 * @argv: This is the seond parameter
 * Return: Result
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char *op;

	if (argc != 4)
		return (-1);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	/* c = call get_op to get the actual operator*/
	result = get_op_func(op)(a, b);

	printf("%d\n", result);
	return (0);
}

