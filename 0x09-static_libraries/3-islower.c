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
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
