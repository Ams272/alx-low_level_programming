#include "main.h"

/**
 * _puts_recursion - recursion
 * @s: arg
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(*s);
	_puts_recursion(s + 1);
}
