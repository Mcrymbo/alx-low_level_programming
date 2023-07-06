#include "main.h"

/**
 * binary_to_uint - converts binary numner to unsigned int
 * @b: binary number
 * Return: conveted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] > '1')
			return (0);
		else if (b[i] == '1')
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
