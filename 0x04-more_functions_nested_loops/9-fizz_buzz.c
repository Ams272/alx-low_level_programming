#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 *
 * Return: void
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			i = '"Fizz";
			printf("%c ", i);
		}
		else if ((i % 5) == 0)
		{
			i = "Buzz";
			printf("%c ", i);
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			i = "FizzBuzz";
			printf("%c ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
