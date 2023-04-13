#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: memory for fist string
 * @s2: memory for second string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
		return (NULL);
	s = malloc(strlen(s1) + n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		*(s + i) = *(s1 + i);
	}
	for (i = 0; i < strlen(s1) + n; i++)
	{
		*(s + i + strlen(s1)) = *(s2 + i);
	}
	*(s + strlen(s1) + n) = '\0';
	return (s);
}

