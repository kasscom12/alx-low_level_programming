#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to copied to
 * @src:memory area to be copied from
 * @n: number of bytes  to be copied
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
