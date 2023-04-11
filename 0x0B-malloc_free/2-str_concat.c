#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string on sucess and NULL on faulure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	l = j;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		*(s + k) = *(s1 + k);
	for (j = 0; j < l; k++, j++)
		*(s + k) = *(s2 + j);
	return (s);
}
