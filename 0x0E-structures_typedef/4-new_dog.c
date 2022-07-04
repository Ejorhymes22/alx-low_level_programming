#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name member
 * @age: age membee
 * @owner: memeber
 *
 * Return: pointer to the new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
