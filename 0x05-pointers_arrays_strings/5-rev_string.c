#include "main.h"

/**
 * rev_string - Reverses tring
 * @s: Pointer to string to be reversed
 *
 */
void rev_string(char *s)
{
	int len;
	int index;
	char temp;

	len = 0;
	index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
