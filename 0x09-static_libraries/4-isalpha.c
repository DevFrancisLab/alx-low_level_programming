#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: value to be checked
 *
 * Return: returns 1 if c it alphabet
 * returns 0 if it's not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
