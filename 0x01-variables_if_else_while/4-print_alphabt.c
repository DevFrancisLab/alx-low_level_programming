#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: outputs the result
 */
int main(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'e' || chr == 'q')
		{
			continue;
		}
		putchar(chr);
	}
	putchar('\n');
	return (0);
}
