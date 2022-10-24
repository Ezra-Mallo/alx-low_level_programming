#include "main.h"


/**
 * swap_int - This function swaps the values of 2 int
 * @a: first parameter - memory address
 * @b: Second parameter - memoery address
 * Return
 **/
void swap_int(int *a, int *b)
{
	int tmp;

	/**
	 *(To assigns content a pointer to another pointer you do *var1 = *var2.
	 *(    *tmp => points to the content of the variable tmp
	 *(    *a   => point  to teh content of the variable a
	 *(    *b   => points to the content of the variable b
	 *(    &a   => is the address of the pointer
	 */

	tmp = *a;
	*a = *b;
	*b = tmp;
}
