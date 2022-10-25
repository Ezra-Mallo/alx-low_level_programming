#include <stdio.h>      
/*#include <conio.h>  */
#include <stdlib.h> 
#include <time.h>i

int _keygen(char flag, int min_range, int max_range)  
{     
    // use rand() function to generate the number 
	int num, i;
	int j = 0, k = 0;

		srand(time(0));


	for (i = 0; i < 100; i++)
	{
		num = (rand() % 90 + 65);
		if (num >= 65 && num <= 90)
			j++;
		else /*if (num < 65 && num > 90) */
			k++;

		printf ("%d = ", num);
		putchar(num);
		putchar('\n');
	}
	printf ("those within range (A-Z) =%d , outside range =%d", j , k);
}  
