#include "main.h"
#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0 always
 */
int main(void)
{
	char *str;
	int len;

	str = "my first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
