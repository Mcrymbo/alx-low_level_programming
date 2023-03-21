#include "main.h"

/**
 * print_sign - prints + for positive number and - for
 * negative numbers
 *
 * @n: number to be checke
 *
 * Return: 1 for success and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
