#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: value to be checked.
 *
 * Return: 1 if it's a digit
 * otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
