#include "main.h"

/**
 * * _islower - Shows 1 if the input is is lower case
 * *
 * * @c: ascii code for character
 *
 *  * Return: 1 if c is lower case; 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
