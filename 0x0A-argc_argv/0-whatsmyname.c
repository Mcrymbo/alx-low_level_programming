#include <stdio.h>

/**
 * main - prints name of a program
 *
 * @argc: variables count
 * @argv: string variables inputed by the user
 *
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
