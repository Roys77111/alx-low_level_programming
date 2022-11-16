#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int b, int c);
} op_t;
int op_add(int b, int c);
int op_sub(int b, int c);
int op_mul(int b, int c);
int op_div(int b, int c);
int op_mod(int b, int c);
int (*get_op_func(char *s))(int, int);
#endif
