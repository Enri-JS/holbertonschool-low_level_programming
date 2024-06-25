#include "main.h"
/**
 * swap_int - swaps the two variables
 * @a: variable to be swapped with b
 * @b: variable to be swapped with a
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
