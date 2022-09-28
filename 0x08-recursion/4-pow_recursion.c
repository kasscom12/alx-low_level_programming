#include "main.h"
/**
 * _pow_recursion - returns x to the y
 * @x: one num
 * @y: the exponent
 * Return: x to the y or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x* _pow_recursion(x, y - 1));
}
