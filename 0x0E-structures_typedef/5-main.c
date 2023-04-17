#include "dog.h"
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bobo");
	printf("My name is %s, and I am %.1f :) - woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
