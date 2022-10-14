#include <stdio.h>
/**
 * main - is the main entry point
 * @void: Takes no argument
 *
 * Description: This is the main entry. It
 * print the sizeof each data type
 * Return: return 0 to show code has finished execution
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
