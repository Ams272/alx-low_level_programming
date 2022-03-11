#include <stdio.h>
/**
 * main - alphabets
 * Return: 0 always
 *
 */

int main(void)
{
	char ch;
	char up;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');
	return (0);
}
