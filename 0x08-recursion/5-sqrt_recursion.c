#include "main.h"
/**
 * _increasevar - increases i to find sqrt
 * @i: starts at 1
 * @n: the number
 * Return: i, i + 1, or -1
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
	/**
	 * _sqrt_recursion - finds sqrt
	 * @n: the number
	 * Return: -1, 0, or sqrt
	 */
	int _pSqrt_recursion(int n)
	{
		if (n < 0)
			return (-1);
		else
			return (helperFunction(n, 0));
	}
