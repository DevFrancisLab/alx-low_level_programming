#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: outputs the character list
 */
int main(void)
{
	char chr;
	char CHR;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		putchar(chr);
	}
	for (CHR = 'A'; CHR <= 'Z'; CHR++)
	{
		putchar(CHR);
	}
	putchar('\n');
	return (0);
}
