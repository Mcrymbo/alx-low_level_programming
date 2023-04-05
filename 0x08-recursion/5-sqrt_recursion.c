#include "main.h"

/**
 * conditions - checkes conditions
 * @b: base number to check
 * @a: number to check against base
 * Return: natural root
 */
int conditions(int a, int b)
{
	if (a % (b / a) == 0)
	{
		if (a * (b / a) == b)
			return (a);
		else
			return (-1);
	}
	return (0 + conditions(a + 1, b));
}

/**
 * _sqrt_recursion - squareroot of a number
 * @n: number
 * Return: -1 does not have natural root
 * root otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (conditions(1, n));
}
