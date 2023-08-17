#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * bigs - finds the largest number
 * @usrn: username
 * @n: length of username
 * Return: chars
 */
int bigs(char *usrn, int n)
{
	unsigned int rand_n;
	int ch, chr;

	ch = *usrn;
	chr = 0;
	while (chr < n)
	{
		if (ch < usrn[chr])
			ch = usrn[chr];
		chr++;
	}
	srand(ch ^ 14);
	rand_n = rand();
	return (rand_n & 63);
}
/**
 * muls - multiplies each character of username
 * @usrn: username
 * @n: length of username
 * Return: chars muplied
 */
int muls(char *usrn, int n)
{
	int ch = 0, chr = 0;

	while (chr < n)
	{
		ch += usrn[chr] * usrn[chr];
		chr++;
	}
	return (((unsigned int)ch ^ 239) & 63);
}
/**
 * chrs - generates random chars
 * @usrn: username
 * Return: random chars
 */
int chrs(char *usrn)
{
	int ch = 0, chr = 0;

	while (chr < *usrn)
	{
		ch = rand();
		chr++;
	}
	return (((unsigned int)ch ^ 229) & 63);
}
/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: 0 always
 */
int main(int ac, char **av)
{
	char keygen[7];
	int len, ch, chr;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };

	(void)ac;
	for (len = 0; av[1][len]; len++)
		;

	keygen[0] = ((char *)alph)[(len ^ 59) & 63];

	ch = chr = 0;
	while (chr < len)
	{
		ch += av[1][chr];
		chr++;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	/*...........................................*/
	ch = 1, chr = 0;
	while (chr < len)
	{
		ch = av[1][chr] * ch;
		chr++;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	/*..........................................*/
	keygen[3] = ((char *)alph)[bigs(av[1], len)];
	/*..........................................*/
	keygen[4] = ((char *)alph)[muls(av[1], len)];
	/*..........................................*/
	keygen[5] = ((char *)alph)[chrs(av[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
