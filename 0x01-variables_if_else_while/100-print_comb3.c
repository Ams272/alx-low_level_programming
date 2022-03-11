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

	for (ch = 0; ch <= 100; ch++)
	{
		ll = ch % 10;
		fl = ch / 10;
			if (fl < ll)
			{
				putchar(fl + '0');
				putchar(ll + '0');
				if (ch < 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
