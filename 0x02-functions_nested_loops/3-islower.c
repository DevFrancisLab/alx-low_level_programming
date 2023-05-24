#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is to be checked
 * Return: if it is lower 1
 * else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
