#include "main.h"

/**
 * magic_print - prints magic
 * @mag: magic
 */
void magic_print(char *mag)
{
	int len;

	printf("Magic:		");
	for (len = 0; len < 16; len++)
		printf("%02x", mag[len]);
	printf("\n");
}
/**
 * data - prints data
 * @mag: magic
 */
void data(char *mag)
{
	char ch = mag[5];

	printf("Data:			2's complements");
	if (ch == 1)
		printf(", little endian\n");
	if (ch == 2)
		printf(", big endian\n");
}
/**
 * version_print - prints version of system
 * @mag: magic
 */
void version_print(char *mag)
{
	int ver = mag[6];

	printf("Version:			%d", ver);
	if (ver == EV_CURRENT)
		printf("(current)");
	printf("\n");
}
/**
 * osabi_print - prints OS/ABI
 * @mag: magic
 */
void osabi_print(char *mag)
{
	char ch = mag[7];

	printf("OS/ABI:				");
	if (ch == 0)
		printf("UNIX - System V\n");
	else if (ch == 2)
		printf("UNIX - NetBSD\n");
	else if (ch == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", ch);
	printf("ABI Version:			%d\n", mag[8]);
}
/**
 * type_print - prints type of file
 * @mag: magic
 */
void type_print(char *mag)
{
	char ch = mag[16];

	if (mag[5] == 1)
		ch = mag[16];
	else
		ch = mag[17];
	printf(" Type:				");
	if (ch == 0)
		printf("NONE (No file type)\n");
	else if (ch == 1)
		printf("REL (RElocatable file)\n");
	else if (ch == 2)
		printf("EXE (Executable file)\n");
	else if (ch == 3)
		printf("DYN (Shared object file)\n");
	else if (ch == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", ch);
}
/**
 * addr_print - printing address
 * @mag: magic
 */
void addr_print(char *mag)
{
	int i, entr;
	char sys;

	printf("Entry point of address:			0x");
	sys = mag[4] + '0';
	if (sys == '1')
	{
		entr = 26;
		printf("80");
		for (i = entr; i >= 22; i--)
		{
			if (mag[i] > 0)
				printf("%x", mag[i]);
			else if (mag[i] < 0)
				printf("%x", mag[i] + 256);
		}
		if (mag[7] == 6)
			printf("00");
	}
	if (sys == '2')
	{
		entr = 26;
		for (i = entr; i > 23; i--)
		{
			if (mag[i] >= 0)
				printf("%02x", mag[i]);
			else if (mag[i] < 0)
				printf("%02x", mag[i] + 256);
		}
	}
	printf("\n");
}
/**
 * version_check - prints version of the system
 * @mag: magic
 */
void version_check(char *mag)
{
	char ch = mag[4] + '0';

	if (ch == '0')
		exit(98);
	printf("ELF Header:\n");
	magic_print(mag);
	if (ch == 1)
		printf("Class:                          ELF32\n");
	if (ch == 2)
		printf("Class:                          ELF64\n");
	data(mag);
	version_print(mag);
	osabi_print(mag);
	addr_print(mag);
	type_print(mag);
}

/**
 * elf_check - checking if it an elf file
 * @mag: magic
 * Return: 1 if elf exist
 */
int elf_check(char *mag)
{
	int addr = (int)mag[0];
	char E = mag[1];
	char L = mag[2];
	char F = mag[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
 * main - texting the code
 * @ac: argument count
 * @av: argument vector
 * Return: 0 always
 */
int main(int ac, char *av[])
{
	int fd, res;
	char ch[27];

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_header elf_file_name\n");
		exit(98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	res = read(fd, ch, 27);
	if (res == -1)
	{
		dprintf(2, "Error: Can't read %s file\n", av[1]);
		exit(98);
	}
	if (!elf_check(ch))
	{
		dprintf(2, "Error: %s is not an elf file", av[1]);
		exit(98);
	}
	version_check(ch);
	close(fd);
	return (0);
}
