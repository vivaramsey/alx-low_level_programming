#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints all members of a struct dog
 * @d: variable of type struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);

	prinf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);
}

