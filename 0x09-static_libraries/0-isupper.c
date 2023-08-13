#include "main.h"

/**
 * _isupper - checks for uppercas
 * @c: value to be checked
 *
 * Return: 1 when value is uppercase
 * 0 when value is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
