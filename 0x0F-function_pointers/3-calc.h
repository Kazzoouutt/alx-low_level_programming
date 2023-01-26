#ifndef CALC_H
#define CALC_H

/**
 * Author: Kazzoouutt
 * About: Heaader file containing all prototypes used
 * for solving third task in the functions_prototype tasks.
 */

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 * @a: The first number
 * @b: The second number
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
