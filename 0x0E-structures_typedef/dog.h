#ifndef _DOG_H_
#define _DOG_H_

struct dog
{
	char* name;
	float age;
	char* owner;
};

#include <stdlib.h>
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
