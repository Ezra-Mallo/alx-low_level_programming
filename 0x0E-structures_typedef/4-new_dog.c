#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Write a function that initialize a variable of type struct dog
 * @name: First parameter
 * @age: Second parameter
 * @owner: Third parameter
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);


	n_dog->name = name;
	n_dog->age = age;
	n_dog->owner = owner;

	return (n_dog);
}
