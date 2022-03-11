#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - this is the function main description
 *
 * Return: return value is 0
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);

}