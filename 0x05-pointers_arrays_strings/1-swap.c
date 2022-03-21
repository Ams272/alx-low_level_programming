#include "main.h"

/**
 * swap_int - swap integers
 * @a: arg 1
 * @b: arg 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
	*a = b;
	*b = a;
}
