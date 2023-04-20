#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments supplied
 * Return: sum of all parameters supplied
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pa, int);
	}
	va_end(pa);
	return (sum);
}
