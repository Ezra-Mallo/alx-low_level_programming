#include <stdio.h>

/**
 * main -  Fizz Buzz application
 * @void: Nothing to return
 *
 * Description: Program that prints the numbers from 1 to 100, followed by
 * a new line. But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz. For numbers which are multiples
 * of both three and five print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int data[10];
	

	for (i = 1; i <= 100;  i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			data[0] = "FizzBuzz";
			j = 8;
		}
		else if (i % 3 == 0)
		{
			data[0] = "Fizz";
			j = 4;
		}
		else if (i % 5 == 0)
		{	
			data[0] = "Buzz";
			j = 4;
		}
		else
		{	
			data[0] = i;
			j = 3 ;
		}
		
		if (i< 100)
		{
			for (k = 0; k < j; k++)
				printf("%d", data[k]);
			printf(" ");

		}
		else
		{
			for (k = 0; k< j; k++
					printf("%d", data[k]);
		}
	}
	printf("\n");

	return (0);
}
