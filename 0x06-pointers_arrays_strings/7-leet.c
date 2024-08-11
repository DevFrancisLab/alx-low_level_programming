#include "main.h"
#include <stdio.h>

/**
 * leet - Encode into 1337speak
 * @n: Input value
 *
 * Return: n value
 */
char *leet(char *n)
{
	int i;
	int j;
	char s1[] = "aAeE00tTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
