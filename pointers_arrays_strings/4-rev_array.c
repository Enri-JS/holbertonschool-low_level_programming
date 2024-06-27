#include "main.h"
/**
 * reverse_array - reversed content of an array or integers
 * @n: number of elements of the array
 * @a: the array
 * Return:
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
