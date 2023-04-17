#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: Null if the function fails and struct dog for success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, in, io;

	if (!(name) || !(owner))
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (in = 0; name[in]; in++)
		;
	for (io = 0; owner[io]; io++)
		;
	ptr->name = malloc(in + 1);
	ptr->owner = malloc(io + 1);
	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name),free(ptr->owner),free(ptr);
		return (NULL);
	}
	for (i = 0; i < in; i++)
		ptr->name[i] = name[i];
	ptr->name[in] = '\0';
	ptr->age = age;
	for (i = 0; i < io; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[io] = '\0';
	return (ptr);
}
