#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: separates the strings
 * @n: number of strings
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;
	char *arr;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		arr = va_arg(pa, char *);
		if (arr)
			printf("%s", arr);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pa);
}
