#ifndef __MAIN_HEAD__
#define __MAIN_HEAD__
/**
 * struct dog - This is the struct
 * @name: First parameter
 * @age: Second parameter
 * @owner: Third parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
