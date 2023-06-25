#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a program that prints the opcodes.
 *
 * @argc: is arguments that are supplied to the program.
 *
 * @argv: array of pointers to the arguments.
 *
 * Return: always 0.
 *
 * By: Roba-guru.
 *
 */

int main(int argc, char *argv[])
{
	int k, j;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	k = atoi(argv[1]);

	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < k; j++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (j == k - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}