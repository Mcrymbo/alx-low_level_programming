#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - printng anything.
 * @format: list of types of argument passed
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, j, k = 0;
	char *arr;
	const char arr_arg[] = "cifs";

	va_start(pa, format);
	while (format && format[i])
	{
		j = 0;
		while (arr_arg[j])
		{
			if (format[i] == arr_arg[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pa, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(pa, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(pa, double)), k = 1;
				break;
			case 's':
				arr = va_arg(pa, char *), k = 1;
				if (!arr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", arr);
				break;
		} i++;
	}
	printf("\n"), va_end(pa);
}
