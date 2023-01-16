#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable type struct dog
 * @d: ptr to struct
 * @name: ptr to name
 * @age: flt age
 * @owner: chr owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
