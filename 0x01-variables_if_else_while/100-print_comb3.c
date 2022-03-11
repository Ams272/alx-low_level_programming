#include <stdio.h>
/**
 * main - i love surprises
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int ch;
	int fl;
	int ll;

	for (ch = 0; ch <= 98; ch++)
	{
		ll = ch % 10;
		if (ch >= 10)
		{
			fl = ch / 10;
			if (fl != ll && fl < ll && ch != 90)
			{
				putchar(ch + '0');
			}
		} else
		{
			putchar(ch + '0');
		}
	}
	putchar('\n');
	return (0);
}
