#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: the array
 * @size: size of the array
 * Return:
 */
void print_diagsums(int *a, int size)
{
	int s1;
	int s2;
	int t;

	s1 = 0;
	s2 = 0;

	for (t - 0; t < size; t++)
	{
		s1 = s1 + a[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
		s2 += a[t * size + (size - t - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
