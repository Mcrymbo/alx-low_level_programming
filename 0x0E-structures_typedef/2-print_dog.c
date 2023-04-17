#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - print struct dog
 * @d: struct dog poiter
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "nil";
		else if (d->owner == NULL)
			d->owner = "nil";
		else if (d != NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
