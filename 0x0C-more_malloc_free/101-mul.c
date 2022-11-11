#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiWrite a program that multiplies two positive numbers
 * @argc: count of argument
 * @argv: vectors of arguement
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	unsigned long int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%lu\n",a*b);
		return(0);
	}
	else
	{
		printf("Error");
		exit(98);
	}
	return (1);
}
