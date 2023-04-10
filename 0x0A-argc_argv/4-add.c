#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: size of arguments
 * @argv: arguments
 * Return: 0 for success and 1 for failure
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (argc == 1)
		{
			printf("0\n");
		}
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
		}
		else if (*argv[i] == 45)
		{
			sum = sum;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
