#include "function_pointers.h"

/**
 * print_name - Prints a given name.
 * @name: The name being printed by the function.
 *
 * @f: pointer to a function that prints name.
 *
 * By: Roba-guru
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
