#include "function_pointers.h"

/**
 * print_name - printing name
 * @name: the name
 * @f: pointer to the function
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
