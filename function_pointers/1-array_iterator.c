#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function as a parame on each elem of an array
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to the action
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
