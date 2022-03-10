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

	printf("Size of a char: %lu\n byte(s)", sizeof(c));
	printf("Size of a int: %lu\n byte(s)", sizeof(i));
	printf("Size of a long int: %lu\n byte(s)", sizeof(ln));
	printf("Size of a long long int: %lu\n byte(s)", sizeof(lnln));
	printf("Size of a float: %lu\n byte(s)", sizeof(fl));

	return (0);
}
