#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first memory location
 * @src: second memory area
 * @n: bytes of memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int) n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
