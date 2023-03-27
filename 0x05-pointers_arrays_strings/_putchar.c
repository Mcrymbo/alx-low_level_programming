#include <unistd.h>

/**
 * _putchar - prints character
 *
 * @c: the character to be printed
 * 
 * Return: 1 for success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
