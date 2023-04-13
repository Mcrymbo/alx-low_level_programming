#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: memory for fist string
 * @s2: memory for second string
 * @n: number of array to condider in s2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;

	s = malloc(i + n + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i + n; k++)
	{
		if (k < i)
			*(s + k) = *(s1 + k);
		else
			*(s + k) = *(s2 + k - i);
	}
	*(s + i + n) = '\0';
	return (s);
}

