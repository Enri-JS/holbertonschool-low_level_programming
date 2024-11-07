#include <stdio.h>
#include "main.h"
/**
 * _strchr - entry point, function
 * @c: variable
 * @s: variable
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int v;

	for (v = 0; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (s + v);
	}
	return (NULL);
}
