#include "main.h"

/**
 * print_rev - this function prints a reverse string
 *
 * @s: This is the input string 
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
