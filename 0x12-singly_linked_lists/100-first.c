#include <stdio.h>

void my_printf_constructor(void) __attribute__ ((constructor));

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}


/**
 * my_printf_constructor - this is the constructor
 * **/
void my_printf_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
