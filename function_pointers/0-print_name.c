#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints name
 * @name: name that will be printed
 * @f: pointer
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
