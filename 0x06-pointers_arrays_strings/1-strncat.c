#include "main.h"

/**
 * _strncat - concatenates strings
 *
 * @dest: first string
 * @src: second string
 * @n: count
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
