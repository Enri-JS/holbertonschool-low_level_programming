#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input value
 * @m: iterate number
 * Return: always 0
 */
int _sqrt(int n, int m);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the square root
 * @n: input value
 * @m: iterate number
 * Return: always 0
 */
int _sqrt(int n, int m)
{
	int sqrt = m * m;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (m);

	return (_sqrt(n, m + 1));
}
