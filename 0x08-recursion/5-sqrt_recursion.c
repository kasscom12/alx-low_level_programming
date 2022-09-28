#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists 
 * @num: number
 * @sqrt: sqrt number
 *
 * Return: sqrt number 0 - for error
 */
int helperFunction(int num, int sqrt)
{
	if ((sqrt * sqrt) == num)
	{
		return (sqrt);
	}
	else
	{
		if ((sqrt * sqrt) > num)
			return (-1);
		else
			return (helperFunction(num, sqrt + 1));
	}
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
