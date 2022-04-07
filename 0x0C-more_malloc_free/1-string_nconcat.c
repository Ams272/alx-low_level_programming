#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates strings
 * @s1: first arg
 * @s2: second arg
 * @n: 3rd arg
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int *mem;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;

	while (*(s1 + i) != '\0')
		i++
	mem = malloc(sizeof(char) * (i + n + 1));
	if (mem == NULL)
		return (NULL);
	i = j = 0;

	while (*(s1 + i) != '\0')
	{
		*(mem + i) = *(s1 + i);
		i++;
	}
	while (j < n && *(s2 + j) != '\0')
	{
		*(mem + i) = *(s2 + j);
		i++, j++;
	}
	*(mem + i) = '\0';
	return (mem);
}
