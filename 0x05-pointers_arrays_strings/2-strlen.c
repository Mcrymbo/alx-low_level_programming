#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		i = i;
	return (i);
}
