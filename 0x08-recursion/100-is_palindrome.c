#include "main.h"
/**
 * _strlen - print length of string
 * @s: string
 * Return: lenhth of string;
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * similarity - checks if characters are similar
 * @s: string
 * @f: first character
 * @e: end of character
 * Return: 1 if palindrome and 0 otherwise
 */
int similarity(char *s, int f, int e)
{
	if (*(s + f) == *(s + e))
	{
		if (f == e || f == e + 1 || *s == '\0')
			return (1);
		return (0 + similarity(s, f + 1, e - 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 1 for palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (similarity(s, 0, _strlen(s) - 1));
}
