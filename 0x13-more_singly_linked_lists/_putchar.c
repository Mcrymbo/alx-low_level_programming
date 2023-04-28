#include <unistd.h>

/**
 * _putchar - prints characters
 * @c: character to print
 * Return: 1 for for success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
