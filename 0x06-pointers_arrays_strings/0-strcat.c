#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
