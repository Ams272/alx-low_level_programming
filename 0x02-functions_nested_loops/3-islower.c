#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - lower case
 * @c: para 1
 *
 * Return: 0 or 1
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	return (0);
}
