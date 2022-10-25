#include <stdio.h>      
/*#include <conio.h>  */
#include <stdlib.h>  
void main()  
{     
    // use rand() function to generate the number 
	int Num;

	Num = rand()% 6 + 1;
	printf (" The random number is: %d\n", Num);  

	Num = rand()% 16 + 10;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 26 + 21;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 36 + 31;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 46 + 41;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 56 + 51;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 66 + 61;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 76 + 71;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 86 + 81;
	printf (" The random number is: %d\n", Num);  
	
	Num = rand()% 96 + 91;
	printf (" The random number is: %d\n", Num);  
}  
