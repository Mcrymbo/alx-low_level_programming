#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
