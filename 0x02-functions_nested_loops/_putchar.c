#include <unistd.h>

/**
 * _putchar - writing chacter c to std
 *
 * Return: 1 for success and -1 for failur and errno are also set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
