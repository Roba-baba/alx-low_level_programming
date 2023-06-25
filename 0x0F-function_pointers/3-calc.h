#ifndef CALC_H
#define CALC_H

/*
 * Desc: Header file with  all structures and prototypes used in main function.
 *
 * struct op - A structure of OP.
 *
 * @op: The operator.
 *
 * @f: associated function.
 *
 * By: Roba-guru.
 *
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
