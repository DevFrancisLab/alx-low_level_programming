#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied form src.
 *
 * Return: A pointer to the resulting string dest.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		while (k < n && src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
		}
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
		return (dest);
	}
}
