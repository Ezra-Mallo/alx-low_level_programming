#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Write a function that initialize a variable of type struct dog
 * @d: First parameter
 */
void print_dog(struct dog *d)
{
	struct dog *ptr_dog;

	ptr_dog = d;
	if (ptr_dog != NULL)
	{
		if (ptr_dog->name == NULL)
		{
			printf("Name: nil\n");
			printf("Age: nil\n");
			printf("Owner: nil\n");
		}
		else
		{
			printf("Name: %s\n", ptr_dog->name);
			printf("Age: %f\n", ptr_dog->age);
			printf("Owner: %s\n", ptr_dog->owner);
		}
	}
}
