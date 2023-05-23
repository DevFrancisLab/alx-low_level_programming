#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Success (0)
 */
int main(void)
{
	int n, m, o;

	for (n = 0; n < 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (o = m + 1; o <= 9; o++)
			{
				if ((m != n) != o)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + 0);
					if (n == 7 && m == 8)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
