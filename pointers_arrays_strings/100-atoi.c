#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: Always 0
 */
int _atoi(char *s)
{
	int a, b, c, l, z, x;

	a = 0;
	b = 0;
	c = 0;
	l = 0;
	z = 0;
	x = 0;
	while (s[l] != '\0')
		l++;
	while (a < l && z == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			x = s[a] - '0';
			if (b % 2)
				x = -x;
			c = c * 10 + x;
			z = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			z = 0;
		}
		a++;
	}
	if (z == 0)
		return (0);
	return (c);
}
