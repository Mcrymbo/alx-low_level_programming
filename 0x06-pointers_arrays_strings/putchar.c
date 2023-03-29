#include <unistd.h>

/**
 * _putchar - prints char
 *
 * @c: character
 * Return: 1 for success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
