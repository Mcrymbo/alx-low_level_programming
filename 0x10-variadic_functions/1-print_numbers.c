#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers followd by a new line
 * @separator: string to be printed between numbers
 * @n: numbers passed to the integer
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
