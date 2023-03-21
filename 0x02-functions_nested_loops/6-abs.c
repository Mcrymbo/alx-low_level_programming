#include "main.h"

/**
 * _abs - computes absolute value of a number
 *
 * @n: accepts an integer
 * Return: positive number for success
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
