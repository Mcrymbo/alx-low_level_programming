#include "3-function_like_macro.h"
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = ABS(-98) * 10;
	j = ABS(98) * 10;
	printf("%d, %d\n", i, j);
	return (0);
}
