#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: process (0) success
 */
int main(void)
{
	char char_Type;
	int int_Type;
	long int long_int_Type;
	long long int ll_int_Type;
	float float_Type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_Type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_Type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_Type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll_int_Type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_Type));
	return (0);
}
