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
	printf("Size of a char: %f byte(s)", sizeof(char));
	printf("Size of an int: %f byte(s)", sizeof(int));
	printf("Size of a long int: %f byte(s)", sizeof(long));
	printf("Size of a long long int: %f byte(s)", sizeof(long long));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
