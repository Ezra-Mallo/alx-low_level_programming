#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char _keygen(int minn, int maxx);

int main(void)
{
	int i;
	char a[9];

	srand(time(0));
	a[0] = _keygen(33, 46);     /* 1st set of special xter      */
	a[1] = _keygen(65, 90);     /* A - Z */
	a[2] = _keygen(48, 57);     /* numbers     */
	a[3] = _keygen(97, 122);    /* a - z */
	a[4] = _keygen(58, 64);     /* 2nd set of special xter      */
	a[5] = _keygen(48, 57);     /* numbers     */
	a[6] = _keygen(65, 90);     /* A - Z */
	a[7] = _keygen(97, 122);    /* a - z */

	/*printf("$\t A\t 1\t a\t $\t 1\t A\t a\t");*/
	printf("\n");

	for (i = 0; i < 8; i++)
		printf("%c\t", a[i]);

	printf("\n");

	for (i = 0; i < 8; i++)
        	printf("%d\t", a[i]);

	return (0);
}

char _keygen(int minn, int maxx)
{
	char result;
	result = (maxx + rand() / (RAND_MAX / (minn - maxx+ 1) + 1));

	return (result);
}

