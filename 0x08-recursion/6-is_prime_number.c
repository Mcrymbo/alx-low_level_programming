#include "main.h"

/**
 * primo - checking for prime number
 * @i: some value
 * Return: 1 for prime number and 0 otherwise
 */
int primo(int n, int i)
{
	if (i == 1 && n != 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (primo(n, i - 1));
}
/**
 * is_prime_number - test if a number is prime number
 * @n: number
 * Return: number
 */
int is_prime_number(int n)
{
	return (primo(n, 9));
}
