#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: holds address of a
 * @b: holds address of b
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
