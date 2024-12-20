#include "main.h"
/**
* _pow_recursion - Write a function that returns the value of x raised to the
* power of y.
*
* @x: This is the input number
* @y: This is the power number
*
* Return: if "y" is bigger than zero raised to the power of "y",
* return -1 if "y" is lower than zero, return 1 if "y" is equal to 1,
*/
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
