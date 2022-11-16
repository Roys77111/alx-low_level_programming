#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a:the first number
 * @b:the second number
 *
 * Return:The sum of b and c
 */
int op_add(int b, int c)
{
	return (b + c);
}

/**
 * op_sub - Returns the substraction of two numbers
 * @a:The first number
 * @b:The second number
 *
 * Return: The Difference of b and c
 */
int op_sub(int b, int c)
{
	return (b - c);
}

/**
 * op_mul - Returns the multiplication of two numbers
 * @a:The first number
 * @b: The second number
 *
 * Return: The multiplication of b and c
 */
int op_mul(int b, int c)
{
	return (b * c);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The quotient of b and c.
 */
int op_div(int b, int c)
{
	return (b / c);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of b by c.
 */
int op_mod(int b, int c)
{
	return (b % c);
}
