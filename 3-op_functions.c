#include <stdlib.h>
#include "3-calc.h"


/**
 *
 * get_op_func - Selects the correct function before performing oeration.
 *
 * @s: operator being passed as an argument.
 *
 * Return: A pointer to the function.
 *
 * By: Roba-guru
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
