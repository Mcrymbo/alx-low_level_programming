#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: argument array
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int c, i, j, l;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	s = malloc((c + 1) * sizeof(char));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = j = l = 0; l < c; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			s[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < c - 1)
			s[l] = av[i][j];
	}
	s[l] = '\0';
	return (s);
}
