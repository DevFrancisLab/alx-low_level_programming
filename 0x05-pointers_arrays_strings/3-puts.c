#include "main.h"

/**
 *
 */
void _puts(char *str)
{
	unsigned long int i;

	for (i = 0; i<64; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
