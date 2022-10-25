#include <stdio.h>
void main(void)
{
	char text[] = "My name is ";
	char name[] = {"Ezra Mallo."};
	char c = 'E';
	char* d ="My DOB is 23rd Sept.";
	char *e = "I am from Enugu";
	char * f = "Ezra";


	/** 
	 *  c  = %d  or %i  or %c
	 *  &c = %p or %s
	 *  *c = %d
	*/

	printf("%s\n", text);
	printf("%s\n\n", name);


	printf("%d\n", c);
	printf("%i\n", c); 
        printf("%p\n", &c); 
	printf("%s\n\n", &c);


	/* printf &d, &e does not work */
        printf("%s\n", d);
	printf("%d\n", *d);
	printf("%p\n\n", &d);
				 
        printf("%s\n", e);
	printf("%d\n", *e);
        printf("%p\n\n", &e);

        printf("%s\n", f);
	printf("%d\n", *f);
        printf("%p\n\n", &f);
}
