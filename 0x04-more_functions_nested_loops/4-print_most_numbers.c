#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 but skips 2 and 4
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar('0' + n);
	}
	_putchar('\n');
}
