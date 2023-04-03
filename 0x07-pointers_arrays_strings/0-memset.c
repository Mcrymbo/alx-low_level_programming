#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: first memory
 * @b: second memory
 * @n: byte position
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;

	while (n--)
		*p++ = b;
	return (s);
}
