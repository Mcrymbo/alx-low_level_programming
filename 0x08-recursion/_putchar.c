#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character
 * Return: 1 for sucess and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
