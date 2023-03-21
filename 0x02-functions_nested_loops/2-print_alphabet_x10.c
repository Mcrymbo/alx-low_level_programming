#include "main.h"

/**
 * print_alphabet_10x - prints alphabets 10 times
 *
 * Return: always 0 for success
 */
void print_alphabet_10x(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
