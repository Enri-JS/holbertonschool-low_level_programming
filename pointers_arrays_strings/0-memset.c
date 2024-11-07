#include <stdio.h>
#include "main.h"
/**
 * _memset - Entry point, function
 * @s: destination to where it points
 * @b: the constant byte
 * @n: the number of bytes
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
