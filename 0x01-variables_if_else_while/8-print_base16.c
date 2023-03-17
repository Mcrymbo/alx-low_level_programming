#include <stdio.h>

/**
 * main - printing hexadecimal numbers
 *
 * Return: always 0 for success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 70; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
