#include "main.h"

/**
 * print_alphabet - print the alphabet numbers in lower case
 *
 * Return: always 0 for success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
