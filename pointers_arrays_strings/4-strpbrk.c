#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: input variable
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
				return (s);
		}
		s++;
	}
	return ('\0');
}
