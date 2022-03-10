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

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of a int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(ln));
	printf("Size of a long long int: %lu\n", sizeof(lnln));
	printf("Size of a float: %lu\n", sizeof(fl));

	return (0);
}
