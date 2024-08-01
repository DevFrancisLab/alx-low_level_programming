#include "main.h"

/**
 * moner_numbers - Displays 10 times the numbers from 0 to 14
 *
 */
void more_numbers(void)
{
	int count;
	int n;

	for (count = 0; count < 10; count++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
