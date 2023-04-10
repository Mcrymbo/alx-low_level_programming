#include <stdio.h>

/**
 * main - number of arguments
 * @argc: string counts
 * @argv: store string variables
 * Return: number of strings
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
