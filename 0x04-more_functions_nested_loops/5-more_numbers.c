#include <stdio.h>
#include "main.h"

/** 
 * more_numbers - more
 * Return: void
 * 
 */
void more_numbers(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
