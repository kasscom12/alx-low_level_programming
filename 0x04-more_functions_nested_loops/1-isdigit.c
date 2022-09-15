#include "main.h"

/**
 * 1-isdigit - checks if a character is digit or not
 * @c: character to be tested
 * Return: 1 if it is, 0 otherwise
 */

int 1-isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
