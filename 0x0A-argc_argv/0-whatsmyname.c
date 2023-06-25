#include <stdio.h>
#include "main.h"

/**
 * main - prints program's name.
 *
 * @argc: the number of arguments.
 *
 * @argv: an array of arguments.
 *
 * Return: 0 if successful.
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

