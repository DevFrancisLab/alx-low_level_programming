#include "main.h"
#include <string.h>

/**
 * print_rev - Prints reverse
 * @s: placeholder
 *
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s) - 1;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
