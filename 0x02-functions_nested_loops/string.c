#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b ;
	char test[] = "Hello World!";
	
	a = sizeof(test);
	//b = strlen(test);
	printf("%d", a);
	printf("\n\n\n");
	//printf("%d",  b);
}

