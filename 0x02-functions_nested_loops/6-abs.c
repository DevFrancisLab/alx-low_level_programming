#include "main.h"

/**
 * _abs - converts i into positive
 * integer
 * @i: number to be checked
 *
 * Return: positive value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
