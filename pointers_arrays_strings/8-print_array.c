#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: the result
 * @n: number of elements of the array to be printed
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
