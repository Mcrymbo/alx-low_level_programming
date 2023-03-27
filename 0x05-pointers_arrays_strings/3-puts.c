#include "main.h"

/**
 * _puts - prints a string
 *
 * @*str: string 
 * Return: no return
 */
void _puts(char *str)
{
	int i;

	while (i >=0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
