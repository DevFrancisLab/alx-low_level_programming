#include "main.h"

/**
 * _puts - prints string
 * @str: place holder
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	 int i;

	for (i = 0; i < 64; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
