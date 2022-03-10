#include <stdio.h>

/**
 * main - explained
 * Return: 0 returned
 */
int main(void)
{
	char c;
	int i;
	long int ln;
	long long int lnln;
	float fl;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lnln));
	printf("Size of a float: %lu byte(s)\n", sizeof(fl));

	return (0);
}
