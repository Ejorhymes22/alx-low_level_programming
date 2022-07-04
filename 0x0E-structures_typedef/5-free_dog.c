#include "dog.h"

/**
 * free_dog - frees a dog struct
 * @d: pointer to the dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
