#include <stdio.h>

/**
 * main - printing all arguments
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: all arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
