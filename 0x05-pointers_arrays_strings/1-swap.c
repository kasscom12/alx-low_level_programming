#include "main.h"

/**
 * swap_int - functions that swaps the value of two integers
 * @a: this is first entry
 * @b: this is second entry
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
