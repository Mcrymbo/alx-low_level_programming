#include "main.h"

/**
 * more_numbers - printing 0 to 14 ten times
 *
 * Return: no return
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; i++)
	{
		for (b = 0; a < 15; b++)
		{
			if (b >= 10)
				_putchar((b % 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
