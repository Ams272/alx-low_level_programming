#include <stdio.h>
/**
 * main - hard things
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
