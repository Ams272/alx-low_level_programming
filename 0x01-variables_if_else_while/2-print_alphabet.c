#include <stdio.h>
/**
 * main - a to z
 *
 * Return: 0 as always
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
