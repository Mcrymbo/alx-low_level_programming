#include "main.h"

/**
 * 2-print_alphabet_10x - prints alphabets 10 times
 *
 * Return: always 0 for success
 */
void print_alpahbet_10x(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 97; j < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
