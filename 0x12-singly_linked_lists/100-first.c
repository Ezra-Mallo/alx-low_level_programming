#include <stdio.h>
void constructor_run_b4_main_function(void) __attribute__((constructor));


/**
 * constructor_run_b4_main_function - this is the constructor that executes
 *                      before the main fucntion
 */
void constructor_run_b4_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
