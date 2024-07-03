#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string
 * @s: variable
 * Return: Always 0
 */
int _atoi(char *s)
{
	int a, b, c, len, f, dig;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	f = 0;
	dig = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == ' ')
			++b;
		if (s[a] >= '0' && s[a] <= '0')
		{
			dig = s[a] - '0';
			if (b % 2)
				dig = -dig;
			c = c * 10 + dig;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;
	printf("%d\n", res);
	return (0);
}
