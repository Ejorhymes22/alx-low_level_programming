#include "dog.h"

/**
 * init_dog - initialises a variable of type
 * struct dog
 * @d: pointer to the variable
 * @name: pointer to the name member
 * @age: age membr
 * @owner: owner member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
