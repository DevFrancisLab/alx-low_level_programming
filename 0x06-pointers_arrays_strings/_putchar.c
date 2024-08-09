#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: Success 1
 * Error, -1 is returned, and error number is sent
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
