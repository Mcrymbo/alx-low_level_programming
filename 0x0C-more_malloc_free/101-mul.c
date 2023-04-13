#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _isn_zero - determines whther the number is zero
 * @argv: argument array
 * Return: no return
 */
void _isn_zero(char *argv[])
{
	int n1, n2, i;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			n1 = 0;
			break;
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			n2 = 0;
			break;
		}
	}
	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
 * memory_set - initializes memory to zero
 * @ar: array
 * @size: array size
 * Return: array pointer
 */
char *memory_set(char *ar, int size)
{
	int i = 0;

	for (i = 0; i < size; i++)
		ar[i] = '0';
	ar[size] = '\0';
	return (ar);
}

/**
 * leng -checks the length of the arguments
 * @argv: argument array
 * @n: numer of rows
 * Return: length
 */
int leng(char *argv[], int n)
{
	int i;

	for (i = 0; argv[n][i]; i++)
	{
		if (!isdigit(argv[n][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (i);
}
/**
 * main - entry
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, it, i, j, k, sum1, sum2, ca;
	char *s;

	if (argc != 3)
	{
		printf("Error\n"), exit(98);
	}
	n1 = leng(argv, 1), n2 = leng(argv, 2), _isn_zero(argv),
	   it = n1 + n2, s = malloc(it + 1);
	if (s == NULL)
	{
		printf("Error\n"), exit(98);
	}
	s = memory_set(s, it), i = n1 - 1, j = n2 - 1, k = it - 1, sum2 = ca = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
			if (sum2 > 0)
			{
				sum1 = (*(s + k) - '0') + sum2;
				if (sum1 > 9)
					*(s + k - 1) = (sum1 / 10) + '0';
				*(s + k) = (sum1 % 10) + '0';
			}
			i = n1 - 1, j--, sum2 = 0, ca++, k = it - (1 + ca);
		if (j < 0)
		{
			if (s[0] != '0')
				break;
			it--, free(s), s = malloc(it + 1), s = memory_set(s, it),
			  i = n1 - 1, j = n2 - 1, k = it - 1, sum2 = ca = 0;
		}
		if (j >= 0)
		{
			sum1 = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (s[k] - '0') + sum2;
			sum2 = sum1 / 10, s[k] = (sum1 % 10) + '0';
		}
	}
	printf("%s\n", s);
	return (0);
}
