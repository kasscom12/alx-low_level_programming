#include "main.h"
/**
 * _increasevar - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int helperFunction(int num, int psqrt)
{
	if ((psqrt * psqrt) == num)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (helperFunction(num, psqrt + 1));
	}
	/**
	 * _sqrt_recursion - finds sqrt
	 * @n: the number
	 * Return: -1, 0, or sqrt
	 */
	int _sqrt_recursion(int n)
	{
		if (n < 0)
			return (-1);
		else
			return (helperFunction(n, 0));
	}
