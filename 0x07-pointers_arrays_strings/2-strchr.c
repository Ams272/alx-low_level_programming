#include "main.h"

/**
 * _strchr - locate string
 * @s: string
 * @c: charac
 *
 * Return: c or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i});
	}
	return (0);
}