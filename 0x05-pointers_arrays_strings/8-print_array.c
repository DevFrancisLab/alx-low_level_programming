#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of the array
 * @a: Pointer to the array
 * @n: number of elements of the array
 *
 */
void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);

		if (n != 4)
			printf(", ");
		else

			printf("\n");

	}
}
