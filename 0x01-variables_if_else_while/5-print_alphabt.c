#include <stdio.h>

/**
 * main - printing alphabet except q or e
 *
 * Return: always 0 for success
 */
int main(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		if (i != 'e' && i != 'z')
		{
			putchar(i);
		}
	}
	putchar(i);
	return (0);
}
