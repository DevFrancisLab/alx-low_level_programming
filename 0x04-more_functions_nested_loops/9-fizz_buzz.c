#include <stdio.h>

/**
 * main - Calculate and print Fizz Buzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			char str[] = "FizzBuzz";

			printf("%s", str);
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			char str[] = "Fizz";

			printf("%s", str);
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			char str[] = "Buzz";

			printf("%s", str);
			printf(" ");
		} else
		{

			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
