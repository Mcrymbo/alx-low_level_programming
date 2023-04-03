#include "main.h"

/**
 * _strspn - get length of prefix substring
 * @s: string
 * @accept: second bytes
 * Return: number of string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (; accept[j] != '\0'; j++)
			{
				if (s[j] == accept[j])
				{
					k++;
				}
			}
		}
		else
			return (k);
	}
	return (k);
}
