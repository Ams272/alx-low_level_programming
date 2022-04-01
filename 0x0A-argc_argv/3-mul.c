#include <stdio.h>
#include <stdlib.h>

/**
 * main - mul
 * @argc: counter
 * @argv: vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d", c);
		return (0);
	}
	printf("Error\n");
	return (1);
}
