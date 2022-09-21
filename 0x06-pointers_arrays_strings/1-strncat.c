#include "main.h"
/**
 * *_strncat - concatinate two strings but add inputed number of bytes
 * @dset: string to be appended upon
 * @src: strings to be completed at the end of dest
 * @n: integer parameter to compere index to 
 * Return: returns new concatinated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
