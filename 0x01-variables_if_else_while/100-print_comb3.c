#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int num, n;

	for (num = 0; num < 9; num++)
	{
		for (n = num + 1; n <= 9; n++)
		{
			if (n != num)
			{
				putchar('0' + num);
				putchar('0' + n);
				if (num == 8 && n == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
