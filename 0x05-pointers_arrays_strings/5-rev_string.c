#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: no return
 */
void rev_string(char *s)
{
	int i, j;
	char tm;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j < i / 2; j++)
	{
		tm = s[i];
		s[i] = s[i - 1];
		s[(i - 1)--] = tm;
	}
}
