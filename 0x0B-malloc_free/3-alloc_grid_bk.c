#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dim array of int
 * @width: First parameter is for the number of columns
 * @height: Second parameter is for the number of rows
 * Return: returns an array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int row, col;

	if (width <= 0 || height <= 0)
		return (NULL);

/*Allocate memory addr for X number of rows(for each height)*/
	ptr = malloc(sizeof(int) * height);

	for (row = 0; row < height; row++)
	{
	/*Allocate memory addr for Y number of columns(width) for each row*/
		ptr[row] = malloc(sizeof(int) * width);

		if (ptr[row] == NULL)
		{
			/*If the assigned HEAP memory is NULL, free it for use.*/
			free(ptr[row]);
			free(ptr);

			for (col = 0; col < width; col++)
				ptr[row][col] = 0;
		}
	}
	return (ptr);
}
