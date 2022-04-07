#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - call
 * @nmemb: arg1
 * @size: size
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char* mem;
	int i, n;

	n = size * nmemb;
	if (nmeb == 0 || size == 0)
		return (NULL);
	mem = malloc(n);
	if (!mem)
		return (NULL);

	for (i = 0; i <= n; i++)
		*(mem + i) = '0';
	return ((void *)mem);
}
