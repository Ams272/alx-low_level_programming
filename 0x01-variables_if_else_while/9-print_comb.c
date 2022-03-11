#include <stdio.h>
/**
 * main - heere we go again, numbers
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
