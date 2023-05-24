#include "main.h"

/**
 * print_last_digit - checks last digit of a number
 * @i: number to be checked
 *
 * Return: the result of modulus operator
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
