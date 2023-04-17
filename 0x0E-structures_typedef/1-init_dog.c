#include "dog.h"

/**
 * init_dog - initializes struct god
 * @d: structure
 * @name: dog's name
 * @age: dog's name
 * @owner: dog's owner
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
