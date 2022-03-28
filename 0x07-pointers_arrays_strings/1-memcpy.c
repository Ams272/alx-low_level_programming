#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: first arg
 * @src: second arg
 * @n: last arg
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	for (; n > 0; n--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}
