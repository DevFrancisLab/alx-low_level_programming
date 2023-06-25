#include <stdarg.h>

/**
 * sum_them_all - variadic function
 * @n: counter parameter
 *
 * Return: 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j;
	int x;
	int sm = 0;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (j = 0; j < n; j++)
	{
		x = va_arg(args, int);
		sm += x;
	}
	va_end(args);
	return (sm);
}
