#include "main.h"

/**
 * _pow_recursion - return the the value f 'x' raise dto the power of 'y'
 * @x: integer taking power
 * @y: integer becoming the power
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
