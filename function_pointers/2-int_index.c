#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array being searched
 * @size: size of the array
 * @cmp: function
 * Return: if size <= 0, returns -1, if no elem, return -1 as well
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
	}
	return (-1);
}
