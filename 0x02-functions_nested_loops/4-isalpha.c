#include "main.h"

/**
 * _isalpha - checks for alphabet character
 *
 * @c: is an ascii code for character
 *
 * Return: 1 for success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
