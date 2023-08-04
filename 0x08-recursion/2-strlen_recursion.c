#include "main.h"

/**
 * _strlen_recursion - prints length of a string
 * @s: value to be calculated
 *
 * Return: n
 */
int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
