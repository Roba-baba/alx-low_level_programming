#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments that it receives.
 *
 * @argc: the number of arguments.
 *
 * @argv: an array of arguments.
 *
 * Return: 0 if a Success.
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
