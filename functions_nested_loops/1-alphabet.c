#include "main.h"
/**
 * print_alphabet - check code
 * Return: void
 * putchar - writes a single character to the standard output
 */

void print_alphabet(void)
{
	int c;

	c = 'a';

	while
		(c <= 'z') {
			_putchar(c);
			c++;
		}
	_putchar('\n');
}
