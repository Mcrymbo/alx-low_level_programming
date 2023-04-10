#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two nuumbers
 * @argc: number of arguments
 * @argv: string array
 * Return: 0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
