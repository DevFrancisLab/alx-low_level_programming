#include "main.h"

/**
 * print_diagonal - Draws diagonal line on the terminal
 * @n: Takes a value
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	for (i = 0; i < n; i++)
	{

		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
	}

}
