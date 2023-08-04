#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: value to be calculated
 *
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
