#include "main.h"
#include <stdlib.h>

/**
 * _strdup - ontains a copy of given string
 * @str: string
 * Return: string pointer
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != 0)
		i++;
	s = (char *) malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i + 1; j++)
		*(s + j) = *(str + j);
	return (s);
}
