#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d:pointer to struct
 *
 * Retun: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);
	if (d->name == NULL)
	       printf("Name: (nil)\n");
	else if (d->name)
		printf("Name: %s\n", d->name);
	if (d->age)
	       printf("Age: %f\n", d->age);
	else if (!(d->age))
		printf("Age: (nil)\n");
	if (!(d->owner))
		printf("Owner: (nil)\n");
	else if (d->owner)
		printf("Owner: %s\n", d->owner);
}
