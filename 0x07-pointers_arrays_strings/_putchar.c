#include <unistd.h>

/**
 * _putchar - ptints character
 * @c: character
 * Return: 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
