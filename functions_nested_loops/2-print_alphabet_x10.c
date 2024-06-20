#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char cl;
	int c;

	c = 0;

	while (c < 10)
	{
		for (cl = 'a'; cl <= 'z'; cl++)
		{
			_putchar(cl);
		}
	_putchar('\n');
	c++;
	}
}
