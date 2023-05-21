#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: outputs the result
 */
int main(void)
{
	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
