#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print struct
 * @d: ptr to struct dog
 */
void print(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name:%s\nAge:%f\nOwner%s\n", d->name, d->age, d->owner);
}
