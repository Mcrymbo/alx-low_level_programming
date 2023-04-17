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
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		if (!(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
