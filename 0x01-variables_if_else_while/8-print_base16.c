#include <stdio.h>

/**
 * main - printing hexadecimal numbers
 *
 * Return: always 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 15; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
