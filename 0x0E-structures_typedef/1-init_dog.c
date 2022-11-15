#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: First parameter
 * @name: Second parameter
 * @age: Third parameer
 * @owner: Forth parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr_dog;


	ptr_dog = d;
	ptr_dog->name = name;
	ptr_dog->age = age;
	ptr_dog->owner = owner;
}
