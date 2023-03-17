#include <stdio.h>

/**
 * main - printing lowecase in reverse order
 *
 * Return: always 0 for success
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
