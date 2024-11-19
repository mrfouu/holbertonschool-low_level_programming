#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - additions
 * @a: premier argument
 * @b: deuxieme argument
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustractions
 * @a: premier argument
 * @b: deuxieme argument
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplications
 * @a: premier argument
 * @b: deuxieme argument
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divisions
 * @a: premier argument
 * @b: deuxieme argument
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: premier argument
 * @b: deuxieme argument
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
