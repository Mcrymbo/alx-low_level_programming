#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2-d array
 * @grid: 2-d array
 * @height: height of the array
 * Return: no return
 */
void n_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - split string into words
 * @str: string
 * Return: character
 */
char **strtow(char *str)
{
	char **s;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	s = malloc((height + 1) * sizeof(char *));
	if (s == NULL || height == 0)
	{
		free(s);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				s[i] = malloc((c - a1 + 2) * sizeof(char));
				if (s[i] == NULL)
				{
					n_free_grid(s, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			s[i][j] = str[a1];
		s[i][j] = '\0';
	}
	s[i] = NULL;
	return (s);
}
