#include "main.h"
#include <string.h>

/**
 * _puts - prints string
 * @str: place holder
 *
 * Return: Nothing.
 */
void _puts(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
