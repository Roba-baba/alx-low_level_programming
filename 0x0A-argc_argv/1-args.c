#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments that has been passed to the program.
 *
 * @argc: the number of arguments to be passed.
 *
 * @argv: an array of arguments.
 *
 * Return: 0 if a Success.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
