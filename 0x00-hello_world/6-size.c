#include <stdio.h>

/**
 * main - prints the various types of filr on the computer
 *
 * Return: always 0 for success
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
