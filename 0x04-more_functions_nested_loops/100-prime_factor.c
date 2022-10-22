#include <stdio.h>

/**
  *
  */
int main(void)
{
	int m, n;

	char fact[100];
	int result;
	int i, j, k;


	m = 24;
	k = 0;


	while (m < 0)
	{
		printf("m = %d ", m);

		for (i = 2; i <= m; i++)
		{
			result = m % i;
			
			printf("factor %d, \n", result);
			if (result == 0)
			{
				fact[k] = i;
				m = result / i;
				k++;

				printf("%d factor \n", i);
			}
		}
		m--;
	}
	return (0);
}
