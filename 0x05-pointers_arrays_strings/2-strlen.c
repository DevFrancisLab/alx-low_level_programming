#include "main.h"

/**
 * _strlen - Calculates the length of string
 * @s: String holder
 *
 * Return: i.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
{
	i++;
}
	return (i);
}
