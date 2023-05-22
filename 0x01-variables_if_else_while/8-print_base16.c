#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Output hexadecimals
 */
int main(void)
{
	int i;
	char n;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
